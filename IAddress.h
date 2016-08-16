#ifndef __IADDRESS_H__
#define __IADDRESS_H__

class IString;
struct sockaddr;

class IAddress
{
public:
	IAddress(){}
	IAddress(const IString&){}
	IAddress(const IString& ip, int port){}

public:
	const struct sockaddr* GetSockaddr(void){IDebug::Assert(__func__);}	
};

#endif//__IADDRESS_H__
