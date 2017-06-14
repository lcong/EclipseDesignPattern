/*
 * Main.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: lcong
 */

#include "Builder.h"
#include "Product.h"
#include "Director.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	Director* d = new Director(new ConcreteBuilder());

	d->Construct();

	Product* p = d->GetProduct();

	if (d != NULL)
	{
		delete d;
		d = NULL;
	}
	if (p != NULL)
	{
		delete p;
		p = NULL;
	}
	return 0;
}
