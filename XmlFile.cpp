
#include "XmlFile.h"
#include "tinyxml2.h"
#include <windows.h>  
using namespace tinyxml2;
XmlFile* XmlFile::m_pInstance = 0;
XmlFile::XmlFile()
{
	std::string filepath = GetExePath();
    filepath += "\\ClientInfo.xml";
	ParseFile(filepath.c_str());
	
}


void XmlFile::ParseFile(const char* file)
{
	tinyxml2::XMLDocument doc;
	if (doc.LoadFile(file) != XML_NO_ERROR) 
	{
		const char* error = doc.GetErrorStr1();
		printf("\n ********配置文件解析错误!!! %s \n", error);
		return;
	}
	
	//parse attribute
	XMLElement* kissElement = doc.FirstChildElement("server");
	if (kissElement == NULL) {
		return;
	}

	const char* netAttr = kissElement->Attribute("type");
    if ((netAttr != NULL) && (strcmp(netAttr, "URL") == 0))
    {
		//当前模块为URL关系模块
	}



    // IPPort
    XMLElement* IPElement = kissElement->FirstChildElement("IPPort");
    if(IPElement)
    {
        const char* IP = IPElement->Attribute("IP");
        const char* Port = IPElement->Attribute("Port");
        m_strIP = IP;
        m_strPort = Port;
    }


    // device
	XMLElement* deviceElement = kissElement->FirstChildElement("device");
	while (deviceElement != NULL) 
	{
		
        const char* URLID = deviceElement->Attribute("URLID");
        const char* realityURL = deviceElement->Attribute("realityURL");

        if (URLID && realityURL)
		{
			//请不要改变顺序
			vector<std::string> info;
            info.push_back(realityURL);
            m_FileIPMap.insert(make_pair(URLID, info));
        }

        deviceElement = deviceElement->NextSiblingElement("device");
	}

}



string XmlFile::GetExePath()
{
	char buffer[MAX_PATH] = { 0 };

    GetModuleFileNameA(NULL, (LPSTR)buffer, MAX_PATH);
	std::string file = buffer;
	std::string path = ".\\";
	size_t pos = file.rfind('\\');

	if (pos < file.size()) {
		path = file.substr(0, pos + 1);
	}

	return path;
}
