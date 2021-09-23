#include<iostream>
using namespace std;
void position_sum(int arr[], int n){
    int i,j,k;
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(arr[k]==arr[i]+arr[j]){
                    cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                    return;
                }
            }
        }
    }
    cout<<"No sequence found"<<endl;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        position_sum(arr,n);
    }
    return 0;
}

