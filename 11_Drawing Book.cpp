#include<bits/stdc++.h>
using namespace std;

int main(){
int n,p;
cin>>n>>p;
if(p%2==0 && p == n-1){
    cout<<0<<endl;

}
else if(p==1){
    cout<<0<<endl;
}
else if(p==n){
    cout<<0<<endl;
}
else{
    //front side
    int i = 1;
    int c = 0;
    int k = 0;
    while(i<=n){
        if(i>=p){
            break;
        }
        i+=2;
        c++;
    }
    //back side
    int j = n;
    while(j>=1){
        if(j<=p){
            break;
        }
        j-=2;
        k++;
    }
    if(p%2==0&&n%2!=0){
        k-=1;
    }

    int result = min(c,k);
    cout<<result<<endl;

}
return 0;

}
