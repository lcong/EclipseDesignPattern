//============================================================================
// Name        : Decorator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Decorator.h"
#include <iostream>
Bread::Bread()
{
}
Bread::~Bread()
{
}
void Bread::Show()
{
}
ConcreteBread::ConcreteBread()
{
}
ConcreteBread::~ConcreteBread()
{
}
void ConcreteBread::Operation()
{
	std::cout << "ConcreteComponent operation..." << std::endl;
}

Decorator::Decorator()
{
}

Decorator::Decorator(Bread* com)
{
	this->_bread = com;
}

void Decorator::DecorateBread(Bread* com)
{
	this->_bread = com;

}

Decorator::~Decorator()
{
	if (NULL != _bread)
	{
		delete _bread;
		_bread = NULL;
	}
}

void Decorator::Show()
{
}


//ConcreteMilkDecorator
ConcreteMilkDecorator::ConcreteMilkDecorator()
{
}

ConcreteMilkDecorator::ConcreteMilkDecorator(Bread* com) :
		Decorator(com)
{
}

ConcreteMilkDecorator::~ConcreteMilkDecorator()
{

}
void ConcreteMilkDecorator::AddedBehavior()
{
	std::cout << "ConcreteDecorator::Add Milk to Bread...." << std::endl;
}
void ConcreteMilkDecorator::Show()
{
	_bread->Show();
	this->AddedBehavior();
}

//ConcreteFruitDecorator
ConcreteFruitDecorator::ConcreteFruitDecorator(Bread* com) :
		Decorator(com)
{
}
ConcreteFruitDecorator::ConcreteFruitDecorator()
{
}
ConcreteFruitDecorator::~ConcreteFruitDecorator()
{
}
void ConcreteFruitDecorator::AddedBehavior()
{
	std::cout << "ConcreteDecorator::Add Fruit to Bread...." << std::endl;
}
void ConcreteFruitDecorator::Show()
{
	_bread->Show();
	this->AddedBehavior();
}

ConcreteChocolateDecorator::ConcreteChocolateDecorator(Bread* com) :
		Decorator(com)
{
}


//ConcreteChocolateDecorator
ConcreteChocolateDecorator::ConcreteChocolateDecorator()
{
}

ConcreteChocolateDecorator::~ConcreteChocolateDecorator()
{
}
void ConcreteChocolateDecorator::AddedBehavior()
{
	std::cout << "ConcreteDecorator::Add Chocolate to Bread...." << std::endl;
}
void ConcreteChocolateDecorator::Show()
{
	_bread->Show();
	this->AddedBehavior();
}
