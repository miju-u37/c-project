// ��ó����� : #�� �� ��� ��
// ��ó����� ������ ������ ���ȴ� (���ǵǰų�..)
#include<stdio.h>
#define PI 3.14
#define STR_STRING "Hello World"
#define OUTPUT printf
#define AGE int

// ��ũ�� �Լ�
#define ADD(x,y) x+y



int main02(void) {

	AGE age = 20;

	printf("PI = %f\n", PI);
	printf("STR_STRING = %s\n", STR_STRING);
	OUTPUT("STR_STRING_OUTPUT = %s\n", STR_STRING);
	printf("%d\n", ADD(1,2));	// �Լ�ȣ��

	return 0;
}