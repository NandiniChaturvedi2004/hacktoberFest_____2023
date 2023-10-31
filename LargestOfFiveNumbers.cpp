#include <iostream>
using namespace std;
int main() {
   int    num, i , N=5 ;
   long largest = -100000000000;

   for(i=1;i<=N;i++) 
   {
       cin>>num;
       if(num>largest)
       {
           largest=num;
       }
   }
       cout<<largest<<endl;
       return 0;
}
