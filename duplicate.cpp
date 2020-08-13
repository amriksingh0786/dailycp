#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int findDuplictae(int arr[] ){

    int slow=arr[0];
    int fast=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];

    }while(slow!=fast);

    fast=arr[0];
    while(fast!=slow){
        fast=arr[fast];
        slow=arr[slow];
    }
    return slow;
}
int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int  i= 0;  i< n; i++)
        {
            cin>>arr[i];
        }
    cout<<findDuplictae(arr);

    }
    return 0;
}