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
    if(!(t&1)){
        cout<<"YES"<<endl;
    }
    else if(t==2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}