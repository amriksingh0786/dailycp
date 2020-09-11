/* #include <bits/stdc++.h>

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

    if(a==n && a==m){
        cout<<aN;
    }
    else if(a==n){
           cout<<aM;
    }
    else if(a==m){
    cout<<aN;
    }
    else{
        cout<<aN+aM;
    }
    

    return 0;
} */


#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    double n, m, a; 
    cin >> n >> m >> a; 
    cout << (long long) ceil(n/a)* (long long) ceil(m/a) << endl; 
} 