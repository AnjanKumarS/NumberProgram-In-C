#include<iostream>
using namespace std;

int main(){
    int n = 825346;
    while(n>9){
        int r = n % 10;
        n = n / 10;
    }
    if(n%2==0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}