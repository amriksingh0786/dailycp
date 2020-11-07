#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool areChractersUnique(string str) 
{ 
    int checker = 0; 
  
    for (int i = 0; i < str.length(); ++i) 
    { 
        int val = (str[i]-'a'); 
  
 
        if ((checker & (1 << val)) > 0) 
            return false; 
  

        checker |=  (1 << val); 
    } 
  
    return true; 
} 
int main()
{
    fastio;
    int fYear;
    cin>>fYear;
    string str ;
    for(int i=fYear;i<=90000;i++){
        
        str = to_string((i+1));
        if(areChractersUnique(str)){
            break;
        }
        else{
            continue;
        }
    }

    cout<<stoi(str);
    return 0;
}