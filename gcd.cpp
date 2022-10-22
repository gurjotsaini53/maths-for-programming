#include <iostream>
using namespace std ;\

int gcd(int a , int b)
{
    if (a==0)
       return b ; 

     if (b==0)
     return a;  
    if (a==b)
    return a ; 

    if (a>b)
    gcd(a-b,b);

    else
    gcd(b,b-a);

}

int gcd2(int a, int b )
{
    int result = min(a,b);
    while(result > 0 )
    {
        if (a % result == 0 && b % result ==0 )
        break ;

        result -- ;
    }
    return result ; 
}
int gcd3(int a ,  int b)

{
    return b==0 ? a : gcd3(b,a%b);

}
    int main(){
  cout<<gcd3(36,60)<<endl;
  cout<<gcd3(2,15)<<endl;
} 