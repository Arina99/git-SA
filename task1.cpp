#include <iostream>
#include <iomanip>
using namespace std;
void Input (int **, int, int, char *);
void Output (int **, int, int, char *);
void Task (int**, int, int, int**, int, int, int**);

int main ()
{
int **a, **b, **c;
int na, ma, nb, mb, mc, nc, i;
setlocale (LC_ALL, "Russian");
cout << "������� ������ ������ �������:/n";
do 
{
	cout << "n =" ;
	cin >> na;
}
while (na < 2 || na > 100);
	do
	{
	cout << "m=";
	cin >> ma;

	}
	while (ma<2 || ma > 100);
	cout << "\n ������� ������ ������ �������:\n";
	do
	{
	cout << "m=";
	cin >> mb;

	}
	while (mb<2  || mb >100);
	nb=ma;

	a= new int* [na];
	for (i= 0; i<na; i++)
	a[i]= new int [ma];

	b = new int* [nb];
	for (i=0; i<nb; i++)
		b[i]= new int [mb];

	c = new int* [nb];
	for (i=0; i<nb; i++)
		c[i]=new int[ma];

	Input (a, na, ma, "\n ������� ������� �\n" );
	Input (b, nb, mb,"\n ������� ������� b\n" );
	Output (a, na, ma, "\n������� �:\n");
	Output (b, nb, mb, "\n������� b:\n");
	Task (a, na, ma, b, nb, mb, c);
	Output (c, nb, ma, "\n������� c:\n");
	for (i=0; i<na; i++)
	   delete [i] a;
	delete [] a;
	a=NULL;
	for (i=0; i<nb; i++)
		delete [i] b;
	delete []b;
	b=NULL;


	system ("pause");
	return 0;
}

void Input (int **a, int na, int ma, char *s)
{
int i,j;
cout << s;
for (i=0; i<na; i++)
  for (j=0; j<ma; j++)
  {
  cout <<" ������� [" <<i<< "][" << j <<"] �������:";
  cin >> a[i][j];
  }
}
void Output (int **a, int na, int ma, char *s)
{
	int i, j ;
	
cout<<s;
for (i=0; i<na; i++)
{
	for (j=0; j<ma; j++)
		cout << setw(10)<< a[i][j];
	cout<< endl;
}
}


void Task (int **a, int na, int ma, int **b, int nb, int mb, int **c )
{
	int i, j, k; 
		int sum;
    for (i=0; i<nb; i++)
	{
	  for (j=0; j<ma; j++)
    {
		sum=0;
	    for (k=0; k<na; k++)

		    sum+=a[i][k]*b[k][j];
	          c[i][j]=sum;
	}
	}
}