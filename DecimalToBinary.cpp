#include<iostream>
using namespace std;

int main(){
    int n = 10;
    string bin = " ";
    while(n!=0){
        int rem = n % 2;
        bin = to_string(rem) + bin;
        n = n / 2;
    }
    cout << bin << endl;
}