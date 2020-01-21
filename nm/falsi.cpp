#include<bits/stdc++.h>
using namespace std;
#define float double

float equation(float x)
    {
        return x*x-8;
    }

int main()
    {
        float a=0,b=8,x;
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

        cout<<"root of 8 is ";
        cout<<setprecision(6)<<fixed<<x;

    }
