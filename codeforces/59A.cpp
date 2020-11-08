#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
 string up(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')str[i]-=32;
    }
    return str;
}
string low(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z')str[i]+=32;
    }
    return str;
}
int main()
{
    fastio;
   


    string str;
    int u = 0,l = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')l++;
        if(str[i] >= 'A' && str[i] <= 'Z')u++;
    }
    if(l < u)cout << up(str) << endl;
    else cout << low(str) << endl;

    return 0;
}