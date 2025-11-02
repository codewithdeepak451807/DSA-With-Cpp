#include<bits\stdc++.h>
using namespace std;

void Armstrong(int n){
    int n1 = n;
    long arm=0;
    int LastDigit=0;
    
    while(n>0){
        LastDigit = n%10;
        arm = arm + LastDigit*LastDigit*LastDigit;
        n = n/10;
    }
    if(arm == n1)  cout<<"It is a Armstrong";
    else cout<<"It is not a Armstrong"; 
}

int main(){
    int n;
    cin>>n;
    Armstrong(n);
    return 0;
}