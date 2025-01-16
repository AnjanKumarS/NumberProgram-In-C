#include<iostream>
using namespace std;

int main(){
    int n = 9;
    int sq = n * n;
    int sum = 0;
    while(sq!=0){
        int r = sq % 10;
        sum = sum + r;
        sq = sq / 10;
    }
    cout << (n == sum ? "Neon Number" : "Not a Neon Number") << endl;
}