#include <stdio.h>
#include <conio.h>

int a[50],n,i,d;
int min ()
{
	printf ("Enter Number Of Elements = ");
	scanf ("%d",&n);
	printf ("Enter %d Numbers\n",n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	d=a[0];
	for (i=0;i<n;i++)
	{
		if (d>a[i])
		{
			d=a[i];
		}
	}
}
int main()
{
	min ();
	printf ("The Minimum Number is = %d",d);
}
