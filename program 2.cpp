#include<iostream>
#include<math.h>
using namespace std;
double power(double m,int n=2)
{
double t;
t=pow(m,n);
return t;
}
int main()
{
double num,ans;
int p;
cout<<"Enter the number: \n";
cin>>num;

cout<<"if you dont want to enter power press 0 : ";
cin>>p;

if(p==0)
{
	ans=power(num);
	cout<<"\nSquare of "<<num<<" is "<<ans<<endl;
}
else
{
	cout<<"\n enter the power:";
	cin>>p;
	
	ans=power(num,p);
	cout<<"\nFinal answer is : "<<ans<<endl;
}
}


