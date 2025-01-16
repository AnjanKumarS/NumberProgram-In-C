#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int sum = 0;
    for (int i = 1; i < n;i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    cout << (n == sum ? "Perfect Number" : "Not a Perfect Number") << endl;
}