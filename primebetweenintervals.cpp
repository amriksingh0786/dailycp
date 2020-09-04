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
   
    if (m+1 == 2) 
        cout << 2<< endl; 
  
    if(m==1){
        m++;
    }
    if (m % 2 == 0) 
        m++; 
  
   
    for (i = m; i <= n; i = i + 2) { 
  
       
        bool flag = 1; 
  
       
        for (j = 2; j * j <= i; ++j) { 
            if (i % j == 0) { 
                flag = 0; 
               
            } 
        } 
  
    
        if (flag == 1) 
            cout << i << endl; 

       
        
    } 
        cout<<endl;
    }
    return 0;
}