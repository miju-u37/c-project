// #if, #ifdef, #ifndef, #else, #elif, #endif
// #if -> if
// #ifdef -> ���࿡ ���ǵǾ� �ִٸ�(��)
// #ifndef(in not def) -> ���࿡ ���ǵǾ� ���� �ʴٸ�(��)
// #else -> else
// #elif -> else if
// #endif -> if���� ��

#include <stdio.h>
#define DEBUG 1 //-- ����׸��


int main(void) {

	# if DEBUG	
	printf("����� ����Դϴ�.");
	#else
	printf("� ����Դϴ�.");
	#endif

	#ifdef NAME	// ���� NAME�̶�� ��ũ�� ����� �ִٸ�
		#undef NAME // un def NAME -> NAME�̶�� ��ũ�� ����� �����Ѵ�.
		#define NAME "KIM"
	#else
		#define NAME "nothing"
	#endif

	printf("%s\n\n", NAME);

	return 0;
}