#include<stdio.h>
int main(){
	int n,j;
	printf("Enter The Number Of tables : ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		printf("%d : ",i);
		for(j=1;j<=5;j++){
			printf(" %4d ",i*j);
		}
		printf("\n");
		
	}

	
	
	return 0;
}
