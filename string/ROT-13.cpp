#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    getline(cin,s);
    int len=s.size();
    for(int i=0;i<len;i++){
        if('A'<=s[i] && s[i]<='Z'){
            if(s[i]<'N'){
                c=s[i]+13;
                cout<<c;
            }
            else{
                c=s[i]-13;
                cout<<c;
            }
        }
        else if('a'<=s[i] && s[i]<='z'){
            if(s[i]<'n'){
                c=s[i]+13;
                cout<<c;
            }
            else{
                c=s[i]-13;
                cout<<c;
            }
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}
