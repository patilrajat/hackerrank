/*
first array arrange in ascending order 2nd array in descending order addition should be a[0]+b[0]>=k
then print YES else print NO
here k is sum of two number minimum
A and B are two arrays

Sample Input:
2
3 10
2 1 3
7 8 9
4 5
1 2 2 1
3 3 3 4

Sample Output:
YES
NO
*/


string twoArrays(int k, vector<int> A, vector<int> B) {
     sort(A.begin(), A.end()); 
    sort(B.begin(), B.end(), greater<int>()); 

    for (int i = 0; i < A.size(); i++) 
        if (A[i] + B[i] < k) 
            return "NO"; 
  
    return "YES"; 
}
