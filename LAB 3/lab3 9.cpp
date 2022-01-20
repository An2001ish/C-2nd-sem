#include <iostream>

using namespace std;

struct height{
int f,i;
};


void display(height h2){

while(h2.i>=12){
    h2.f++;
    h2.i-=12;
}
cout<<"Height is: "<<h2.f<<"'"<<h2.i<<"\"";

}

int main(){

height h1;

cout<<"Enter feet: ";
cin>>h1.f;
cout<<"Enter inch: ";
cin>>h1.i;


display(h1);

    return 0;
}
