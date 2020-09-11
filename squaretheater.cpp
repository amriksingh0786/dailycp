#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,m,a,aN,aM;
    cin>>n>>m>>a;
    aN=n/a;
    aM=m/a;
    int remainderN,remainderM;
    remainderN=n%a;
    remainderM=m%a;
    if(remainderN<a && remainderN!=0){
        ++aN;
    }
    if(remainderM<a && remainderM!=0){
        ++aM;
    }

    if(a==1 && n==1 && m==1){
        cout<<a;
    }
    else{
        cout<<aN+aM;
    }
    

    return 0;
}