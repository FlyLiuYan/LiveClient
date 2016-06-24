#pragma once
#include <map>
#include <vector>
#include <string>
using namespace std;
class XmlFile
{
private:
	XmlFile();
	static XmlFile *m_pInstance;
	
public:
	static XmlFile * GetInstance()
	{
		if (m_pInstance == NULL)  //判断是否第一次调用  
			m_pInstance = new XmlFile();
		return m_pInstance;
	}

	void ParseFile(const char* file);
	string GetExePath();
	map < string, vector<string> >  m_FileIPMap;
    string  m_strIP;
    string  m_strPort;

};

