/*
 * Prototype.h
 *
 *  Created on: Aug 26, 2014
 *      Author: lcong
 */

#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

/*Prototype模式提供了一个通过已存在对象进行新对象创建的接口（Clone）
 Clone()实现和具体的语言相关，在C++中通过拷贝构造函数实现

 作用:
 用原型实例指定创建对象的种类，并且通过拷贝这些原型创建新的对象。

 */

/*Prototype原型基类，定义Clone接口函数
 */
class Prototype
{
protected:
	Prototype();
public:
	virtual Prototype* Clone() const=0; //定义Clone接口，根据不同的派生类来实例化对象
	virtual ~Prototype();
	char *m_data;
	int Length;
	virtual void PrintInfo()=0;

};

//派生自Prototype，实现其接口函数
class ConcretePrototypeA: public Prototype
{
public:
	ConcretePrototypeA(const char * str); //构造函数
	~ConcretePrototypeA(); //析构函数
	ConcretePrototypeA(const ConcretePrototypeA&); //拷贝构造函数
	virtual Prototype* Clone() const; //实现基类定义的Clone接口，内部调用拷贝构造函数实现复制功能
	void PrintInfo()
	{


	}
};

//派生自Prototype，实现其接口函数
class ConcretePrototypeB: public Prototype
{
public:
	ConcretePrototypeB(const char *str); //构造函数
	~ConcretePrototypeB(); //析构函数
	ConcretePrototypeB(const ConcretePrototypeB&); //拷贝构造函数
	virtual Prototype* Clone() const; //实现基类定义的Clone接口，内部调用拷贝构造函数实现复制功能
	void PrintInfo()
	{


	}
};

#endif /* PROTOTYPE_H_ */
