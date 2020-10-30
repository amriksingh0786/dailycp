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
    int v=3;
    int arr[n][v];
    for(int i=0;i<n;i++){
        for(int j=0;j<v;j++)
        cin>>arr[i][j];
    }
    int count=0;
    for(int i=0;i<v;i++){
        int sum=0;
        for(int j=0;j<n;j++){
        sum=sum+arr[j][i];
        }
        if(sum==0){count++;}
        
    }
    if(count==v){
        cout<<"YES";
    }
    else{cout<<"NO";}
    return 0;
}