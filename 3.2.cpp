#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100];
	int n;
	
	do {

		printf("Nhap vao gia tri n cua mang :");
		scanf("%d", &n);

	}while(n<1 || n>100);
//nhap mang 
	for(int i=0; i<n;i++)
	{
		printf("\n[%d]=",i);
		scanf("%d",&a[i]);
	}
// xuat mang 
	//printf("Mang cua ban la :");
	//for(int i=0; i<n; i++)
//	{
//		printf(" %d ",a[i]);
//	}

	// tang dan
	int giam; 
	for(int i = 0; i<n - 1; i++)
	{
		for(int j=i+1; j<n ; j++)
		{
			if (a[i]<a[j])
			{
				 giam = a[i];
				a[i]=a[j];
				a[j]=giam;
			}
		}
	}
		printf("Mang giam dan la :");
	for(int i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}
	return 0;
}