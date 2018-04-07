#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include "Header.h"
using namespace std;
char reverseString(char *str)
{
	char p[128];

	strcpy(p, str);
	int i = 0, j = strlen(p) - 1;
	while (i <= j + i)
		str[i++] = p[j--];

	return *str;
}