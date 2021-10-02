#include<bits/stdc++.h>
using namespace std;

int main(){
int year;
cin>>year;
string s = "";
string y = to_string(year);
if(year==1918){
     s = "26.9.1918";
    cout<<s<<endl;
}
else if(year>1918){
    if(year%400==0){
         s = "12.9."+y;
         cout<<s<<endl;
    }
    else if(year%4==0&&year%100!=0){
        s = "12.9."+y;
        cout<<s<<endl;
    }
    else{
        s = "13.9."+y;
        cout<<s<<endl;
    }
}
else{
    if(year%4==0){
        s = "12.9."+y;
        cout<<s<<endl;
    }
    else{
        s = "13.9."+y;
        cout<<s<<endl;
    }

    return 0;
}


}
