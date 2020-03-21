/*
strings=['ab','ab','abc']
queries=['ab','abc','bc']
here ab=2 times
    abc=1 times
    bc =0 times
    therefor output should be
    2
    1
    0
*/

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    int count, result;
    int s_length = strings.size();
    int q_length = queries.size();
    vector<int> arr(q_length);
    cout<<"Length = "<<s_length;
    cout<<"\n Length = "<<q_length;
  for(int i = 0;i < q_length; i++)
  {
      count = 0;
      for(int j = 0;j < s_length; j++)
      {
          if(queries[i] == strings[j])
          {
              count++;
          }
      }
      arr[i] = count;
  }
 return arr;

}
