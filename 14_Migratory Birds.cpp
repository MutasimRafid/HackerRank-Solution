#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}

//array for hashing
int arr2[6];
for(int i = 0;i<6;i++){
    arr2[i]=0;
}

//Hashing frequency
//values are 1 based
for(int i = 0;i<n;i++){
    arr2[arr[i]]++;
}
//checking the smallest element that occurred multiple times and which has highest with lowest index
int maxFreq = 0;
int maxIdx = 0;
for(int i = 0;i<6;i++){
        if(arr2[i]>maxFreq){
            maxFreq = arr2[i];
            maxIdx = i;
        }
    /*if(arr2[i]>1){
        cout<<i<<endl;
        break;
    }
    */
}
cout<<maxIdx<<endl;

return 0;
}
