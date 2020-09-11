#include <windows.h>
#include <string>
#include <iostream>
#include <assert.h>
#include <TlHelp32.h>
#include <iphlpapi.h>
#include <sstream>
#include <algorithm>
#include <vector>

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Iphlpapi.lib")
#pragma comment (lib,"Advapi32.lib")
#pragma comment (lib, "ntdll.lib")
#pragma comment (lib, "Urlmon.lib")

#pragma warning(disable:4996) 

#include <client.h>
#include <util.h>
