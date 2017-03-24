#include <iostream>
#include <map>
using namespace std;

//抽象编解码类
class Code 
{
	virtual Code* Clone() const = 0;
}
//三个具体的编解码类
class CodeMP3 : public Code
{
	Code* Clone() {return new CodeMP3(*this);}
};
class CodePCM : public Code
{
	Code* Clone() {return new CodePCM(*this);}
};

class CodeG729 : public Code
{
	Code* Clone() {return new CodeG729(*this);}
};

class PrototypeManager
{
public:
	bool RegisterCodeForKey(string key, Code* pCode){
		m_codeMap[key] = pCode;
		return true;
	}
	Code* GetCodeByKey(string key){
		return m_codeMap[key];
	}
	void Initialize(const char* filename)
	{
		//Code = PCM, MP3, G729
		//截取字符串，然后根据字符串的值注册到系统中。
		while(1)
		{
			string strCode;
			//begin to read strCode,如果到达文件尾部，终止循环
			if(strCode.compare("PCM") == 0 )
				RegisterCodeForKey("PCM", new CodePCM());
			else if(strCode.compare("MP3") == 0)
				RegisterCodeForKey("MP3", new CodeMP3());
			else if(strCode.compare("G729") == 0)
				RegisterCodeForKey("G729", new CodeG729());
		}
	}
	static PrototypeManager* GetInstance(){
		static PrototypeManager instanceManager;
		return &instanceManager;
	}
private:
	map<string, Code*> m_codeMap;
};

class client
{
public:
	void Initialize(const char* filename){
		//初始化原型管理器，从配置文件读取并动态配置原型
		PrototypeManager.GetInstance()->Initialize(filename);

		string strCode;
		//read file to get UserCode's value "MP3"  //UseCode=MP3
		m_pUseCode = PrototypeManager.GetInstance()->GetCodeByKey("strCode")
	}

	//如果需要运行时修改，可以修改配置文件后，调用Reload操作
	void Reload(const char* filename)
	{
		this->Initialize(filename);
	}
private:
	Code* m_pUseCode;
};