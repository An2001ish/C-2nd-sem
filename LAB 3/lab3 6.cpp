#include <iostream>
#define PI 3.14

using namespace std;

inline void area(int r1){

cout<<"Its area is: "<<PI*r1*r1;

}

int main(){

int r;

cout<<"Enter radius: ";
cin>>r;

area(r);

return 0;
}
