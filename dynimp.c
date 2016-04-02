#include <Windows.h>
#include <stdio.h>

#include "prototypes.h"
#include "dynimp.h"

ULONG_PTR resolve_call(char* dll, char* func){

	HMODULE module;
	ULONG_PTR ptr;

	module = LoadLibraryA(dll);
	if (!module)
		return 0; // error

	ptr = (ULONG_PTR)GetProcAddress(module, func);

	if (!ptr)
		return 0;

	return ptr;
}


ULONG_PTR dyn_call(char* dll, char* func){
	
	ULONG_PTR ptr;

	ptr = resolve_call(dll, func);
	
	return ptr;
}