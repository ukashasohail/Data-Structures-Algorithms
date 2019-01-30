#include <iostream>

using namespace std;

int main(){
    int x;
    char ar[10];

    cout << "address of x is: ";
    //& symbol with variable x(which is defined above) will return the pointer of x
    cout << &x <<endl;

    cout << "Address of ar is: ";
    cout << & ar;

    return 0;
}