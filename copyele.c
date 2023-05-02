// C Program To Copy Elements From One Array To Other

#include <stdio.h>

int main() {
	int size;
	printf("Enter The Size Of The Array : ");
	scanf("%d", &size);
	int array[size], copy_array[size];
	for(int i = 0; i <  size; i ++){
		printf("Enter The %d Element Of The Array : ", i+1);
		scanf("%d", &array[i]);
	}
	printf("Copying Element To A New Array");
	for(int i = 0; i <  size; i ++){
		copy_array[i] = array[i];
	}
	printf("Original Array -------> Copied Array \n");
	for(int i = 0; i <  size; i ++){
		printf("%d 						%d", array[i], copy_array[i]);
	}
	return 0;
}