#include<iostream>
#include<cmath>
using namespace std;
void key_diff(int arr[], int n,int k){
    int i,j,c=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])==k){
                c++;
        }}
    }
    cout<<c<<endl;
}
int main(){
    int t,n,key;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>key;
        key_diff(arr,n,key);
    }
    return 0;
}

