#include<stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100


void nhap(int a[],int &n)
{

	do
	{
		printf("Nhap so phan tu:");
		scanf("%d",&n);
		if(n<= 0 || n > MAX )
		{
			printf("\nSO Phan tu khong hop le.Xin tra lai!");
		}
	}while (n <=0 || n > MAX );
	for (int i = 0; i< n ; i ++)
		{
			printf("Nhap a[%d]:",i);
			scanf("%d",&a[i]);
		} 
}

void xuat(int a[], int n )
{
	for(int i =0 ; i <n ; i++)
	{
		printf("%4d",a[i]);
	}
}

int kiemtrahoanthien(int n )
{

	int tong =0;
	for(
		int i=0; i<n; i++)
	{
		if(n%i==0)
		{
			tong += i;
		}
	}
		if (tong == n)

		{
			return 1;
		}
		else {
			return 0;
		}
	}

void hoanvi(int &a, int &b)
{
	int temp = a;
	a = b ;
	b = temp;
}	

void sapxephoanthiengiamdan(int a[], int n )
{
	for ( int i =0 ; i< n -1 ; i++)
	{	
		if(kiemtrahoanthien(a[i]) == 1)
		{	
		for (int j = i+1; j < n ; j ++)
		{
			if (kiemtrahoanthien(a[j]) == 1 && a[i]<a[j])
				{
				hoanvi(a[i],a[j]);
				}
			}
		}
	}
}

int main()
{
	int n ;
	int a[MAX];
	nhap (a,n);
	xuat (a,n);

	sapxephoanthiengiamdan(a,n);
	printf("\n Mang sau khi sap xep hoan thien giam dan:");
	xuat ( a, n );

	getch();
	return 0 ;

}