#include <iostream>

using namespace std;

int temp1,temp2;


int &fun(){

if(temp1>temp2)
    return temp1;
else
    return temp2;

}

int main()
{

cout<<"Enter two temp: ";
cin>>temp1>>temp2;

fun()=100;

cout<<"Temp 1 = "<<temp1<<'\t'<<"Temp 2 = "<<temp2;

 return 0;
}
