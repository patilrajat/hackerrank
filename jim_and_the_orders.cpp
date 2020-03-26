/*
Jim's Burgers has a line of hungry customers. Orders vary in the time it takes to prepare them. Determine the order the customers receive their orders. Start by numbering each of the customers from 1 to n, front of the line to the back. You will then be given an order number and a preparation time for each customer.

The time of delivery is calculated as the sum of the order number and the preparation time. If two orders are delivered at the same time, assume they are delivered in ascending customer number order.

For example, there are n=5 customers in line. They each receive an order number  and a preparation time prep[i]

Customer	1	2	3	4	5
Order #		8	5	6	2	4
Prep time	3	6	2	3	3
Calculate:
Serve time 11	11	8	5	7

We see that the orders are delivered to customers in the following order:

Order by:
Serve time	5	7	8	11	11
Customer	4	5	3	1	2

Sample Input 1

5
8 1      8+1=9       4th
4 2      4+2=6       2nd
5 6          11      5th
3 1          4       1st
4 3          7       3nd
Sample Output 1

4 2 5 1 3        sequence will be 4,2,5,1,3
*/




#include <bits/stdc++.h>
using namespace std;

// Algorithm: Maintain a list of pairs (t[i] + d[i], i+1), sort by the first value and output by second
// Runtime: O(nlogn) since we have to sort the list
int main() {
	int n;
	cin>>n;
	vector<pair<int, int>> order;
	for(int i = 0; i < n; i++) {
		int t, d;
		cin>>t>>d;
		order.push_back({t+d, i+1});
	}
	sort(order.begin(), order.end());
	for(int i = 0; i < n; i++) {
		cout<<order[i].second<<" ";
	}
    return 0;
}
