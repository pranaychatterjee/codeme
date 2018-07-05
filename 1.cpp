#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
    int store=0,front_seat=0;
    int store1=0,front_seat1=0;
    int store2=0,front_seat2=0;
    int  ws[36]={1,6,7,12,13,18,19,24,25,30,31,36,37,42,43,48,49,54,55,60,61,66,67,72,73,78,79,84,85,90,91,96,97,102,108};
    int right_ws[18]={6,7,18,19,30,31,42,43,54,55,66,67,78,79,90,91,102,103};
    int left_ws[18]={1,12,13,24,25,36,37,48,49,60,61,72,73,84,85,96,97,108};
    int ms[36]={2,5,8,11,14,17,20,23,26,29,32,35,38,41,44,47,50,53,56,59,62,65,68,71,74,77,80,83,86,89,92,95,98,101,104,107};
    int right_ms[18]={5,8,17,20,29,32,41,44,53,56,65,68,77,80,89,92,101,104};
    int left_ms[18]={2,11,14,23,26,35,38,47,50,59,62,71,74,83,86,95,98,107};
    int as[36]={3,4,9,10,15,16,21,22,27,28,33,34,39,40,45,46,51,52,57,58,63,64,69,70,75,76,81,82,87,88,93,94,99,100,105,106};
    int right_as[18]={4,9,16,21,28,33,40,45,52,57,64,69,76,81,88,93,100,105};
    int left_as[18]={3,10,15,22,27,34,39,46,51,58,63,70,75,82,87,94,99,106};
    int t,n;
    string flag;
    cin>>t;
    if(t>=1 && t<=(10^5))
    {
        while(t--)
        {
        cin>>n;
        if(n>=1 && n<=108)
        {
        for(int i=0;i<36;i++)
        {
            if(ws[i]==n)
            {
                store=n;
            for(int j=0;j<18;j++)
            {
                if(right_ws[i]==store)
                front_seat=store+1;
                else if(left_ws[i]==store)
                front_seat=store+9;
                flag="WS";

            }
            cout<<front_seat<<" "<<flag<<"\n";
            }
            else if(ms[i]==n)
            {
            for(int j=0;j<18;j++)
            {
                    store1=n;
                if(right_ms[i]==store1)
                front_seat1=store+3;
                else if(left_ms[i]==store1)
                front_seat1=store1+11;
                flag="MS";
            }
            cout<<front_seat1<<" "<<flag<<"\n";
            }
            else if(as[i]==n)
            {
                    store2=n;
             for(int j=0;j<18;j++)
            {
                if(right_as[i]==store2)
                front_seat2=store2+5;
                else if(left_as[i]==store2)
                front_seat2=store2+7;
                flag="AS";
            }
            cout<<front_seat2<<" "<<flag<<"\n";
            }

        }
    }
        }
    }
    return 0;
}
