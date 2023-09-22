/* functions needed  to establish Server_client connection using socket programming 
you can use it if you use WinSock2.h in case using windos or <sys/socket.h> in case using linux
1)Creating sockets (e.g., socket() function).
2)Binding a socket to a specific IP address and port (e.g., bind() function).
3)Listening for incoming connections (e.g., listen() function).
4)Accepting incoming connections (e.g., accept() function).
5)Sending and receiving data over sockets (e.g., send() and recv() functions).
5)closing sockets (e.g., close() function).
*/

#include <iostream>
#include <WinSock2.h>
#include <Windows.h>
#include"Server.hpp"


void Server::Init_Server()
{
     WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (result != 0) {
        std::cout << "Error initializing Winsock. Error code: " << result << std::endl;
        Server_init_Status = 1;
    }
                            /***************1)Create a socket ***********/
    /* Syntax : ********** int sockfd = socket(domain, type, protocol) **********
    -->domain: specifies communication domain:
                use AF_ LOCAL for communication between processes on the same host. 
                use AF_INET for communicating between processes on different hosts connected by IPV4 
                use AF_I NET 6 for processes connected by IPV6.
     -->type:  communication type:
               SOCK_STREAM: for TCP
               SOCK_DGRAM:  for UDP
     -->protocol: Protocol value for Internet Protocol(IP) = 0. (man protocols for more details)
    */

     /*Following Config for IPV4 , TCP , IP*/
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == INVALID_SOCKET) {
        std::cout << "Error creating socket." << std::endl;
        WSACleanup();
        Server_init_Status = 1;
    }
    else
    {
        Server_init_Status =0;
    }
   
}

void Server::Define_Server()
{
        // At first we must define the server address as The connect function needs this information to connect to the server
    /*
    -->sockaddr_in: This is a structure used to represent an IPv4 socket address.
                    It contains fields that specify the address family, port number, and IP address.
    -->sin_family: specifies the address family. it's set to AF_INET which indicates the IPv4 address family.
    -->sin_port  : specifies the port number. It uses htons(8080) to convert the port number to network byte order 
                   (big-endian) since network protocols often use big-endian byte order.
                    You can specify any available port number here.
    -->sin_addr.s_addr: specifies the IPv4 address. it's set to "127.0.0.1", which is the loopback address and refers to the
                        local machine (localhost). You can change this to the IP address of the machine where your server 
                        is running if it's not on the same machine as the client.
    */

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080); 
    serverAddress.sin_addr.s_addr = INADDR_ANY;

}
void Server::Bind_Server()
{
                                /***************3)Bind Socket ***********/
    // Bind the socket to the server address 
    /* " it ensures that the server will listen for incoming connections on the specified address and port."
    */
  if ( bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR)
    {
        std::cout << "Error binding socket." << std::endl;
        closesocket(serverSocket);
        WSACleanup();
    }
}

void Server::Listen_Client()
{
                                /***************4)Listen to client connection ***********/
    // Listen for incoming connections
    /*Syntax:******listen(serverSocket, Backlog_parameter)*****/
    /*
    -->server socket  
    -->backlog parameter that specifies the maximum number of pending connections that can be queued up before 
        the server starts rejecting new connection attempts.
    */
    if (listen(serverSocket, 5) == SOCKET_ERROR) 
    {
        std::cerr << "Error listening on socket." << std::endl;
        closesocket(serverSocket);
        WSACleanup();
    }
    std::cout << "Server is listening on port 8080..." << std::endl;
}

void Server::Accept_Client()
{
                                /***************5)Accept client connection ***********/
    // Accept incoming connections 
    clientSocket = accept(serverSocket, NULL, NULL);
       if (clientSocket == INVALID_SOCKET) {
            std::cout << "Error accepting client connection." << std::endl;
            closesocket(serverSocket);
            WSACleanup();
        }

}
void Server::Receive_From_Client()
{
        
        char buffer_1[1024];
        int bytesRead = recv(clientSocket, buffer_1, sizeof(buffer_1), 0);
        if (bytesRead == SOCKET_ERROR) {
            std::cout << "Error receiving data from the client." << std::endl;
        } else if (bytesRead == 0) {
            std::cout << "Client closed the connection." << std::endl;
        } else 
        {
            buffer_1[bytesRead] = '\0';


        if (strstr(buffer_1, "calc") != nullptr) 
        {
               std::cout << "Received " << bytesRead << " bytes from the client: " << buffer_1 << std::endl;
               if (ShellExecute(NULL, "open", "calc.exe", NULL, NULL, SW_SHOWNORMAL) <= (HINSTANCE)32) 
               {
               std::cerr << "Error launching Calculator." << std::endl;
               }
                }
        }
     
        if (strstr(buffer_1, "Open_C_Drive") != nullptr) 
        {
          if (ShellExecute(NULL, "open", "C:\\", NULL, NULL, SW_SHOWNORMAL) <= (HINSTANCE)32) 
        {
        std::cerr << "Error opening C:\\ directory." << std::endl;
        }
        }


       

}

