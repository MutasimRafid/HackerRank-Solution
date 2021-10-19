#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
string g = "SOSSOS";
int j = 0;
int c = 0;
for(int i = 0;i<s.size();i++){
    if(s[i]!=g[j]){
        c++;
    }
    j++;
    if(j==6){
        j=0;
    }
}
cout<<c<<endl;

return 0;
}
