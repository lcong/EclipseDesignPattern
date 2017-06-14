/*
 * Strategy.cpp
 *
 *  Created on: Aug 28, 2014
 *      Author: lcong
 */

#include "Strategy.h"
#include <iostream>

#include <string>
using std::string;
using namespace std;

Strategy::Strategy()
{
}
Strategy::~Strategy()
{
	cout << "~Strategy....." << endl;
}

ConcreteStrategyA::ConcreteStrategyA()
{
}
ConcreteStrategyA::~ConcreteStrategyA()
{
	cout << "~ConcreteStrategyA....." << endl;
}
void ConcreteStrategyA::AlgrithmInterface()
{
	cout << "test ConcreteStrategyA....." << endl;
}
ConcreteStrategyB::ConcreteStrategyB()
{
}
ConcreteStrategyB::~ConcreteStrategyB()
{
	cout << "~ConcreteStrategyB....." << endl;
}
void ConcreteStrategyB::AlgrithmInterface()
{
	cout << "test ConcreteStrategyB....." << endl;
}

Context::Context(string type)
{

	if (type == "Atype")
	{
		_stg = new ConcreteStrategyA();
	}
	else if (type == "Btype")
	{
		_stg = new ConcreteStrategyB();
	}
	else
	{
		_stg = NULL;
	}

}

Context::Context(Strategy* stg)
{
	_stg = stg;

}

Context::~Context()
{
	if (_stg)
	{
		delete _stg;
		_stg = NULL;
	}
}

void Context::DoAction()
{
	_stg->AlgrithmInterface();
}

