#include<stdio.h>
#include<stdio.h>
int main()
{
	int a[50][50],coloumn,row,i,j,value,num,sum=0;
	
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
  	for (i=0; i<row; i++){
		  for(j=0; j<coloumn; j++){
      sum+=a[i][j];
      }
    }
    printf("\nThe Sum of the Array is:%d",sum);
return 0;
}
