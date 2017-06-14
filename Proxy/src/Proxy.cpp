//============================================================================
// Name        : Proxy.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Proxy.h"

Subject::Subject()
{
}
Subject::~Subject()
{
}
ConcreteSubject::ConcreteSubject()
{
}
ConcreteSubject::~ConcreteSubject()
{
}
void ConcreteSubject::FtpRequest()
{
	cout << "ConcreteSubject......FtpRequest...." << endl;
}

void ConcreteSubject::HttpRequest()
{
	cout << "ConcreteSubject......HttpRequest...." << endl;
}

void ConcreteSubject::SambaRequest()
{
	cout << "ConcreteSubject......SambaRequest...." << endl;
}

void ConcreteSubject::SshRequest()
{
	cout << "ConcreteSubject......SshRequest...." << endl;
}

Proxy::Proxy()
{
	_sub = NULL;
}
Proxy::Proxy(Subject* sub)
{
	_sub = sub;
}
Proxy::~Proxy()
{
	delete _sub;
}
void Proxy::FtpRequest()
{
	cout << "Proxy FtpRequest...." << endl;
	_sub->FtpRequest();
}

void Proxy::HttpRequest()
{
	cout << "Proxy HttpRequest...." << endl;
	_sub->HttpRequest();
}

void Proxy::SambaRequest()
{
	cout << "Proxy SambaRequest...." << endl;
	_sub->SambaRequest();
}

void Proxy::SshRequest()
{
	cout << "Proxy SshRequest...." << endl;
	_sub->SshRequest();
}

