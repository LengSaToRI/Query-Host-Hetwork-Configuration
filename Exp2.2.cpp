#include <iostream>
#include <WinSock2.h>
#include <ws2tcpip.h>
#pragma comment(lib,"ws2_32.lib")
using namespace std;
//张卫君是傻逼
int main(int argc,char **argv)
{
    /* 加载WinSock DLL */
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        cout << "failed" << endl;
        return 0;
    }
    char hostname[256];
    cout << "请输入要查询的主机地址：" << endl;
    cin >> hostname;
    cout << "该主机名字为：" << hostname << endl;
    /* 根据主机名字查询主机IPv4地址 */
    struct addrinfo hints, * p_addrinfo, * p;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    unsigned int retval = getaddrinfo(hostname, NULL, &hints, &p_addrinfo);
    if (retval != 0) {
        printf("getaddrinfo failed with error:%d\n", retval);
        WSACleanup();
        return 1;
    }
    /* 输出IP地址 */
    p = p_addrinfo;
    cout << "该主机IP地址：" << endl;
    char ipaddr[20];
    in_addr addr;
    while (p != NULL)
    {
        addr = ((sockaddr_in*)(p->ai_addr))->sin_addr;
        cout << inet_ntop(AF_INET, (void*)&addr, ipaddr, 20) << endl;
        p = p->ai_next;
    }
    WSACleanup();
    return 0;
}