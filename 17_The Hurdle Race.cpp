#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int maxi = -1;
for(int i = 0;i<n;i++){
    maxi = max(maxi,arr[i]);
}
if(maxi<=k){
    cout<<0<<endl;
}
else{
    cout<<maxi-k<<endl;
}

return 0;
}
