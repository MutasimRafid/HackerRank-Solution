#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
long long n;
cin>>n;
int len = s.size();
int freq = 0;
for(int i = 0;i<len;i++){
    if(s[i]=='a'){
        freq++;
    }
}
long long div = n/len;
long long result = freq * div;
//s = aba aba aba a
//result was for the 1st 3 aba
//what about the last a?
//now will find the last a
for(int i = 0;i<n%len;i++){
    if(s[i]=='a'){
        result++;
    }
}
cout<<result<<endl;



 return 0;
}
