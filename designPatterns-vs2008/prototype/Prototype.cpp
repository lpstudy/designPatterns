#include <iostream>
#include <map>
using namespace std;

//����������
class Code 
{
	virtual Code* Clone() const = 0;
}
//��������ı������
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
		//��ȡ�ַ�����Ȼ������ַ�����ֵע�ᵽϵͳ�С�
		while(1)
		{
			string strCode;
			//begin to read strCode,��������ļ�β������ֹѭ��
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
		//��ʼ��ԭ�͹��������������ļ���ȡ����̬����ԭ��
		PrototypeManager.GetInstance()->Initialize(filename);

		string strCode;
		//read file to get UserCode's value "MP3"  //UseCode=MP3
		m_pUseCode = PrototypeManager.GetInstance()->GetCodeByKey("strCode")
	}

	//�����Ҫ����ʱ�޸ģ������޸������ļ��󣬵���Reload����
	void Reload(const char* filename)
	{
		this->Initialize(filename);
	}
private:
	Code* m_pUseCode;
};