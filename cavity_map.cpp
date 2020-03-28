/*
Sample Input
4
1112
1912
1892
1234

Sample Output
1112
1X12              if left,right,upper,lower elements are less then replace with X(this is not for element on edge)
18X2
1234
Explanation
The two cells with the depth of 9 are not on the border and are surrounded on all sides by shallower cells. 
Their values have been replaced by X.
*/

#include <bits/stdc++.h>
using namespace std;
 int main(){
    int n;
    char input[101][101];
    cin >> n;
    for(int i = 0; i < n; i++){
 for(int j = 0; j < n; j++){
    cin >> input[i][j];
 }
    }
    for(int i = 1; i < n-1; i++){
 for(int j = 1; j < n-1; j++){
     if(input[i][j] > input[i-1][j] && input[i][j] > input[i][j-1] && 
     input[i][j] > input[i][j+1] && input[i][j] > input[i+1][j]){
  input[i][j] = 'X';
     }
 }
    }
    for(int i = 0; i < n; i++){
 for(int j = 0; j < n; j++)cout << input[i][j];
 cout << endl;
    }
    return 0;
}
