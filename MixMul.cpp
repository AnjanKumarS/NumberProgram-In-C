#include<iostream>
using namespace std;

int mixmul(int a,int b){
    int rev = 0;
    while(a!=0){
        int r = a % 10;
        rev = rev * 10 + r;
        a = a / 10;
    }
    int sum = 0;
    int mul = 0;
    int al = sizeof(rev) / sizeof(int);
    int bl = sizeof(b) / sizeof(int);
    while(rev!=0 || b!=0){
        int d1 = rev % 10;
        int d2 = b % 10;
        if(al>bl){
            if(d2==0){
                mul = d1 * 1;
            }
            else{
                mul = d1 * d2;
            }
        }
        else{
            if(d1==0){
                mul = 1 * d2;
            }
            else{
                mul = d1 * d2;
            }
        }
        sum = sum + mul;
        rev /= 10;
        b /= 10;
    }
    return sum;
}

int main(){
    int a = 125;
    int b = 26;
    cout << mixmul(a, b) << endl;
}