#include<stdio.h>
main()
{
	int i,n,min,max,sub=0,a[i];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
	
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>min)
		min=a[i];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	
	}
}

	sub=max-min;
	printf("  %d is a minimum number\n",min);
	printf("  %d is a maximum number\n",max);
     printf("  %d is a difference between min and max number",sub);
   
}
