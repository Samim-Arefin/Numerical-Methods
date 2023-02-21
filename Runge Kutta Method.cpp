/*
 *  Problem : Runge Kutta Method.cpp
 *  Created by Samim Arefin
*/

#include <bits/stdc++.h>
using namespace std;

double f(double t,double y){
	return (-20*y+7*exp(-0.5*t));
}
int main()
{
	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    double x0,y0,xn,h,k1,k2;
    std::cout<<"Initial Condition:\n";
    std::cout<<"x0:\n";
    std::cin>>x0;
    std::cout<<"y0:\n";
    std::cin>>y0;
    std::cout<<"Enter Calculation Point:\n";
    std::cin>>xn;
    std::cout<<"h:\n";
    std::cin>>h;

    for(int i=1;x0<xn;i++){
    	k1 = h*f(x0,y0);
    	x0 = x0+i*h;
    	k2 = h*f(x0,y0+k1);
    	y0 = y0 + 0.5*(k1+k2);
    	std::cout<<"x0 y0 k1 k2 = "<<fixed<<setprecision(4)<<x0<<" "<<y0<<" "<<k1<<" "<<k2<<'\n';
    }
    std::cout<<"Value of y at x = "<<xn<<" is "<<y0<<'\n';
}
