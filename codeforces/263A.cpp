#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int i,j;
    int arr[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int nI,nJ;
    for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(arr[i][j]==1){
        nI=i+1;
        nJ=j+1;
        }
        }
    }
    cout<<abs(3-nI)+abs(3-nJ);
    return 0;
}