/*      
    *********
     ******* 
      *****         (for n = 5)
       ***   
        *
*/

#include<bits/stdc++.h>
using namespace std;

void print8(int n ){
    int r = n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*r-1;k++){
            cout<<"*";
        }
        r--;
        cout<<endl;
    }
}

int main(){
    int n ;
    cin>>n;
    print8(n); 
    
    return 0;
}