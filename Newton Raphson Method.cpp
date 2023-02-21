/*
 *  Problem : Newton Raphson Method.cpp
 *  Created by Samim Arefin
*/

#include <bits/stdc++.h>
//#define f(x) 3x-cos(x)-1
//#define df(x) 3-sin(x)

double f(double x){
	return 3*x - cos(x) -1;
}

double df(double x){
	return 3-sin(x);
}

int main()
{
	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    float x0,xi,tol=0.000001;
    std::cout<<"Enter Initial Guess:\n";
    int count = 1;
    do{
    	xi = x0 - ((f(x0))/((df(x0))+0.0));
    	count++;
    	std::cout<<"Iteration->"<<count<<" : "<<"xi = "<<xi<<" "<<"f(xi) = "<<f(xi)<<'\n';
    	x0 = xi;
    }while(count<20&&(fabs(f(xi))>tol));
    std::cout<<"Root is: "<<xi<<'\n';

}
