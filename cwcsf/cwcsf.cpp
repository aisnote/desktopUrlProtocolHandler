// cwcsf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
    printf("hello world from URI\n");
    for ( int i=0;i<argc;i++)
    {
        wprintf(_T("hello world from URI %s\n"), argv[i]);
    }
    getchar(); 
	return 0;
}

