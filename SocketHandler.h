#ifndef __SOCKET_HANDLER_H__
#define __SOCKET_HANDLER_H__


class SocketHandler
{
private:
	int socketfd;

public:
	void SetHandler(const int fd)
	{
		socketfd = fd;
	}
	const int GetHandler(void)
	{
		return socketfd;
	}
	bool IsValid(void)
	{
		return (InvalidSocket() != socketfd);
	}
	const int InvalidSocket()
	{
		return -1;
	}
};

#endif//__SOCKET_HANDLER_H__
