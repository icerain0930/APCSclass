#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0,len=s.size();
    for(int i=0;i<len;i++){
        if(i%2==0){
            a+=s[i]-48;
        }
        else{
            b+=s[i]-48;
        }
    }
    cout<<abs(a-b)<<endl;
    return 0;
}
