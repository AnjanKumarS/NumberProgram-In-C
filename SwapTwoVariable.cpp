#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    //using temp
    int temp = a;
    a = b;
    b = temp;

    //using add and sub
    a = a + b;
    b = a - b;
    a = a - b;

    //using mul and div (a&b != 0)
    a = a * b;
    b = a / b;
    a = a / b;

    //using formula
    a = b - a + (b = a);

    //using ^
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b;
}