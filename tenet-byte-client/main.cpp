#include <includes.h>

std::vector<unsigned char> bytes;

int main()
{
	client* conn = new client;

	conn->initialize("<ip>",6940);
	
	printf("TENET STREAM EXAMPLE\nEnter key: ");

	std::string key;
	std::cin >> key;

	char returnBuffer[256];
	send(conn->connection, ("stream " + key).c_str(), sizeof(("stream " + key).c_str()), NULL);
	recv(conn->connection, returnBuffer, sizeof(returnBuffer), NULL);

	if (returnBuffer == "Failed") printf("Invalid license\n");Sleep(50000);

	char byteBuffer[32];

	while (byteBuffer!="Finish") {
		recv(conn->connection, byteBuffer, sizeof(byteBuffer), NULL);
		bytes.push_back((unsigned char)byteBuffer);
	}	

	util* utils{ 0 };
	
	utils->run_image((void*)&bytes);
	
	return 0;
}
