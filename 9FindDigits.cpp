#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;

int c = 0;
int reduce = n;
//int lastDigit = 0;

while(reduce!=0){
    int lastDigit = reduce%10;
    if(n%lastDigit == 0 && lastDigit!=0){
        c++;
    }
    reduce = reduce/10;
}
cout<<c<<endl;


    }
 return 0;
}
