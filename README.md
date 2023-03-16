# Query-Host-Hetwork-Configuration
基于C++的查询主机网络配置信息  
本项目包括gethostname（）、getaddrinfo（）、getservbyname（）、getservbyport（）、getportobyname（）、getprotobynumber（）等函数的功能及用法和使用异步信息查询函数的编程方法  本项目共有四个程序，内容为：  
1. 编写一个控制台应用程序，查询并显示本机运行的所有因特网协议的名称及相应的协议编号。  
2. 编写一个控制台应用程序，从键盘输入一个远程主机的DNS域名，使用getaddrinfo（）函数解析该主机的IP地址。
3. 编写一个控制台应用程序，调用getprotobyname（），查询并显示TCP和UDP的协议编号。  
4. 编写一个对话框程序，功能为：在文本框输入域名后，单击“解析域名”命令按钮便可在下面的对话框中显示解析后的域名。  
注：在创建4中的MFC应用程序时，请在创建界面中勾选“Windows 套接字”，并在预处理器中添加宏定义：_WINSOCK_DEPRECATED_NO_WARNINGS  
在属性-高级-字符集 中将使用Unicode字符集改为使用多字节字符集，否则无法正常运行编辑栏功能。  
本项目所使用的编译环境为：Visual Studio 2017（已选择安裝 MFC)  
