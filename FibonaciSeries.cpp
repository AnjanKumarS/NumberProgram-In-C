#include<iostream>
using namespace std;

int main(){
    int n=5;
    int a=0;
    int b=1;
    for(int i=0;i<=n;i++){
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b = c;
    }
}