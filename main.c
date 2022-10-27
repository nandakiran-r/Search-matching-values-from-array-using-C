#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit, array[100], i,searchkey, flag=0;
	printf("Enter limit : ");
	scanf("%d", &limit);
	for(i=0;i<limit;i++){
		scanf("%d", &array[i]);
	}
	printf("Entered numbers are : ");
	for(i=0;i<limit;i++){
		printf("%d ", array[i]);
	}
	printf("\n");

	printf("please enter search key ");
	scanf("%d", &searchkey);
	for(i=0;i<limit;i++){
		if(array[i]==searchkey){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("It is the %d nd value\n", i+1);
	}
	else {
		printf("No value found");
	}
	return EXIT_SUCCESS;
}
