#include<bits\stdc++.h>
using namespace std;

void ReverseaNumber(int n){
    int reverse=0;
    int LastDigit=0;
    while(n>0){
        LastDigit = n%10;
        reverse = reverse * 10 + LastDigit;
        n = n/10;
    }
    cout<<"The reverse is "<<reverse;    
}

int main(){
    int n;
    cin>>n;
    ReverseaNumber(n);
    return 0;
}