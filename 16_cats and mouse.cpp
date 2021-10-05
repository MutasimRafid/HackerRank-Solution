#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int x,y,z;
cin>>x>>y>>z;

int r1,r2;
r1 = z-x;
if(r1<0){
    r1 = r1 * (-1);
}
//cout<<"r1:"<<r1<<endl;
r2 = z-y;
if(r2<0){
    r2 = r2 * (-1);
}
//cout<<"r2:"<<r2<<endl;
if(r1==r2){
    cout<<"Mouse C"<<endl;
}
else if(r1<r2){
    cout<<"Cat A"<<endl;
}
else{
    cout<<"Cat B"<<endl;
}
}
return 0;

}
