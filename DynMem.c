#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	int *ptr = (int*)malloc(n*sizeof(int));
	
	for(int i = 0; i < n; i++){
		scanf("%d", ptr+i);
	}
	
	for(int j = 0; j < n; j++){
		printf("%d ", *(ptr+j));
	}
	return 0;
}