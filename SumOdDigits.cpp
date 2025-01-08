#include<iostream>
using namespace std;

int main(){
    int n = 123456;
    int sum = 0;
    while(n!=0){
        int rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    cout << sum << endl;
}