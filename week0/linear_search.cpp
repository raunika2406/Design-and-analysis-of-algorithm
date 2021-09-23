#include<iostream>
using namespace std;
void linear_search(int arr[], int n, int k){
    int i,c=0;
    for(i=0;i<n;i++){
        c++;
        if(arr[i]==k)
        {
            cout<<"Present "<<c<<endl;
            c=0;
            break;
        }
    }
    if(c!=0)
        cout<<"Not Present "<<n<<endl;
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
        linear_search(arr,n,key);
    }
    return 0;
}
