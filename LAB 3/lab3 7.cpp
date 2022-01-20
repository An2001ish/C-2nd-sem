#include <iostream>
#include<cmath>
#define PI 3.14

using namespace std;

float area(int a,int b,int c){

float s;
s=(a+b+c)/2;

return sqrt(s*(s-a)*(s-b)*(s-c));

}

float area(int l,int b1){

return l*b1;

}

float area(int r){

return PI*r*r;

}

int main(){

    cout << "Area of Triangle is: " << area(5,4,3)<<endl;

    cout << "Area of  Rectangle is: " << area(5,3)<< endl;

    cout << "Area of Circle is: " << area(5);


    return 0;
}
