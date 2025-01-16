#include<iostream>
using namespace std;

int palindrome(int n){
    int num = 0;
    while(n!=0){
        int r = n % 10;
        num = num * 10 + r;
        n = n / 10;
    }
    return num;
}

int main(){
    int n = 1234321;
    if(n==palindrome(n)){
        cout << "Palindrome Number" << endl;
    }
    else{
        cout << "Not a Palindrome" << endl;
    }
}