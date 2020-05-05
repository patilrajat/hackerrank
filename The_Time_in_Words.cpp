/*
6:01 one minute past six
6:00 six o'clock
6:10 ten minutes past six
6:15 quarter past six
6:30 half past six
6:45 quarter to seven
6:47 thirteen minutes to seven
*/
#include <iostream>
using namespace std;
void timeInWords(int h, int m) {
string s[30] = {"",        "one",     "two",       "three",    "four",
                "five",    "six",     "seven",     "eight",    "nine",
                "ten",     "eleven",  "twelve",    "thirteen", "fourteen",
                "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
                "twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
                if(m==0)
                {
                    cout<<s[h]<<" "<<"o' "<<"clock"<<endl;
                }
               if(m==1)  //This is only for one is SINGULAR not PLURAL
               {
                  cout<<"one minute past " <<s[h]<<endl;
               }
               if((m>=2 && m<=14) || (m>=16 && m<=29) )
               {
                   cout<<s[m]<<" minutes past "<<s[h]<<endl;
               }
               if(m==15)
               {
                   cout<<"quarter past "<<s[h]<<endl;
               }
               if(m==30)
               {
                   cout<<"half past "<<s[h]<<endl;
               }
               if((m>=31 && m<=44)|| (m>=46 && m<=59))
               {
                   cout<<s[(60-m)]<<" minutes to "<<s[h+1]<<endl;
               }
               if(m==45)
               {
                   cout<<"quarter to "<<s[h+1]<<endl;
               }

}

int main()
{
    int h;
    cin >> h;
    int m;
    cin >> m;
    timeInWords(h, m);
 return 0;
}
