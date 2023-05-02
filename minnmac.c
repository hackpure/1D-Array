// C Program To Find The Sum Of All Elements In An Array

#include <stdio.h>

int main() {
	int size, maximun = 0, minimum;
	printf("Enter The Size Of The Array : ");
	scanf("%d", &size);
	int array[size];
	for(int i = 0; i <  size; i++){
		printf("Enter The %d Element Of Array : ", i+1);
		scanf("%d", &array[i]);
	}
	for(int i = 0; i <  size; i++){
		if(array[i] > maximun){
			maximun = array[i];
		}
	}
	minimum = array[0];
	for(int i = 0; i <  size; i++){
		if(array[i] < minimum){
			minimum = array[i];
		}
	}
	printf("Minimum Element Of The Array Is : %d \n", minimum);
	printf("Maximum Element Of The Array Is : %d", maximun);
	return 0;
}