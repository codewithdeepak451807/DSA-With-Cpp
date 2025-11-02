#include<bits\stdc++.h>
using namespace std;

void Palindrome(int n){
    int n1 = n;
    int reverse=0;
    int LastDigit=0;
    while(n>0){
        LastDigit = n%10;
        reverse = reverse * 10 + LastDigit;
        n = n/10;
    }
    if(reverse == n1)  cout<<"It is a Palindrome";
    else cout<<"It is not a Palindrome"; 
}

int main(){
    int n;
    cin>>n;
    Palindrome(n);
    return 0;
}