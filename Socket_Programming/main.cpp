/*Version: 1
 Using my pc as a server and my mobile as client "using API-Tester Application to send requests"*/
#include <iostream>
#include <WinSock2.h>
#include <Windows.h>
#include"Server.hpp"

int main()
{
        Server S1;
        S1.Init_Server();
        S1.Define_Server();
        S1.Bind_Server();
        S1.Listen_Client();     
        while(1)
        {
        S1.Accept_Client(); 
        S1.Receive_From_Client();
        }


        
        return 0;

}
