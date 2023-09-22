#include <iostream>
#include <WinSock2.h>

class Server
{
private:
    int Server_init_Status;
    SOCKET clientSocket;
    SOCKET serverSocket;
    sockaddr_in serverAddress;

public:  
    void Init_Server();
    void Define_Server();
    void Bind_Server();
    void Listen_Client();
    void Accept_Client(); 
    void Receive_From_Client();
};