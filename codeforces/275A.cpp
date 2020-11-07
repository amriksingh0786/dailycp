#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define toggle(x) (x = !x)

using namespace std;

int main()
{
    fastio;
    typedef vector <int> v_int;
    vector <v_int> light_on(3 + 2, v_int(3 + 2, true));

    for(int row = 1; row <= 3; row++)
    {
        for(int column = 1; column <= 3; column++)
        {
            int no_of_toggles;
            scanf("%d", &no_of_toggles);

            if(no_of_toggles%2 == 1)
            {
                toggle(light_on[row][column]);

                toggle(light_on[row][column - 1]);
                toggle(light_on[row][column + 1]);
                toggle(light_on[row + 1][column]);
                toggle(light_on[row - 1][column]);
            }
        }
    }

    for(int row = 1; row <= 3; row++)
    {
        for(int column = 1; column <= 3; column++)
        {
            if(light_on[row][column])
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}