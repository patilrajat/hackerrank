/*
we have to print all kaprekar numbers between given range p to q

what is kaprekar number?
-->if number is 5 then digits = 1 and square is 25
   digit = 1 , because of that seprate last 1 digit i.e. 5
   now remaining digit is 2, if we add 2+5 = 7,
   addition is not equal to number i.e. 5
   there for 5 is not kaprekar
-->if number is 45 then digits = 2 and square is 2025
   digit = 2 , because of that seprate last 2 digit i.e. 25
   now remaining digit is 20, if we add 20+25 = 45,
   addition is equal to number i.e. 45
   there for 45 is kaprekar number

*/
int digitCount( int number )   //this function counts number of digits
{
    int count = 0;
    while( number != 0 ){
        ++ count;
        number = number / 10;
    }
    return count;
}
int isKaprekar( int number )    //returns 1 if number is kaprekar else return 0
{
    int digit = digitCount( number );             //using long because of hackerrank test condition for 99999
    long square = (long )powl( number, 2 );      //pow returns power double, powl returns power in long double
    int denominator = pow( 10, digit );           //to seprate last 2 digit devide by 10^2, seprate last 3 digit divide by 10^3 
    int result = ( square / denominator ) + ( square % denominator );     //adding seprated string of digit
    if( number == result )
        return 1;
    return 0;
}
// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q)
{
    int found = 0;
    for( int number = p; number <= q; ++ number )
    {
        if( isKaprekar( number ) )
        {
            found = 1;
            printf("%d ", number);
        }
    }
    if( !found )
        printf("INVALID RANGE");   //if not found kaprekar number in given range
}
