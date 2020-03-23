/*
Mark and Jane are very happy after having their first child.
Their son loves toys, so Mark wants to buy some.
There are a number of different toys lying in front of him, tagged with their prices.
Mark has only a certain amount to spend, and he wants to maximize the number of toys he buys with this money.
ex.
price=[1,2,3,4]      prices
k=7                  total amount he has
he has 2 options 1,2,3 for 6 RS or 4,5 for 7RS
he should choose 1st group of 3 toys
output: 3

*/



int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());
    int i=0;
    while(k>0)
        k-=prices[i++];
    return i-1;
}
