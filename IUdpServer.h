#ifndef __IUDPSERVER_H__
#define __IUDPSERVER_H__

class IDebug;
class ISocket;
class IString;

class IUdpServer : public ISocket
{
public:
	virtual bool Bind(const class IString& ip, int port){IDebug::Assert(__func__);}
};

#endif//__IUDPSERVER_H__
