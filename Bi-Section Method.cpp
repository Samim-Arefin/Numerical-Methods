/*
 *  Problem : Bi-Section Method.cpp
 *  Created by Samim Arefin
*/

#include <bits/stdc++.h>
#define f(x) cos(x) - x * exp(x)
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    float a,b,c,tol=0.00001;
    start:
    std::cout<<"Enter Initial Guess:\n";
    std::cin>>a>>b;
    if(f(a)*f(b)>0.0){
    	std::cout<<"Incorrect Initial Guesses.\n";
    	goto start;
    }else{
    	int count = 0;
    	do{
    		if(count==50){
    			std::cout<<"limit 50 occur. Increase limit or tolerance.\n";
                break;
    		}
    		count++;
    		c = (a+b)/2.0;
    		if(f(c)==0){
    			std::cout<<"Root is found "<<c<<" with tolerance "<<f(c)<<'\n';
    		}else if((f(a))*(f(c))>0.0){
    			a = c;
    		}else{
    			b = c;
    		}
    		std::cout<<"Step:"<<count<<" Root is "<<c<<" with tolerance "<<f(c)<<'\n';
    	}while(fabs(f(c))>tol);

    	std::cout<<"Root is "<<c<<" with tolerance "<<f(c)<<'\n';
    }
}
