/*
    1
    2 3
    4 5 6           (for n = 4)
    7 8 9 10
*/

#include<bits\stdc++.h>
using namespace std;

void print13(int n ){
    for(int i=0;i<n;i++){
        for(char ch ='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print13(n);
    return 0;
}