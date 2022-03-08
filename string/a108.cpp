#include<bits/stdc++.h>
using namespace std;
int main(){
    bool first=true;
    int t;
    string s;
    cin>>s;
    char c,c2;
    cin>>c;
    if(c < 97){
        c2=c+32;
    }
    else{
        c2=c-32;
    }
    int len=s.size();
    for(int i=0;i<len;i++){
        if((s[i]==c || s[i]==c2)&& first==true){
            t=i;
            first=false;
        }
        else if(s[i]==c || s[i]==c2){
            cout<<i-t<<" ";
            t=i;
        }
    }
    return 0;
}
