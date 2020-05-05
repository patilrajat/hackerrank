/*
**Question-- arr=[-2,1,3,-4,5] find the subset of [non-adjacent] elements with the maximum sum 
Subset      Sum
[-2, 3, 5]   6
[-2, 3]      1
[-2, -4]    -6
[-2, 5]      3
[1, -4]     -3
[1, 5]       6
[3, 5]       8     //this is max there for output = 8
*/

int maxSubsetSum(vector<int> arr) {

int a = 0, b = 0, temp;
for(int i = 0; i < arr.size(); i++) 
{
    temp = a;
    a = max(arr[i]+b, temp);
    b = temp;
}
return max(a,b);
}
