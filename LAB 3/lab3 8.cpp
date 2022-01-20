#include <iostream>

using namespace std;

struct date{
int mm,dd,yy;
};


void display(date d2){

cout<<"Date is: "<<d2.mm<<"/"<<d2.dd<<"/"<<d2.yy;

}

int main(){

date d1;

cout<<"Enter month: ";
cin>>d1.mm;
cout<<"Enter day: ";
cin>>d1.dd;
cout<<"Enter year: ";
cin>>d1.yy;

display(d1);

    return 0;
}
