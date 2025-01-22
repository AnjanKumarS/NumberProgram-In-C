#include<iostream>
using namespace std;

int main(){
    int n = 123;
    int sum = 0;
    int mul = 1;
    while(n!=0){
        int rem = n % 10;
        sum += rem;
        mul *= rem;
        n /= 10;
    }
    if(sum==mul){
        cout << "Spy Number" << endl;
    }
}