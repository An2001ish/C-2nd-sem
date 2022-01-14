#include <iostream>
#include<iomanip>

using namespace std;

void swap(int &a,int &b){
int temp;

temp=a;
a=b;
b=temp;

}

int main()
{
int x,y;

cout<<"Enter two numbers: ";
cin>>x>>y;

cout<<"First no.: "<<x<<'\t'<<"Second no: "<<y<<endl;

swap(x,y);

cout<<"First no.: "<<x<<'\t'<<"Second no: "<<y<<endl;

   return 0;

}
