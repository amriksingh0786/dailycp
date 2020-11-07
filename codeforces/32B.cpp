#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    cin>>s;
    string o="";
    for(int i=0;i<s.size();){
        if(s[i]=='.'){
            o.push_back('0');
            i++;
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.'){
                o.push_back('1');
                i=i+2;
            }
            else{
                o.push_back('2');
                i=i+2;
            }
        }
    }
    /* stringstream number(s); 
  

    int x = 0; 
    number >> x;
 
    cout<<x; */
    cout<<o<<endl;
    return 0;
}