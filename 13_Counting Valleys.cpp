#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
string s;
cin>>s;
int c = 0;
int valley = 0;

for(int i = 0;i<n;i++){
    if(s[i]=='U'){
        if(c==-1){
            valley++;
        }
        c++;
    }
    else{
      c--;
    }
}
cout<<valley<<endl;


}
