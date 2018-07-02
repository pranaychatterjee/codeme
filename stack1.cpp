#include<iostream>
#include<stdlib.h>
using namespace std;
#include <stack>
#include<string.h>


//geting the precedence of the operands


int get_value(char pre)
{
	if(pre=='(' || pre==')')
	return 4;
	else if(pre=='^')
	return 3;
	else if(pre=='*' || pre=='/')
	return 2;
	else if(pre=='+' || pre=='-')
	return 1;
	else
	return -1;
}
 

int main()
{
	string input;
	char ch;
	cout<<"\nEnter the data=";
	cin>>input;
    	stack<int> stack; // stack has been created
	stack.push('Z'); //to chech the end point of the stack
	int len=input.length(); //getting the length of the input value
	string put_value;
	for(int i=0;i<len;i++)
{
	if((input[i]>='a' && input[i]<='z' || input[i]>='A' && input[i]<='Z')) //checking for operator
{
	 put_value=put_value+input[i]; //putting it into another string
}
	else if(input[i]=='(') //check for the open brackets 
{
	stack.push('('); //push it into stack
}
	else if (input[i]==')') //check for closing brackets
{
	stack.push(')');
	while(stack.top()!='Z' && stack.top()!='(') // loop for checking end of the stack and any opening brackets
{
	
	ch=stack.top(); //getting the top value and store it into another charachter
	stack.pop(); //poping function is used to pop out the value in LIFO order
	put_value=put_value+ch;// the value stored in ch is trasferred to put_value string;
}
if(stack.top()=='(') 
{
	ch=stack.top();
	stack.pop();
}
}

else
{
	while(stack.top()!='Z' && get_value(input[i])<= get_value(stack.top()))
{
	ch=stack.top();
	stack.pop();
	put_value=put_value+ch;
}
	stack.push(input[i]);
}
}



	while(stack.top()!='Z')// loop is used to poping the value as required 
{
	ch=stack.top();
	stack.pop();
	put_value=put_value+ch;
}
cout<<put_value;// final values stored according to precedence and printed
 return 0;
}
