// C Program To Find Count Of Total Number Of Negative Elements In An Array

#include <stdio.h>

int main() {
	int size, neg_ele = 0;
	printf("Enter The Size Of The Array : ");
	scanf("%d", &size);
	int array[size];
	for(int i = 0; i < size; i++){
		printf("Enter The %d Element Of The Array : ", i+1);
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < size; i++){
		if(array[i] < 0){
			neg_ele += 1;
		}
	}
	printf("Total Negative Element(s) In The Array : %d\n", neg_ele);
	return 0;
}