#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}

int i = 0;
int point = 100;
while(1){
    if(arr[i]==1){
        point -= 3;
    }
    else{
        point -= 1;

    }
    i =(i+k)%n;
    if(i%n==0){
        break;
    }

}
cout<<point<<endl;
return 0;

}
