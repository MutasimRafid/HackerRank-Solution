#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
int minDiff = INT_MAX;
int diff = INT_MAX;
int flag = 0;
//input array
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
//working array
for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){ //i+1 because will compare with next element
    if(arr[i]==arr[j]){
        flag=1;
        diff = j-i; //difference between two index
        minDiff = min(minDiff,diff); //minimum index difference value
    }
}
}
if(flag==0){
    cout<<-1<<endl;
}
else{
    cout<<minDiff<<endl;
}
return 0;
}
