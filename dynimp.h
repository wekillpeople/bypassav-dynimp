#ifndef __DYNIMPORT__
#define __DYNIMPORT__

#include "prototypes.h"

ULONG_PTR dyn_call(char* dll, char* func);

#define MAKESTR(x) # x
#define FNC(func, lib) ((PROTO_##func) dyn_call(lib, MAKESTR(func)))

#endif // __DYNIMPORT__