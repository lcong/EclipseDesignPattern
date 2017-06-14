/*
 * Main.cpp
 *
 *  Created on: Sep 19, 2014
 *      Author: lcong
 */

//main.cpp
#include "Proxy.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	Subject* sub = new ConcreteSubject();
	Proxy* p = new Proxy(sub);
	p->FtpRequest();
	p->HttpRequest();

	return 0;
}
