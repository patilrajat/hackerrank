/*
Given a string of lowercase letters in the range ascii[a-z], 
determine a character that can be removed to make the string a palindrome.

Sample Input
3        //number of input
aaab    // index 3 remove then it will become palindrome
baa     // remove index 0 it will become palindrome
aaa     // its already palindrome then return -1

Sample Output
 3
 0
-1

*/

int palindromeIndex(string s) 
{
      int start = 0, end = s.length()-1;      
        while(start<end)
        {
            if(s[start]!=s[end])
            {
                if((s[start+1]==s[end]) && (s[start+2] == s[end-1]))
                    return start;
                else
                    return end;
            }
            start++;
            end--;
        }
        return -1;
}
