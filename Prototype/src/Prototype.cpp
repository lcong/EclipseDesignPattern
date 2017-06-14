//============================================================================
// Name        : Prototype.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Prototype.h"
#include "iostream"
#include <string.h>
using namespace std;

//Prototype
Prototype::Prototype()
{
	m_data = NULL;
	Length = 0;
	cout << "Prototype" << endl;
}

Prototype::~Prototype()
{
	cout << "~Prototype" << endl;
}

//ConcretePrototype1
ConcretePrototypeA::ConcretePrototypeA(const char *str)
{
	if (NULL == str)
	{
		m_data = new char[1];
		*m_data = '\0';
		Length = 0;

	}
	else
	{
		Length = strlen(str);
		m_data = new char[Length + 1];
		strcpy(m_data, str);

	}

	cout << "ConcretePrototype1" << endl;
}

ConcretePrototypeA::~ConcretePrototypeA()
{
	if (m_data)
		delete m_data;
	cout << "~ConcretePrototype1" << endl;
}

ConcretePrototypeA::ConcretePrototypeA(const ConcretePrototypeA& cp)
{

	Length = strlen(cp.m_data);
	m_data = new char[Length + 1];
	strcpy(m_data, cp.m_data);
	cout << "ConcretePrototype1 copy" << endl;
}

Prototype* ConcretePrototypeA::Clone() const
{
	return new ConcretePrototypeA(*this);
}

//ConcretePrototype2
ConcretePrototypeB::ConcretePrototypeB(const char *str)
{

	if (NULL == str)
	{
		m_data = new char[1];
		*m_data = '\0';
		Length = 0;

	}
	else
	{
		Length = strlen(str);
		m_data = new char[Length + 1];
		strcpy(m_data, str);

	}
	cout << "ConcretePrototype2" << endl;
}

ConcretePrototypeB::~ConcretePrototypeB()
{
	if (m_data)
		delete m_data;
	cout << "~ConcretePrototype2" << endl;
}

ConcretePrototypeB::ConcretePrototypeB(const ConcretePrototypeB& cp)
{
	Length = strlen(cp.m_data);
	m_data = new char[Length + 1];
	strcpy(m_data, cp.m_data);
	cout << "ConcretePrototype2 copy" << endl;
}

Prototype* ConcretePrototypeB::Clone() const
{
	return new ConcretePrototypeB(*this);
}
