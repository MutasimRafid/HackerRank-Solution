#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int i = 0;
int jump = 0;
while(i<n-1){
    if(arr[i+2]==0){
        jump = jump+1;
        i = i+2;
    }
    else if(arr[i+1]==0){
        jump = jump+1;
        i = i+1;
    }
    else{}
}
cout<<jump<<endl;

}
