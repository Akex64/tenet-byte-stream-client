#include <client.h>


void client::initialize(std::string ip, int port) {
	WSAData wsaData;
	WORD DllVersion = MAKEWORD(2, 1);

	if (WSAStartup(DllVersion, &wsaData) != 0)
	{
		return;
	}

	SOCKADDR_IN addr;
	int sizeofaddr = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(1111);
	addr.sin_family = AF_INET;

	connection = socket(AF_INET, SOCK_STREAM, NULL);

	if (connect(connection, (SOCKADDR*)&addr, sizeofaddr) != 0)
	{
		MessageBoxA(NULL, "Failed to connect server.", "Error", MB_OK | MB_ICONERROR);
		return;
	}
	std::cout << "Connected" << std::endl;
}