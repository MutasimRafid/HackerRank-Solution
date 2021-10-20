#include<bits/stdc++.h>
using namespace std;

int main(){
int n,d;
cin>>n>>d;
int a[n];
int t = 0;
for(int i = 0;i<n;i++){
    cin>>a[i];
}
//working 3 loop
for(int i = 0;i<n;i++){
        //2nd loop
    for(int j = i+1;j<n;j++){
        //khata check
        if(a[j]-a[i] == d){
            //3rd loop
            for(int k = j+1;k<n;k++){
                if(a[k]-a[j]==d){
                    t++; //triplet update
                    break;
                }
            }
        }
    }
}
cout<<t<<endl;

return 0;
}
