#include<iostream>
using namespace std;

int fab(int n){
int t1=0;
int t2=1;
int t3;
int i;
for(i=0;i<n;i++){
    cout<<t1;
    t3=t1+t2;
    t1=t2;
    t2=t3;
}
return -1;
}

int fact(int n){
int fact=1;
int i;
for (i=1;i<=n;i++)
{
    fact=fact*i;
}
return fact;
}

int main(){

int n;
cout<<"Enter value of n";
cout<<endl;
cin>>n;
cout<<"fabnocii series 1 is: ";
fab(n);        //Caution !!
cout<<endl;


cout<<"fabnocii series 2 is: ";
cout<<fab(n);  //Calling in way creates duplication of Input
cout<<endl;

cout<<"Factorial is: ";
cout<<fact(n)<<endl;

int r;
cout<<"Enter Value of r"<<endl;
cin>>r;
cout<<"The value nCr is: ";
int ans= fact(n)/(fact(r)*fact(n-r));
cout<<ans;
cout<<endl;

return 0;
}
