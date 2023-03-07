#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap(int a[],int n)
{
	do {

		printf("Nhap vao gia tri n cua mang :");
		scanf("%d", &n);

	}while(n<1 || n>100);
 
	for(int i=0; i<n;i++)
	{
		printf("\n[%d]=",i);
		scanf("%d",&a[i]);
}
}
void xuat(int a[],int n)

{
	for(int i=0; i<n; i++)
	{
		printf(" %4d ",a[i]);
	}
}

int KiemtraNT(int n )
{
	if(n<2)
	{
		return 0;
	}
	else if(n>2)
	{
		if(n % 2 == 0)
		{
			return 0;
		}
		for(int i = 3; i<=sqrt((float)n); i+=2)
		{
			if(n % i == 0)
			{
				return 0;	
			}
		}
	}	
	return 1;
}

void HoanVi(int&a, int &b)
{
	int temp = a;
	a=b;
	b = temp;
}





void SNT(int a[],int n)
{
	for(int i=0; i<n-1; i++)
	{
		if(SNT(a[i]) == 1)
		{
			for( int j =i+1; j<n; j++)
			{
				if(SNT(a[i])==1 && a[i]>a[j])
				{
					HoanVi(a[i],a[j]);
				}
			}
		}
	}
}

int main()
{
	int n;
	int a[MAX];

	nhap(a,n);
	xuat(a,n);

	SNT(a,n);

	printf("Mang sau khi sap xep so nguyen to tang dan la:");
	xuat(a,n);

	getch();
	return 0;

}
