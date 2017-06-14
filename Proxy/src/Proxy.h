/*
 * Proxy.h
 *
 *  Created on: Sep 19, 2014
 *      Author: lcong
 */

#ifndef PROXY_H_
#define PROXY_H_

class Subject
{

public:
	virtual ~Subject();
	virtual void FtpRequest()=0;
	virtual void SambaRequest()=0;
	virtual void SshRequest()=0;
	virtual void HttpRequest()=0;

protected:
	Subject();

};

class ConcreteSubject: public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();
	void FtpRequest();
	void SambaRequest();
	void SshRequest();
	void HttpRequest();

protected:
private:
};
class Proxy: public Subject
{
public:
	Proxy();
	Proxy(Subject* sub);
	~Proxy();
	void FtpRequest();
	void SambaRequest();
	void SshRequest();
	void HttpRequest();
protected:
private:
	Subject* _sub;
};

#endif /* PROXY_H_ */
