#include<iostream>
using namespace std;

int main(){
    int y = 2024;
    if((y%4==0 && y%100!=0) || (y%400==0)){
        cout << "Leap Year";
    }
    else{
        cout << "Not a Leap Year";
    }
}