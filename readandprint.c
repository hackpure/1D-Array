// C Program To Read And Print An Array

#include <stdio.h>

int main() {
	int size;
	printf("Enter The Size Of The Array : ");
	scanf("%d", &size);
	int array[size];
	for(int i = 0; i < size; i++) {
		printf("Enter The %d Element Of Array : ", i+1);
		scanf("%d", &array[i]);
	}
	printf("Elements Of The Array Are : \n");
	for(int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}
	return 0;
}