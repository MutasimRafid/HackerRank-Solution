#include<bits/stdc++.h>
using namespace std;

int main(){
int p,d,m,s;
cin>>p>>d>>m>>s;
int ans = 0;
//int ans2 = 0;
//int fans = 0;
//int i = 0;
while(s>0){

        if(p<=m){
        p = m;

        }

        s = s-p;
        if(s>=0){
        ans++;
        }
        p = p-d;

}
cout<<ans<<endl;
//cout<<"S value is: "<<s<<endl;

return 0;
}
