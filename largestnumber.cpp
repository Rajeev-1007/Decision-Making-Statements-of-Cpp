#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter number a: "<<endl;
cin>>a;
cout<<"Enter number b: "<<endl;
cin>>b;
cout<<"Enter number c: "<<endl;
cin>>c;
if(a>b && a>c)
{
    cout<<"Number a is the largest among the three.";
}
else if(b>a && b>c)
{
    cout<<"Number b is the largest among the three.";
}
else
{
    cout<<"Number c is the largest among the three.";
}
return 0;
}