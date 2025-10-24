#include<stdio.h>
int main(){
	int matrix[][4]={{10,22,35,41},{50,65,73,80},{91,10,11,12}};
	
	int i,j,max=matrix[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(max<matrix[i][j]){
			
		          max=matrix[i][j];
			
		}
			
			//		printf("%d",matrix[i][j]);
			}
		}
	
   
   
               printf("Maximum Number is : %d",max);
	
	
	
	return 0;
}
