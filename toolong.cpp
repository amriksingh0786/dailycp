#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin>>t;
     string s;
    while(t--){
   
  /*   cin.ignore(); */
    cin>>s;
        //cout<<s<<endl;
    int length;
    length=s.length();
    //cout<<length;
    if(s.length()>10){
        
        length=length-2;
    cout<<s[0]<<length<<s[s.length()-1]<<endl;
    }
    else{
        cout<<s<<endl;
    }
    }
    return 0;
}