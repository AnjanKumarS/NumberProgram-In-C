#include<iostream>
using namespace std;

int Unique(int n){
    while(n!=0){
        int d = n % 10;
        int copy = n / 10;
        cout << n << endl;
        while(copy!=0){
            int rem = copy % 10;
            if(rem==d){
                return false;
            }
            copy = copy / 10;
        }
        n = n / 10;
    }
    return true;
}

int main(){
    int n = 12134;
    cout << (Unique(n) ? "Unique Number" : "Not Unique") << endl;
}