/*
 * Main.cpp
 *
 *  Created on: Feb 6, 2015
 *      Author: lcong
 */

//main.cpp
#include "Flyweight.h"
#include "FlyweightFactory.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	FlyweightFactory* fc = new FlyweightFactory();

	Flyweight* fw1 = fc->GetFlyweight("hello");
	fw1->Operation("hello");
	Flyweight* fw2 = fc->GetFlyweight("world!");
	fw1->Operation("world!");
	Flyweight* fw3 = fc->GetFlyweight("hello");
	fw1->Operation("hello");
	delete fw1;
	delete fw2;
	delete fw3;
	return 0;
}
