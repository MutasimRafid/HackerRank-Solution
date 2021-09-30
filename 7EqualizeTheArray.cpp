#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
int arr2[100];
int result = 0;;
for(int i = 0;i<n;i++){
    cin>>arr[i];
}

for(int i = 0;i<100;i++){
    arr2[i] = 0;
}

for(int i = 0;i<n;i++){
    arr2[arr[i]]++;
}
sort(arr2,arr2+100);
result = n - arr2[99];
cout<<result<<endl;
}
