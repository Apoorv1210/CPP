//HASHMAP



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements in the array : ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n; i++ ){
        cout<<"enter the "<<i<<" element : ";
        cin>>arr[i];
    }

    //precompute 

    map<int,int> mpp;
    for (int i=0 ; i<n ; i++){
        mpp[arr[i]]++;
    }

    //iterate in the map

    // for(auto it : mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    int q ;
    cout <<"enter number of queries : ";
    cin>>q;
    
    while(q--){
        int num;
        cout <<"enter the query: ";
        cin>>num;

        cout<<"the number of time "<<num<<" appears is "<<mpp[num]<<endl;
    }



}