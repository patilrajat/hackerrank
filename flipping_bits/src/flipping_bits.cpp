#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned int flippingBits(unsigned int a)
{
    for(int i = 0;i < 32;i++){
        unsigned int k = (unsigned int)1 << i;
        if(a & k)
            a = a & ~k;
        else
            a = ~(a ^ ~k);
    }
    return a;
}

unsigned int flippingBits1(long n)
{
	long int a,b;
	    a=1;
	    b=(a<<32)-1;
	    n = b - n;
	    return n;
}
long flippingBits2(long n) {
unsigned long result=(unsigned)~n;
    return result;

}

int main() {
    int n;
    cout<<"enter number of input :";
    cin >> n;
    while(n--)
    {
           unsigned int a;
           cin >> a;
           cout << flippingBits1(a) << endl;
    }
    return 0;
}
