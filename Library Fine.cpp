#include<bits/stdc++.h>
using namespace std;

int main(){
int d2,m2,y2,d1,m1,y1;
cin>>d2>>m2>>y2>>d1>>m1>>y1;
int ylate = 0;
int mlate = 0;
int dlate = 0;

if(y1 != y2){
        if(y2>y1){
    ylate = 10000;
    cout<<ylate<<endl;
    return 0;
        }
        else{
            cout<<0<<endl;
        }
}
else if(m1!=m2){
          if(m2>m1){
    mlate = (m2-m1)*500;
    cout<<mlate<<endl;
    return 0;
          }
          else{
            cout<<0<<endl;
          }

}
else{
        if(d2>d1){
    dlate = (d2-d1)*15;
    cout<<dlate<<endl;
    return 0;
        }
        else{
            cout<<0<<endl;
        }
}

return 0;

}
