/*
 *  Problem : Euler Method.cpp
 *  Created by Samim Arefin
*/

#include <bits/stdc++.h>
#define f(x,y) x+y;
using namespace std;

int main(){

	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
	double x0,y0,xn,yn,h,slope;
	int step;
    std::cout<<"Initial Condition:\n";
    std::cout<<"x0:\n";
    std::cin>>x0;
    std::cout<<"y0:\n";
    std::cin>>y0;
    std::cout<<"Enter Calculation Point:\n";
    std::cin>>xn;
    std::cout<<"Enter number of step:\n";
    std::cin>>step;

    h = (xn-x0)/step;

    for(int i=0;i<step;i++){
    	slope = f(x0,y0);
    	yn = y0 + h*slope;
    	x0 +=h;
    	y0 = yn;
    }
    std::cout<<fixed<<setprecision(4)<<"Value of y at x = "<<xn<<" is "<<yn<<'\n';
}