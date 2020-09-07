/* Attack of Thanos
Problem Statement:
Thanos attacks the Earth with all his army. He divides his army in m differnt small parts and these different parts of his army attack at differnt point at different time. Assume there are n points on the Earth and points are numbered from left to right. Distance between two adjacent points is one unit. This attack makes Thor looking to you for help. Thor cannot be at each point at the same time. Each i th army consist of bi monsters attacks at some point pi at time ti. If Thor is at point x(1<=x<=n) at the time of i th attack then number of monster he will kill is bi - |pi - x| (note number of moster killed can be negative means some innocent people are killed). Thor can move d distance in unit time interval, assume he moves only on these points. He can be at any point initially(at time 1). You are programming member of avenger and need to find the maximum monsters he can kill by moving. Find the Maximum monster killed (it include the negative cost for people killed).

Note that Thanos is cruel so two or more army can attack at the same time

Input:
The first line contains three integers n, m, d

1 ≤ n ≤ 150000

1 ≤ m ≤ 300

1 ≤ d ≤ n

Each of the next m lines contains integers pi, bi, ti

1 ≤ pi ≤ n

1 ≤ bi ≤ 10^9

1 ≤ ti ≤ 10^9

The i-th line contains description of the i-th attack.

It is guaranteed that the condition ti ≤ ti + 1 (1 ≤ i < m) will be satisfied.

Output:
Print a single integer — the maximum sum of monsters that can be killed (negative cost for people killed)

Please, do not write the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams or the %I64d specifier.

Constraints:
1 ≤ n ≤ 150000

1 ≤ m ≤ 300

1 ≤ d ≤ n

1 ≤ pi ≤ n

1 ≤ bi ≤ 10^9

1 ≤ ti ≤ 10^9

ti ≤ ti + 1 (1 ≤ i < m)

Time Limit:
1 sec

Example 1:
Input
10 2 1
5 7 2
9 1 4

Output
6

Sample I/O Explanation:
In First test case, n=10, m=2 and d=1. First attack made at time t=2 at point 5 and consist of 7 monsters. So in this case Thor start from the point 5 so he kills 7-|5-5|=7 monsters then he move to point 7 in 2 unit time so 1-|7-9|=1-2=-1, so answer is 7+(-1) = 6.

 */