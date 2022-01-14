#include <iostream>

using namespace std;

int main()
{
    int n, arm = 0, r;
    cout << "Enter a number: ";
    cin >> n;

    for(int i=n;i!=0;i/= 10){
        r = i % 10;
        arm +=r * r * r;
    }
    if (arm == n)
        cout << n << " is armstrong";
    else
        cout << n << " is not armstrong";
    return 0;
}
