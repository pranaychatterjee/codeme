#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int size;
	cout<<"\nEnter the size= ";
	cin>>size;
	int poly1[size];
	int poly2[size];
	int sum[size];
	cout<<"\nGet the order of the polynomial= ";
	for(int i=0;i<size;i++)
{
	cin>>poly1[i];
	cin>>poly2[i];
}
	cout<<"\nPrinting the first of polynomial= ";
	for (int i=0; i<size; i++)
    {
       cout << poly1[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != size-1)
       cout << " + ";
    }
	cout<<"\nthe second polynomial= ";
	for (int i=0; i<size; i++)
    {
       cout << poly2[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != size-1)
       cout << " + ";
    }
	for(int i=0;i<size;i++)
{
	sum[i]=poly1[i];
}
	for(int i=0;i<size;i++)
{
	sum[i]+=poly2[i];
}
	cout<<"\nSum of the polynomial= ";
	for (int i=0; i<size; i++)
    {
       cout << sum[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != size-1)
       cout << " + ";
    }


return 0;
}


