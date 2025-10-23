#include<stdio.h>
int main()
{
	int n,arr[10],i,sum=0;
	printf("enter the number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
		sum =sum+arr[i];
	}
	printf("sum :%d",sum);
	printf("avg :%f",((float)sum/n));
	return 0;
}
