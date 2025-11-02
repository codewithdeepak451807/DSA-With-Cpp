/*
    A
    B B
    C C C           (For n =5)
    D D D D
    E E E E E
*/

#include<bits\stdc++.h>
using namespace std;

void print15(int n){
    char ch = 'A';
    for(int i=1;i<=n;i++){        
        for(int j=1;j<=i;j++){            
            cout<<ch<<" ";
        }
        ch = ch + 1;
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print15(n);
    return 0;
}