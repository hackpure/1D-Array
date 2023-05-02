// C Program To Find Count Of Total Even and Odd Elements In An Array

#include <stdio.h>

int main() {
	int size, odd_ele = 0, even_ele = 0;
	printf("Enter The Size Of The Array : ");
	scanf("%d", &size);
	int array[size];
	for(int i = 0; i < size; i++){
		printf("Enter The %d Element Of The Array : ", i+1);
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < size; i++){
		if(array[i] % 2 == 0){
			even_ele += 1;
		}
		else{
			odd_ele += 1;
		}
	}
	printf("Total Even Element(s) In The Array : %d\n", even_ele);
	printf("Total Odd Element(s) In The Array : %d", odd_ele);
	return 0;
}