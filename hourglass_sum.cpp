/*
6*6 matrix 
find sum of hourglass
*/

int hourglassSum(vector<vector<int>> arr) {
 int sum,i,j;
   int max_sum;
   for(i=0;i<4;++i)
   {
       for(j=0;j<4;++j)
       {
           sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
           if(i==0 && j==0)
           max_sum=sum;
           if(sum > max_sum)
           max_sum=sum;
       }
   }
   return max_sum;

}
