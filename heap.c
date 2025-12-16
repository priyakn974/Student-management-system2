#include<stdio.h>
void heap(int a[100],int k)
{
	int parent,child,temp;
	while(k>1)
	{
		child=k;
		parent=k/2;
		if(a[child]<a[parent])
			break;
		else
		{
			temp=a[child];
			a[child]=a[parent];
			a[parent]=temp;
			k=parent;
		}
	}
}

int main()
{
	int n,a[100],i;
	printf("enter  the number of the elements\n");
	scanf("%d", &n);
	printf("enter the elements\n");
	for(i=1; i<=n; i++)
	{
		scanf("%d",&a[i]);
		heap(a,i);
}
	printf("the created max heap\n");
	for(i=1; i<=n; i++)
		printf("%d\n",a[i]);
}


