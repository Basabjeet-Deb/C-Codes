#include<stdio.h>
int main()
{
	int a[50][50],coloumn,row,i,j,value,num;
	
	printf("enter the rows:");
	scanf("%d",&row);
	
	printf("enter the coloumn:");
	scanf("%d",&coloumn);
	
	for (i=0; i<row; i++){
		for(j=0; j<coloumn; j++){
      printf("Enter a value at a[%d][%d]:  ",i,j);
			scanf("%d",&a[i][j]);
    }
	}

  printf("\nThe Array is:\n");

	for (i=0; i<row; i++){
		for(j=0; j<coloumn; j++){
			num=a[i][j];
      printf("%d \t",num);
		}
		printf("\n");
	}
return 0;
}
