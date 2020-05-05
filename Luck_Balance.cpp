/*
**Question -- number of contest = 6 ,
              Here k=3;  k is you should not lose more than k contest whose T[i]=1 
Contest		L[i]	T[i]       //L[i] --if win it should reduce from total 
1		       5	    1               --if lose it should add to total 
2	         2     	1        //T[i] --if 1 then it is important 
3		       1     	1               --if 0 then it is not important
4		       8     	1
5		       10     0
6		       5     	0

Explaination--- we can lose all T[i]=0 and it will added to total   TOTAL= 10 + 5
                can not lose more than 3 contest, so we should lose 3 important contest 
                with max L[i] ,because it will added to TOTAL. i.e.  TOTAL= 10 + 5 + 8 + 5 + 2
                remaining one will win there for substract from TOTAL
                TOTAL= 10 + 5 + 8 + 5 + 2 - 1
*/


int luckBalance(int k, vector<vector<int>> contests) {
int count=0;
int lf=0;
int i,j;
unsigned s=contests.size();
vector<int> v;

for(i=0;i<s;i++)
{
           if(contests[i][1] == 0)
                  lf=lf+contests[i][0];
          
          else
          {
            count++;
            v.push_back(contests[i][0]);
            lf=lf+contests[i][0];
          }  
 }      
        if(k<count)
        {
         sort(v.begin(),v.end());
         int n=count-k;
        for( j = 0; j < n; j++)
            {
               lf =lf- 2 * v[j];
            }
        }
return lf;

}
