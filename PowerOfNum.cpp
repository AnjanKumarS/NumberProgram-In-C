#include<iostream>
using namespace std;

int main(){
    int base = 10;
    int exp = 2;
    int pow = 1;
    for (int i = 1; i <= exp;i++){
        pow = pow * base;
    }
    cout << pow << endl;
}