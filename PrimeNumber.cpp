#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int c;
    for (int i = 1; i <= n;i++){
        if(n%i==0){
            c++;
        }
    }
    cout << (c == 2 ? "Prime" : "Not a Prime") << endl;
}