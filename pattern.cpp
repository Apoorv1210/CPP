#include<bits/stdc++.h>
using namespace std;

// space , star , space


void print1(int n){
    for (int i=0 ; i<n ; i++){
        for (int j = 0  ; j<=n-i-1 ;  j++){
            cout<<" ";
        }
        for (int k = 0  ; k<2*i + 1 ;  k++){
            cout<<"*";
        }
        for (int l = 0  ; l<=n-i-1 ;  l++){
            cout<<" ";
        }
        cout<<endl;
    }
}

//-----------------------------------------------
// *
// **
// ***
// ****
// ***
// **
// *

void print2(int n){
    for (int i=1 ; i<=2*n-1 ; i++){
        int star=i;
        if (i>n) star=(2*n- i) ;
        for (int j=1 ; j<=star ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}




















int main(){
    int n;
    cin>>n;
    print1(n);
}
