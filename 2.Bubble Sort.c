#include<stdio.h>
#define M 50
void BubbleSort(int [],int n);
void BubbleSort(int a[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
}

int main()
{ 	
	printf("\nPlease Enter the Nos of Elements");
	int n,A[M],i;
	scanf("%d",&n);
	printf("\nPlease Enter the Array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	BubbleSort(A,n);
	printf("\nThe Sorted Array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
	return 0;

}
