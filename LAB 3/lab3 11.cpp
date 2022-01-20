#include <iostream>

using namespace std;

int b=0,c=1,d;

int fibo(int n){

if(n!=0){

    cout<<b<<'\t';
    d=b+c;
    b=c;
    c=d;

    return fibo(n-1);
}
else
    return 0;
}

int main(){

int a;

    cout << "Enter no. of terms: ";
    cin>>a;

fibo(a);

    return 0;
}
