#ifndef __PROTOTYPES__
#define __PROTOTYPES__

#pragma once

// example apis


typedef int(WINAPI *PROTO_MessageBoxA) (
	__in_opt HWND hWnd,
	__in_opt LPCSTR lpText,
	__in_opt LPCSTR lpCaption,
	__in UINT uType
	);

typedef HANDLE (WINAPI *PROTO_CreateRemoteThread)(
	__in HANDLE hProcess,
	__in_opt LPSECURITY_ATTRIBUTES lpThreadAttributes,
	__in SIZE_T dwStackSize,
	__in LPTHREAD_START_ROUTINE lpStartAddress,
	__in_opt LPVOID lpParameter,
	__in DWORD dwCreationFlags,
	__out_opt LPDWORD lpThreadId
	);

typedef HANDLE(WINAPI *PROTO_OpenProcess)(
	_In_ DWORD dwDesiredAccess,
	_In_ BOOL bInheritHandle,
	_In_ DWORD dwProcessId
	);

typedef VOID(WINAPI *PROTO_Sleep)(
	__in DWORD dwMilliseconds
	);

typedef SC_HANDLE (WINAPI *PROTO_OpenServiceA)(
	__in            SC_HANDLE               hSCManager,
	__in            LPCSTR                lpServiceName,
	__in	        DWORD                   dwDesiredAccess
	);


typedef BOOL(WINAPI *PROTO_DeleteService)(
	__in  SC_HANDLE   hService
	);

typedef BOOL(WINAPI *PROTO_CloseServiceHandle)(
	__in        SC_HANDLE   hSCObject
	);

typedef SC_HANDLE(WINAPI *PROTO_OpenSCManagerA)(
	__in_opt        LPCSTR                lpMachineName,
	__in_opt        LPCSTR                lpDatabaseName,
	__in            DWORD                   dwDesiredAccess
	);


typedef SC_HANDLE(WINAPI *PROTO_CreateServiceA)(
	__in        SC_HANDLE    hSCManager,
	__in        LPCSTR     lpServiceName,
	__in_opt    LPCSTR     lpDisplayName,
	__in        DWORD        dwDesiredAccess,
	__in        DWORD        dwServiceType,
	__in        DWORD        dwStartType,
	__in        DWORD        dwErrorControl,
	__in_opt    LPCSTR     lpBinaryPathName,
	__in_opt    LPCSTR     lpLoadOrderGroup,
	__out_opt   LPDWORD      lpdwTagId,
	__in_opt    LPCSTR     lpDependencies,
	__in_opt    LPCSTR     lpServiceStartName,
	__in_opt    LPCSTR     lpPassword
	);


typedef DWORD(WINAPI *PROTO_GetEnvironmentVariableA)(
	_In_opt_ LPCSTR lpName,
	_Out_writes_to_opt_(nSize, return +1) LPSTR lpBuffer,
	_In_ DWORD nSize
	);

typedef HANDLE (WINAPI *PROTO_FindFirstFileA)(
	__in LPCSTR lpFileName,
	__out LPWIN32_FIND_DATAA lpFindFileData
	);

typedef BOOL(WINAPI *PROTO_FindNextFileA)(
	__in HANDLE hFindFile,
	__out LPWIN32_FIND_DATAA lpFindFileData
	);

typedef BOOL(WINAPI *PROTO_FindClose)(
	_Inout_ HANDLE hFindFile
	);


// create file

typedef HANDLE(WINAPI *PROTO_CreateFileA)(
	_In_ LPCSTR lpFileName,
	_In_ DWORD dwDesiredAccess,
	_In_ DWORD dwShareMode,
	_In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	_In_ DWORD dwCreationDisposition,
	_In_ DWORD dwFlagsAndAttributes,
	_In_opt_ HANDLE hTemplateFile
	);


#endif // __PROTOTYPES__