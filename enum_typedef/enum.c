#include <stdio.h>

// ������
// ������ ���� ����
// enum �������̸� { ���� }

enum week {
	SUN=10,
	MON=20,
	TUE=30,
	WED=40,
	THU=50,
	FRI=60,
	SAT=70
};

enum boolean {
	false,	//-0
	true	// 1
};

int main01(void) {

	enum week w;
	w = SUN;

	if (true) {	//enum boolean
		printf("aaaaa\n\n");
	}

	printf("sizeof(week)=%d\n\n", sizeof(enum week)); //sizeof(w)

	printf("SUN=%d, MON=%d\n", SUN, MON);
	printf("TUE=%d, THU=%d\n", TUE, THU);
	printf("FRI=%d, SAT=%d\n", FRI, SAT);

	return 0;
}