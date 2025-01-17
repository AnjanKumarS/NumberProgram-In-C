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

int main(){
    int n = 2025;
    int temp = n;
    int c = count(n);
    if(c%2==0){
        int div = 1;
        for (int i = 0; i < c / 2;i++){
            div = div * 10;
        }
        int sum = (n / div) + (n % div);
        int sq = sum * sum;
        cout << (temp == sq ? "Tech Number" : "Not a Tech number") << endl;
    }
    else{
        cout << "Not a Tech Number" << endl;
    }
}