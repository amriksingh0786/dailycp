#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int getSum(int a) 
{ 
    int sum; 
  
    /* Single line that calculates sum */
    for (sum = 0; a > 0; sum += a % 10, a /= 10); 
  
    return sum; 
} 
int main()
{
    fastio;
    string n;
    cin>>n;
    int k;
    cin>>k;
    int number = stoi(n);
    int count=0;
    for(int i=0;i<number;i++){
        if(getSum(i)%k==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}