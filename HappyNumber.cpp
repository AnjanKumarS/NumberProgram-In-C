#include<iostream>
using namespace std;

int main(){
    int n = 7;
    while(n!=1 && n!=4){
        int sq = 0;
        while(n!=0){
            int r = n % 10;
            sq = sq + (r * r);
            n = n / 10;
        }
        if(sq==1){
            cout << "Happy Number" << endl;
            break;
        }
        else if(sq==4){
            cout << "Not Happy Number" << endl;
            break;
        }
        n = sq;
    }
}