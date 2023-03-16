#include "WinSock2.h"
#include <iostream>
#pragma comment(lib,"ws2_32.lib")
using namespace std;

int main(int argc,char **argv)
{
    WSADATA wsaData; 
        if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
            cout << "failed"<< endl;
            return 1;
        }
        const char* a = new char[10];
        struct protoent* pProto;
        for(int i = 0;i<= 255;i++)
        {
            if((pProto = getprotobynumber(i))!=NULL)
            cout << "协议名：" << pProto->p_name << "   编号：" << pProto->p_proto << endl;

        WSACleanup();
        return 0;
}
