#include<bits/stdc++.h>
using namespace std;
#define float double
float equation(float x)
    {
        float sum=0;
        sum=(2-(5*x*x)-exp(x));
        return sum;
    }

float root(float l,float h)
    {
        if(abs(equation((l+h)/2))<0.00001)
            return (l+h)/2;

        if(equation((l+h)/2)>0.00000)
            return root((l+h)/2,h);
        else
            return root(l,(l+h)/2);
    }
int main()
    {
        cout<<"root between 0 and 1 is"<<setprecision(4)<<fixed<<root(0,1)<<endl;

    }
