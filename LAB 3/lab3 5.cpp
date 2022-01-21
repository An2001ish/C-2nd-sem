#include <iostream>

using namespace std;

struct dist{

int f,i;
};

void display(dist d3){

cout<<"Height is: "<<d3.f<<"'"<<d3.i<<"\"";
}

void scale(dist &d2){

while(d2.i>=12){

    d2.f++;
    d2.i-=12;
}
display(d2);

}

int main(){

dist d1;

cout<<"Enter feet: ";
cin>>d1.f;
cout<<"Enter inch: ";
cin>>d1.i;

scale(d1);

    return 0;
}
