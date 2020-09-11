#pragma once
#include <string>
#include <winsock.h>
#include <iostream>
class client
{
public:
	SOCKET connection;
	void initialize(std::string ip, int port);
};

