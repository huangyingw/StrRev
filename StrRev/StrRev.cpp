// StrRev.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
char* StrRev(char* string)
{
	char* original=string;
	char* forward=string;
	char temp;
	while(*string)string++;
	while(forward<string)
	{
		temp=*(--string);
		*string=*forward;
		*forward++=temp;
	}
	return original;
}
int _tmain(int argc, _TCHAR* argv[])
{
	char myString[]="i love you";
	cout<<StrRev(myString);
	return 0;
}

