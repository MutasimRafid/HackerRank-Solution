#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int d,m;
cin>>d>>m;
int c = 0;
int result = 0;
for(int i = 0;i<n;i++){
    for(int j = i;j<m+i;j++){
        result = arr[j]+result;
    }
    if(result == d){
        c++;
    }
    result = 0;
}
cout<<c<<endl;
}
