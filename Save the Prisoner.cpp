#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,m,s;
    cin>>n>>m>>s;
    int remainder = m%n;
    int warn = remainder + (s-1);

    if(warn>n){
        warn -= n;
        cout<<warn<<endl;
    }
    else if(warn == 0){
        warn = n;
        cout<<warn<<endl;
    }
    else{
        cout<<warn<<endl;
    }


}

return 0;
}
