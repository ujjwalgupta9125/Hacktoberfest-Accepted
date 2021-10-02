#include<stdio.h>
#include<stdlib.h>


void Swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void Bubble(int A[],int n)
{ 
	int i,j,flag=0;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		
		for(j=0;j<n-1-i;j++)
		{
		
		if(A[j]>A[j+1])
		{
			Swap(&A[j],&A[j+1]);
			flag=1;
		}
	}
		if(flag==0)
			break;

	}

}


int main()
{
	int A[100], n,i,c;
	printf("Enter number of elements\n");
        scanf("%d", &n);
	printf("Enter %d integers\n", n);

       for(c=0;c<n;c++)
       scanf("%d",&A[c]);
       Bubble(A,6);
	for (i=0;i<6;i++)
		printf("%d ",A[i]);
	printf(" \n");
	return 0;
}
