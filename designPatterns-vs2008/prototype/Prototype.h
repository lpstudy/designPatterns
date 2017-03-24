#ifndef __PROTO_TYPE__H__
#define __PROTO_TYPE__H__

#include <iostream>
#include <string>
using namespace  std;

//原型实例指定要创建的对象的种类，并通过copy这个原型来创建新的对象。
//可以不用获取具体的构建过程，只需要调用Clone复制即可。需要一个事先存在的原型实例。
//C++一般Clone的实现是调用copy构造函数
class Prototype
{
protected:
	Prototype();
	string m_strColor;
public:
	virtual Prototype* Clone() const = 0;//定义基类克隆对象的接口
	void Print(){
		cout<<this<<": "<<m_strColor<<endl;
	}
};

//具体实例指定原型的种类，它的Clone方法负责创建新的对象
class PrototypeBlue : public Prototype
{
public:
	PrototypeBlue() : m_strColor("Blue"){}
	PrototypeBlue(const Prototype& rhs){
		//实现copy 构造函数；这个是关键，因为Clone调用的是它
		//这里可能会用到深copy还是浅copy的问题
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
		//实现copy 构造函数；这个是关键，因为Clone调用的是它
		//这里可能会用到深copy还是浅copy的问题
		cout<<"PrototypeBlue copy Construction called"<<endl;
		this->m_strColor = rhs.m_strColor;
	}
	Prototype* Clone() const{
		return new PrototypeRed(*this);
	}
};
#endif