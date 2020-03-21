/*
1st array  [1,2,3,4] rotate by 1
output
[2,3,4,1]
*/


vector<int> rotLeft(vector<int> a, int d) {
int len=a.size();
int temp;
cout<<len;
for (int i=0;i<d;i++)
{
    temp=a[0];
    for (int j=0;j<len;j++)
    {
        a[j]=a[j+1];
    }
    a[len-1]=temp;
}
return a;

}
