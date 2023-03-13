#include<stdio.h>
main()
{
	int n,i,a[i],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
		scanf("%d" ,&a[i]);
	}
 
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}

	printf("\n sum=%d",sum);
}
