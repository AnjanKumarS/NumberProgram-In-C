#include<iostream>
using namespace std;

int main(){
    int n = 100;
    bool flag = false;

    for (int i = 1; i <= n;i++){
        if(i*i==n){
            flag = true;
            break;
        }
    }
    cout << (flag ? "Perfect Squre" : "Not Perfect Squre") << endl;
}