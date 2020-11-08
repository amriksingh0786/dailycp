#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    bool t;
    while(n!=0){
        if(n%10==4){
            continue;
            
        }
        else if(n%10==7){
            continue;
        }
        else{
            t= false;
        }

        n=n/10;
    }
    if(!t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}