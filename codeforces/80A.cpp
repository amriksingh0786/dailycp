#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool is_prime(int n){
for(int i=2;i<=sqrt(n);i++){
  if(n%i==0) return false;
}
return true;
}

int main()
{
    fastio;
    int x,y;
    cin>>x>>y;
    vector<int> store_prime;
    for(int i=0;i<=y;i++){ // O(n)
        if(is_prime(i)) 
        store_prime.push_back(i);
    }
    int size_of_store_prime= store_prime.size();
    if(size_of_store_prime<2){
        cout<<"NO";
    }
    else if(x==store_prime[size_of_store_prime-2]&&y==store_prime[size_of_store_prime-1]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}