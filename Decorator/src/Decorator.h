/*
 * Decorator.h
 *
 *  Created on: Aug 29, 2014
 *      Author: lcong
 */

#ifndef DECORATOR_H_
#define DECORATOR_H_

class Bread
{
public:
	virtual ~Bread();
	virtual void Show();
protected:
	Bread();
private:
};

class ConcreteBread: public Bread
{
public:
	ConcreteBread();
	~ConcreteBread();
	void Operation();
protected:
private:
};

class Decorator: public Bread
{
public:
	Decorator(Bread* com);
	Decorator();
	void DecorateBread(Bread* com);
	virtual ~Decorator();
	void Show();
protected:
	Bread* _bread;

private:
};

class ConcreteMilkDecorator: public Decorator
{
public:
	ConcreteMilkDecorator(Bread* com);
	ConcreteMilkDecorator();
	~ConcreteMilkDecorator();
	void Show();
	void AddedBehavior();
protected:
private:
};

class ConcreteFruitDecorator: public Decorator
{
public:
	ConcreteFruitDecorator(Bread* com);
	ConcreteFruitDecorator();
	~ConcreteFruitDecorator();
	void Show();
	void AddedBehavior();
protected:
private:
};

class ConcreteChocolateDecorator: public Decorator
{
public:
	ConcreteChocolateDecorator(Bread* com);
	ConcreteChocolateDecorator();
	~ConcreteChocolateDecorator();
	void Show();
	void AddedBehavior();
protected:
private:
};

#endif /* DECORATOR_H_ */
