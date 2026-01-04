#pragma once

#ifdef _MSC_VER
#define CDECL __cdecl
#define STDCALL __stdcall
#define FASTCALL __fastcall

#define SEH_TRY __try
#define SEH_EXCEPT __except
#define SEH_FINALLY __finally

#define THREAD_LOCAL __declspec(thread)
#else
#define CDECL
#define STDCALL
#define FASTCALL

#define SEH_TRY try
#define SEH_EXCEPT catch
#define SEH_FINALLY ;

#define THREAD_LOCAL thread_local
#endif

#define ROTATE_LEFT(x, i) (((x) << (i)) | ((x) >> ((sizeof((x)) * 8) - (i))))
#define ROTATE_RIGHT(x, i) (((x) >> (i)) | ((x) << ((sizeof((x)) * 8) - (i))))

#define DIM(x) (sizeof((x)) / sizeof((x)[0]))

#define null 0

#define RELEASE(x) (delete x, x = null)
#define RELEASEARRAY(x) (delete[] (ubyte *)x, x = null)
