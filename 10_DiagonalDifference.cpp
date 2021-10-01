#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n][n];
for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        cin>>arr[i][j];
    }
}
//1st diagonal
int sum1 = 0;
int left = 0;
for(int i = 0;i<n;i++){
    sum1 += arr[i][left];
    left++;
}
//2nd diagonal
int sum2 = 0;
int right = n-1;
for(int i = 0;i<n;i++){
    sum2 += arr[i][right];
    right--;
}
//the difference
int diff = sum1 - sum2;
if(diff<0){
    diff = diff * (-1);
}

cout<<diff<<endl;
return 0;


}
