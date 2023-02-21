/*
 *  Problem : Fixed Point Iteration Method.cpp
 *  Created by Samim Arefin
*/

#include <bits/stdc++.h>
#define f(x) cos(x)-3*x+1
#define g(x) (cos(x)+1)/3;
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    float x0,x1,tol=0.000001;
    std::cout<<"Enter Initial Guess:\n";
    std::cin>>x0;
    int count = 1;
    do{
        if(count>50){
        	break;
        }
        x1 = g(x0);
        std::cout<<"Iteration->"<<count<<" : "<<"x1 = "<<x1<<" "<<"f(x1) = "<<f(x1)<<'\n';
        count++;
        x0 = x1;
    }while(fabs(f(x1))>tol);
    std::cout<<"Root is = "<<x1<<'\n';
}
