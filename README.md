# bypassav-dynimp
Bypass antivirus with dynamic import. Hide the api(s) used.

# tested
windows 10 
windows 8/8.1
windows 7

# example code
> create thread safe

```
#include <Windows.h>
#include <stdio.h>
#include "dynimp.h"

HANDLE WINAPI SafeCreateThread(
	LPSECURITY_ATTRIBUTES lpThreadAttributes,
	SIZE_T dwStackSize,
	LPTHREAD_START_ROUTINE lpStartAddress,
	LPVOID lpParameter,
	DWORD dwCreationFlags,
	LPDWORD lpThreadId)
{
	
	return SafeCreateRemoteThread(GetCurrentProcess(), lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
}

HANDLE WINAPI SafeCreateRemoteThread(
	HANDLE hProcess,
	LPSECURITY_ATTRIBUTES lpThreadAttributes,
	SIZE_T dwStackSize,
	LPTHREAD_START_ROUTINE lpStartAddress,
	LPVOID lpParameter,
	DWORD dwCreationFlags,
	LPDWORD lpThreadId
	)
{
	return FNC(CreateRemoteThread, "kernel32.dll")(hProcess, lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
}

```

# R
Dr. R
