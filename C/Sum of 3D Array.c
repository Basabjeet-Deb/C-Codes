#include<stdio.h>
int main()
{
	int a[50][50][50],coloumn,Layers,row,i,j,k,value,num,sum=0;
	
	printf("enter the Layer:");
	scanf("%d",&Layers);
	
	printf("enter the row:");
	scanf("%d",&row);
	
  printf("enter the coloumn:");
	scanf("%d",&coloumn);
  
for(k=0; k<Layers; k++){
	  for (i=0; i<row; i++){
		  for(j=0; j<coloumn; j++){
        printf("Enter a value at a[%d][%d][%d]:  ",i,j,k);
			  scanf("%d",&a[i][j][k]);
      }
    }
	}

  printf("\nThe Array is:\n");

	for(k=0; k<Layers; k++){
    printf("%d Array: \n\n", k+1);
	  for (i=0; i<row; i++){
		  for(j=0; j<coloumn; j++){
			  num=a[i][j][k];
        printf("%d \t",num);
      }
      printf("\n");
		}
		printf("\n\n");
	}
  	for(k=0; k<Layers; k++){
	  for (i=0; i<row; i++){
		  for(j=0; j<coloumn; j++){
        sum+=a[i][j][k];
        }
      }
    }
    printf("\nThe Sum of the Array is:%d",sum);
return 0;
}
