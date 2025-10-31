/* 
    1 2 3 4  
    1 2 3            (for n = 4)
    1 2 
    1 
*/

#include<bits/stdc++.h>
using namespace std;

void print6(int n ){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n ;
    cin>>n;
    print6(n);
    
    return 0;
}