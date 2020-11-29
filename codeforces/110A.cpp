#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    long long n;
    cin>>n;
    static int count=0;
    while(n!=0){
        if(n%10==4 || n%10==7){
            ++count;
            n=n/10;

        }
        else{
            n=n/10;
        }

        
    }
    if(count==7||count==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}