#include<iostream>
using namespace std;
void bin_search(int arr[], int h, int l, int k){
    int c=0,f=0;
    while(l<=h){
        int m=(h+l)/2;
        c++;
        if(arr[m]==k)
        {
            cout<<"Present "<<c<<endl;
            f=1;
            break;
        }
        if(k>arr[m])
            l=m+1;
        if(k<arr[m])
            h=m-1;
    }
    if(f==0)
        cout<<"Not Present "<<c<<endl;
}
int main(){
    int t,n,key;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int h=n-1, l=0;
        cin>>key;
        bin_search(arr,h,l,key);
    }
    return 0;
}
