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
while(i<n){
    if(arr[i+2]==0){
        jump++;
        //cout<<i<<"@";
        i+=2;

        }
    else if(arr[i+1]==0){
        jump++;
        i++;
    }
    else{
        break;
    }

}
    cout<<jump<<endl;


}




