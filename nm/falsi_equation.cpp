#include<bits/stdc++.h>
using namespace std;
#define float double

float equation(float x)
    {
        return (2-(5*x*x)-exp(x));
    }

int main()
    {
        float a=0,b=1,x;
        for(int i=0;i<=1000001;i++)
        {
            x=(a*equation(b)-b*equation(a))/(equation(b)-equation(a));

            if(equation(a)*equation(x)<0)
            {
                b=x;
            }
            else
                a=x;
        }

        cout<<"root of equation between 0 and 1 is ";
        cout<<setprecision(4)<<fixed<<x;

    }

