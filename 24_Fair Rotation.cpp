#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
//input array
int arr[n];

for(int i = 0;i<n;i++){
    cin>>arr[i];
}
//working
int loaves = 0,j = 0,end = n-1;

//will run till 2nd last element
while(j<end){
    //if element is odd. 0=false
    if(arr[j]%2){
        arr[j]++;
        arr[j+1]++;//next value will also increment
        loaves += 2; //as 2 value incremented

    }
    j++;
}
//if last element is odd. Last element can't be odd
if(arr[end]%2){
    cout<<"NO"<<endl;
}
else{
    cout<<loaves<<endl;
}


return 0;
}
