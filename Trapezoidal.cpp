/*
 *  Problem : Trapezoidal.cpp
 *  Created by Samim Arefin
*/

#include <bits/stdc++.h>
#define f(x) (1/(1+x*x))
int main()
{
	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    double lower,upper,integration,k,h;
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
    	k = lower + i*h;
    	integration += 2*f(k);
    }
    integration = integration*h/2;
    std::cout<<"Required value of integration is: "<< integration<<'\n';
}
