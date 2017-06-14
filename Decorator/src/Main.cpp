/*
 * Main.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: lcong
 */

#include "Decorator.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Bread* MyBread = new ConcreteBread();
	Decorator* d1 = new ConcreteFruitDecorator(MyBread); //执行带参数的构造函数，
	Decorator* d2 = new ConcreteMilkDecorator(d1);
	Decorator* d3 = new ConcreteChocolateDecorator(d2);

//	d1->DecorateBread(MyBread);
//	d2->DecorateBread(d1);
//	d3->DecorateBread(d2);

	d3->Show();

	delete d1;
	delete d2;
	delete d3;
	delete MyBread;

	return 0;
}
