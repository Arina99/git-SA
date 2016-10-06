#include <iostream>
#include <iomanip>
using namespace std;

int sum (int*, int*, int, int, int);
int multiplication (int*, int*, int, int);

void assert1 (int *a, int *b,int n, int m, int max, int *sm)
{

   if ( sum(a, b, n, m, max) == *sm) 
	   cout << "\nOk\n";

   else cout << "\nFail\n";
}

void assert2 (int *a, int *b, int n, int m, int *pr)
{

   if ( multiplication(a, b, n, m) == *pr) 
	   cout << "Ok";

   else cout << "Fail";
}


int main ()
{
	int a[2]={1,2};
	int b[2]={2,3};
	int c[2]={3,5};
	int d[3]={2,7,6};

	assert1 (a, b, 2, 2, 2, c);
	assert2(a, b, 2, 2, d);

	system ("pause");
	return 0;
}


int  sum (int *a, int *b, int n, int m, int max)
{
	int i;
	int *c;

	if (n > m)	
	{
		max = n;
	    a= new int [n];
	    b = new int [n];
	    c = new int [n];
		for(i=m;i<n;i++)
		     b[i]=0;
	}
	else
	{
		max = m;
	    a= new int [m];
	    b = new int [m];
	    c = new int [m];
		for(i=n;i<m;i++)
		     a[i]=0;
	}

    for (i=0; i<max; i++)
	  		c[i]=a[i]+b[i];

	return *c;
}
 
int multiplication (int*a, int *b, int n, int m)
{
    int i, j;
	int *d;
	d= new int [n+m-1];

    for (i=0; i<(n+m-1); i++)
		d[i]=0;

	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
			d[i+j]+=a[i]*b[j];

	}
	return d[n+m-1];
	
}