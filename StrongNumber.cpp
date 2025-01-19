#include<iostream>
using namespace std;

int strongNumber(int n){
    int sum = 0;
    while(n!=0){
        int rem = n % 10;
        int fact = 1;
        for (int i = 1; i <= rem;i++){
            fact *= i;
        }
        sum += fact;
        n = n / 10;
    }
    return sum;
}

int main(){
    int n = 145;
    if(n==strongNumber(n)){
        cout << "StrongNumber" << endl;
    }
    else{
        cout << "Not a StrongNumber" << endl;
    }
}