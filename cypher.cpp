#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
	string en;
	cin>>en;
	int l=en.length();
	for(int i=0;i<l;i++)
{
	if(en[i]=='A')
	en[i]='E';
	else if(en[i]=='Y')
	en[i]='C';
	
}
	for(int i=0;i<l;i++)
{
	if(int(en[i])>=97 && int(en[i])<=122)
	en[i]=int(en[i])+4;
	else if(en[i]=='9')
	en[i]='3';
	else if(int(en[i])>=48 && int(en[i])<=56)
	en[i]=int(en[i])+4;
}
	

		cout<<"\n"<<en;
return 0;
}
