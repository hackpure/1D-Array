// C Program To Find The Sum Of All Elements In An Array

#include <stdio.h>

int main() {
	int size, sum = 0;
	printf("Enter The Size Of The Array : ");
	scanf("%d", &size);
	int array[size];
	for(int i = 0; i <  size; i++){
		printf("Enter The %d Element Of Array : ", i+1);
		scanf("%d", &array[i]);
	}
	for(int i = 0; i <  size; i++){
		sum = sum + array[i];
	}
	printf("Sum Of All Elements Of Array : %d", sum);
	return 0;
}