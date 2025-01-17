#include<iostream>
using namespace std;

int main(){
    int n = 12345;
    int eds = n % 10;
    n = n / 10;

    int ids = 0;
    while(n>9){
        ids = ids + (n % 10);
        n = n / 10;
    }
    eds = eds + n;

    if(eds==ids){
        cout << "Xylem" << endl;
    }
    else{
        cout << "Pholem" << endl;
    }
}