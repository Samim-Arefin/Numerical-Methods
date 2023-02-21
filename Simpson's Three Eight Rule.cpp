/*
 *  Problem : Simpson's Three Eight Rule.cpp
 *  Created by Samim Arefin
*/

#include <bits/stdc++.h>
#define f(x) (1/(1+x*x))
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

   double upper,lower,integration=0.0,h,k;
   int subInterval;

   std::cout<<"Enter Lower Limit:\n";
   std::cin>>lower;
   std::cout<<"Enter Upper Limit:\n";
   std::cin>>upper;
   std::cout<<"Enter subInterval:\n";
   std::cin>>subInterval;

   h = (upper-lower)/subInterval;

   integration = f(lower) + f(upper);

   for(int i=1;i<subInterval;i++){
   	 k = lower+i*h;
   	 if(i%3==0){
   	 	integration += 2*f(k);
   	 }else{
   	 	integration += 3*f(k);
   	 }
   }
   integration = integration*h*(3.0/8.0);
   std::cout<<std::fixed<<std::setprecision(6)<<"Required value of integration is: "<< integration<<'\n';
}
