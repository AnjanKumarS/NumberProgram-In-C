#include<iostream>
using namespace std;

bool isPrime(int n){
    int c = 0;
    for (int i = 1; i <= n;i++){
        if(n%i==0){
            c++;
        }
    }
    return c == 2;
}

int main(){
    int n = 10;
    int c = 0;
    for (int i = 1; i <= n;i++){
        if(isPrime(i)){
            cout << i << " ";
            c++;
        }
    }
}