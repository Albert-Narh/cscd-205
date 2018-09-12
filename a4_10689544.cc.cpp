#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    if((a>=b)&&((a%b)==0))
        return(b);
    else
        gcd(b,(a%b));
}
int main()
{
    int a,b,answer;
    cout<<"input the first number:";
    cin>>a;
    cout<<"input second number:";
    cin>>b;
    answer=gcd(a,b);
    cout<<"the greatest common divisor of "<<a<<" and "<<b<<" is "<<answer<<"";
    return 0;
}
