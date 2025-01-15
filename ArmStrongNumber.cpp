#include<iostream>
using namespace std;

int count(int n){
    int c = 0;
    while(n!=0){
        n = n / 10;
        c++;
    }
    return c;
}

int power(int b,int e){
    int pow = 1;
    for (int i = 1; i <= e;i++){
        pow = pow * b;
    }
    return pow;
}

int main(){
    int n = 153;
    int temp = n;
    int e = count(n);
    int sum = 0;
    while(n!=0){
        int b = n % 10;
        sum = sum + power(b, e);
        n = n / 10;
    }
    cout<<(temp==sum?"ASN":"Not an ASN")<<endl;
}