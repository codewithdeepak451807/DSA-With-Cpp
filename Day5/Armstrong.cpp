#include<bits\stdc++.h>
using namespace std;

void Armstrong(int n){
    int n1 = n;
    long arm=0;
    int LastDigit=0;
    int count=0;
    
    while(n>0){
        LastDigit = n%10;
        count++;
        n = n/10;
    }
    for(int i =1;i<=count;i++)
    if(arm == n1)  cout<<"It is a Armstrong";
    else cout<<"It is not a Armstrong"; 
}

int main(){
    int n;
    cin>>n;
    Armstrong(n);
    return 0;
}