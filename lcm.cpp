#include <iostream>
using namespace std; 
int gcd(int a , int b)
{
    return b==0 ? a : gcd(b, a%b);
}
int lcm(int a ,int b)
{
    int hcf = gcd(a,b);
    int res = (a*b)/ hcf  ;
    return res;
}
int main()
{
   cout<<lcm(2,4)<<endl;
   cout<<lcm(2,15)<<endl;
}