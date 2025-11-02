#include<bits\stdc++.h>
using namespace std;

void countDigits(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"The count of Digits is "<<count;
}

int main(){
    int n;
    cin>>n;
    countDigits(n);
    return 0;
}