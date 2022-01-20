#include <iostream>

using namespace std;

int zeroSmaller(int &x,int &y){

if(x<y)
return x;

else
    return y;

}

int main(){

int a,b;

cout<<"Enter two numbers: ";
cin>>a>>b;

cout<<zeroSmaller(a,b)<<" is smaller.";

return 0;
}
