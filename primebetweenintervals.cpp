#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t,i,j;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        if (m == 1) { 
        cout << m << " "; 
        m++; 
        if (n >= 2) { 
            cout << m << " "; 
            m++; 
        } 
    } 
    if (m== 2) 
        cout << m<< " "; 
  
  
    if (m % 2 == 0) 
        m++; 
  
   
    for (i = m; i <= n; i = i + 2) { 
  
       
        bool flag = 1; 
  
       
        for (j = 2; j * j <= i; ++j) { 
            if (i % j == 0) { 
                flag = 0; 
                break; 
            } 
        } 
  
    
        if (flag == 1) 
            cout << i << " "; 
    } 
  
    }
    return 0;
}