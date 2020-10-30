#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    void *vp;
char *p="RAHUL",ch=82;
int i=65;
vp=&ch;
printf("%c",(char)vp);
vp=&i;
printf("%c",(int)vp);
vp=p;
printf("%s",(char*)vp+2);
return 0;
}
    
