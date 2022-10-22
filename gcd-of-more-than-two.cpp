#include <iostream>
using namespace std ; 

int gcd (int a , int b )
{
    return b == 0 ? a : gcd(b , a%b)  ;
}
int gcdofarray (int arr[] , int size )

{
int ans = arr[0] ; 
for(int i = 1 ;  i <  size ; i++)
{
    ans = gcd(ans, arr[i]); 
}
}

int main(){
    int n ;  
    cin >> n  ; 

    int arr[n] ;  
    for(int i  = 0 ;  i < n ; i++ )  
    cin >> arr[i] ;  
  
  cout<<"gcd = " << gcdofarray(arr,n)<<endl;


}