#include<iostream>
#include<string.h>
using namespace std;
#include<stack>


int main()
{
	stack <char> instack;
	string word;
	cout<<"\nEnter the word= ";
	cin>>word;
	int len=word.length();
	cout<<"\nPushing elements into the stack= ";
	for(int i=0;i<len;i++)
{
	instack.push(word[i]);

}
	cout<<"\nGetting the value out of stack= ";
	while(!instack.empty())
{
	cout<<" "<<instack.top();
	instack.pop();
}
return 0;
}
