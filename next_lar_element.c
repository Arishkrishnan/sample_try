#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],k=0,i,j,t,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=65535;
			b[k]=-1;
		for(j=0;j<n;j++)
		{
		
			if(a[j]>a[i]&&i!=j)
			{
				t=a[j]-a[i];
				if(t<temp)
				{
					temp=t;
					b[k]=j;
				}
			}
		}
		if(b[k]==-1)
		{
			printf("_ ");
		}
		else
		{
		printf("%d ",a[b[k]]);
	    }
		k++;
		
		
	}
}
