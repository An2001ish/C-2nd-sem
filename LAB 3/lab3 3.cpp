#include <iostream>

using namespace std;

int a,b;

int &greaterr(){

if(a<b)
return a;

else
    return b;

}

int main(){

cout<<"Enter two numbers: ";
cin>>a>>b;

greaterr()=0;

cout<<"a = "<<a<<'\t'<<"b = "<<b;

return 0;
}
