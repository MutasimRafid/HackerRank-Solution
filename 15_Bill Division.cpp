#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int b;
cin>>b;

int add = 0;
for(int i = 0;i<n;i++){
    add += arr[i];
}

int actual = (add - arr[k])/2;
if(actual == b ){
    cout<<"Bon Appetit"<<endl;
}
else{
    int actual2 = b - actual;
    cout<<actual2<<endl;
}
return 0;
}
