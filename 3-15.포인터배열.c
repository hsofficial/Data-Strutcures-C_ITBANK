#include<stdio.h>

void main() {
	int a[5] = { 10, 20, 30, 40, 50 };
	int* pa;
	pa = a;
	for (int i = 0; i < 5; i++)
		printf("배열의주소 %p 배열의값 %d\n", pa + i, *(pa + i));
}