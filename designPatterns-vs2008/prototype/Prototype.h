#ifndef __PROTO_TYPE__H__
#define __PROTO_TYPE__H__

#include <iostream>
#include <string>
using namespace  std;

//ԭ��ʵ��ָ��Ҫ�����Ķ�������࣬��ͨ��copy���ԭ���������µĶ���
//���Բ��û�ȡ����Ĺ������̣�ֻ��Ҫ����Clone���Ƽ��ɡ���Ҫһ�����ȴ��ڵ�ԭ��ʵ����
//C++һ��Clone��ʵ���ǵ���copy���캯��
class Prototype
{
protected:
	Prototype();
	string m_strColor;
public:
	virtual Prototype* Clone() const = 0;//��������¡����Ľӿ�
	void Print(){
		cout<<this<<": "<<m_strColor<<endl;
	}
};

//����ʵ��ָ��ԭ�͵����࣬����Clone�������𴴽��µĶ���
class PrototypeBlue : public Prototype
{
public:
	PrototypeBlue() : m_strColor("Blue"){}
	PrototypeBlue(const Prototype& rhs){
		//ʵ��copy ���캯��������ǹؼ�����ΪClone���õ�����
		//������ܻ��õ���copy����ǳcopy������
		cout<<"PrototypeBlue copy Construction called"<<endl;
		this->m_strColor = rhs.m_strColor;
	}
	Prototype* Clone() const{
		return new PrototypeBlue(*this);
	}
	
};

class PrototypeRed : public Prototype
{
public:
	PrototypeRed() : m_strColor("red"){}
	PrototypeRed(const Prototype& rhs){
		//ʵ��copy ���캯��������ǹؼ�����ΪClone���õ�����
		//������ܻ��õ���copy����ǳcopy������
		cout<<"PrototypeBlue copy Construction called"<<endl;
		this->m_strColor = rhs.m_strColor;
	}
	Prototype* Clone() const{
		return new PrototypeRed(*this);
	}
};
#endif