#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include "Header.h"
using namespace std;
int h;
char reverseString(char *str);
void main()
{
	setlocale(LC_ALL, "rus");
	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &h);
		cin.get();
		switch (h)
		{
		case 1:
		{
		//Первый вариант.Нужно написать программу копирования строк без использования strcpy, strlen и прочих им подобным.
			//Входные данные - только указатель на строку, оканчивающуюся нулем, и указатель на destination область.
			char *W = NULL;
			W = (char*)malloc(sizeof(char) * 10);
			char *str = NULL;
			str = (char*)malloc(sizeof(char) * 10);
			str = "Hello World";
			W = str;
			puts(W);

		}
		break;
		
		case 2:
		{
			char arr[100];

			printf("Введите строку для изменения\n");
			fgets(arr, 100, stdin);

			reverseString(arr);//сделать обратным строку

			printf("Обратное значение строки \n%s\n", arr); 
		}
		break;
	
		default:
			break;
		}
	} while (h > 0);

	
}