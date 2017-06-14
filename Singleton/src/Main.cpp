/*
 * Main.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: lcong
 */

#include "Singleton.h"
#include <iostream>

using namespace std;

int main()
{
	Singleton* ps = Singleton::Instance(); //通过全局访问点获取实例
	ps->Destroy();
	return 0;
}
