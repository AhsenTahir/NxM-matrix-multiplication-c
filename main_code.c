#include<stdio.h>
int main(){
	int r1,r2,c1,c2;
	//declaring array 1 rows and coloums
	printf("ENTER THE ROW OF ARRAY 1 :");
	scanf("%d",&r1);
	printf("ENTER THE COLUMN OF ARRAY 1 :");
	scanf("%d",&c1);
	
	//declaring array 2 rows and coloums
	printf("ENTER THE ROW OF ARRAY 2 :");
	scanf("%d",&r2);
	printf("ENTER THE COLUMN OF ARRAY 2 :");
	scanf("%d",&c2);
	if(c1==r2){
	//declaring elements of array 1
	int arr[r1][c1];	
	int i,j,k;
	for(i=0;i<r1;i++){	
		for(j=0;j<c1;j++){
			printf("ENTER THE [%d] [%d] ELEMENT OF THE FIRST ARRAY 1 :",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
		printf("\n");
	//declaring elements of array 2
	int brr[r2][c2];	
	for(i=0;i<r2;i++){		
		for(j=0;j<c2;j++){
			printf("ENTER THE [%d] [%d] ELEMENT OF THE FIRST ARRAY 2 :",i,j);
			scanf("%d",&brr[i][j]);
		}
	}
	
	int cr=c1;  //it is the number of columns of array1 and rows of array2,this should always be equal in order to multiply a matrix
	
	int multiple[r1][c2];//the size of resultant array will always be [row of array1][coloumn of array2]
	
	//this part of code will multiply the row of array 1 with the coulumn of array 2
	for(i=0;i<r1;i++){		
		for(j=0;j<c2;j++){
			multiple[i][j]=0;
			for(k=0;k<cr;k++){			
			multiple[i][j]+=arr[i][k]*brr[k][j];
			}
		
		}	
		
	}
		printf("\n");
	printf("THE MATRIX AFTER MULTIPLICATION WOULD BE :");
		printf("\n");
	for(i=0;i<r1;i++){		
		for(j=0;j<c2;j++){
			printf("%d\t",multiple[i][j]);
		}
	printf("\n");
	
	}
}
else {
	printf("AS THE NUMBER OF COLUMNS OF ARRAY 1 IS NOT EQUAL TO NUMBER OF ROWS OF ARRAY 2 ,SO MULTIPLICATION NOT POSSIBLE");
}
	
	return 0;
}