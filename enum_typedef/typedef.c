#include <stdint.h>

// typedef
// typedef �ڷ���(int,char,struct,enum.union....) ���� �� �ڷ��� �̸�(Alias)

typedef int AGE;	// int AGE
typedef char* NAME;	// char* NAME
typedef enum _week{ S,M,T,W,TH,F,Sat } WEEK; // ������ ����� ���� ������Ÿ��
typedef struct _student {
	int hakno;
	char* name;
} STUDENT;


int main(void) {

	AGE age = 20;	// AGE ������ Ÿ��
	NAME name = "������";	// NAME ������ Ÿ��
	WEEK w = S;
	STUDENT std;

	std.hakno = 10000;
	std.name = "������";

	return 0;
}