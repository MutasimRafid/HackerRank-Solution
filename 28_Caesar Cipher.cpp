#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
string s;
cin>>s;
int k;
cin>>k;
int ascii;
//because k must have to be within 26.
//small letter highest ascii value 122
// so that z+k(26) = 122+26 = 148. we subtract 26. we get 122.
//y+25 = 121 +k(25) = 146. subtract 26. we get 120.
//but if k = 100. y+k = 121+100 = 221. 221-26 = 195. which is invalid ascii

k = k%26;
//loop to use ceaser ciphar
for(int i = 0;i<n;i++){
        char x = s[i];
        ascii = (int)x; //converting s[i] into ascii
        //for small letters
    if(s[i]>='a'&&s[i]<='z'){
        ascii = ascii + k;
        if(ascii>122){
            ascii = ascii - 26;

        }
        char z = ascii;
        s[i] = z; //reassigning the changed value to string
    }
    //for upper case letters
    else if(s[i]>='A'&&s[i]<='Z'){
        ascii = ascii + k;
        if(ascii>90){
            ascii = ascii - 26;

        }
        char z = ascii;
        s[i] = z; //reassigning the changed value to string
    }
    else{}
}
cout<<s<<endl;

return 0;
}
