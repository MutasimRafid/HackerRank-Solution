#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'hackerrankInString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
 //the word needs to be found
 const string word = "hackerrank";

string hackerrankInString(string s) {
    int pos = 0;
    for(int i = 0;i<s.size();i++){
        //checked 10 element as hackerrank has 10 chracters
        if(pos == word.size() - 1){
            break;
        }
        //checking if s[i] maches with "hackerrank" and also serially
        if(s[i]==word[pos]){
            pos++;
        }
    }
    //if pos size is equal to 10. "hackerrank" has 10 chracters
    if(pos == word.size() - 1){
        return "YES";
    }
    else{
        return "NO";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
