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
		printf("������� ����� �������: ");
		scanf("%d", &h);
		cin.get();
		switch (h)
		{
		case 1:
		{
		//������ �������.����� �������� ��������� ����������� ����� ��� ������������� strcpy, strlen � ������ �� ��������.
			//������� ������ - ������ ��������� �� ������, �������������� �����, � ��������� �� destination �������.
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

			printf("������� ������ ��� ���������\n");
			fgets(arr, 100, stdin);

			reverseString(arr);//������� �������� ������

			printf("�������� �������� ������ \n%s\n", arr); 
		}
		break;
	
		default:
			break;
		}
	} while (h > 0);

	
}