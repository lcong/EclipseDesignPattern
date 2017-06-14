/*
 * Observer.h
 *
 *  Created on: Aug 25, 2014
 *      Author: lcong
 */

#ifndef _OBSERVER_H_
#define _OBSERVER_H_
#include "Subject.h"
#include <string>
using namespace std;
typedef string State;

class Observer {
public:
	virtual
	~Observer();
	virtual void
	Update(Subject* sub) = 0;
	virtual void
	PrintInfo() = 0;
protected:
	Observer();
	State _st;
private:
};

class ConcreteObserverA: public Observer {
public:
	ConcreteObserverA(Subject* sub);
	virtual Subject*
	GetSubject();
	virtual
	~ConcreteObserverA();

	//传入 Subject 作为参数，这样可以让一个View属于多个的Subject。
	void
	Update(Subject* sub);
	void
	PrintInfo();
protected:
private:
	Subject* _sub;
};

class ConcreteObserverB: public Observer {
public:
	ConcreteObserverB(Subject* sub);
	virtual Subject*
	GetSubject();
	virtual
	~ConcreteObserverB();
//传入 Subject 作为参数，这样可以让一个View属于多个的Subject。
	void
	Update(Subject* sub);
	void
	PrintInfo();
protected:
private:
	Subject* _sub;
};

#endif /* OBSERVER_H_ */
