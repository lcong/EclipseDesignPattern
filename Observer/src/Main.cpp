/*
 * Main.cpp
 *
 *  Created on: Aug 25, 2014
 *      Author: lcong
 */

#include "Subject.h"
#include "Observer.h"

#include <iostream>
using namespace std;

int
main (int argc, char* argv[])
{
  ConcreteSubject* sub = new ConcreteSubject ();
  Observer* o1 = new ConcreteObserverA (sub);
  Observer* o2 = new ConcreteObserverB (sub);
  sub->SetState ("event dog");
  sub->Notify ();
  sub->SetState ("event cat");
  sub->Notify ();

  if (o1)
    {
      delete o1;
      o1 = NULL;
    }
  if (o2)
    {
      delete o2;
      o2 = NULL;
    }

  if (sub)
    {
      delete sub;
      sub = NULL;
    }
  return 0;
}
