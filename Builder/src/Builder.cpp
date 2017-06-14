//============================================================================
// Name        : Builder.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Builder.h"
#include "Product.h"
#include <iostream>
using namespace std;

Builder::Builder()
{
}
Builder::~Builder()
{
}
ConcreteBuilder::ConcreteBuilder()
{
	_product = new Product();

}
ConcreteBuilder::~ConcreteBuilder()
{
	if (_product)
		delete _product;
}

void ConcreteBuilder::BuildPartA(const string& buildPara)
{
	_product->AddPartA(buildPara);

}

void ConcreteBuilder::BuildPartB(const string& buildPara)
{
	_product->AddPartB(buildPara);
}

void ConcreteBuilder::BuildPartC(const string& buildPara)
{
	_product->AddPartC(buildPara);
}

Product* ConcreteBuilder::GetProduct()
{
	return _product;
}
