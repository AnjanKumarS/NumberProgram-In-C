#include<iostream>
using namespace std;

int main(){
    int n = 12345;
    int k = 3;
    while(k>1){
        n = n / 10;
        k--;
    }
    int v = n % 10;

    if(v!=0 && k>0){
        cout << v << endl;
    }
    else{
        cout << "Invalid" << endl;
    }
}