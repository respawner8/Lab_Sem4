#include<bits/stdc++.h>
#define float double
#define inti long long int
using namespace std;

float bisection(float n,float l,float h)
    {
        if(abs((pow((l+h)/2,2)-n))<=0.0000001)
            return (l+h)/2;

        else if(pow((l+h)/2,2)>n)
            return bisection(n,l,(l+h)/2);
        else
            return bisection(n,(l+h)/2,h);

    }

int main()
    {
        float n;
        cout<<"Enter a number"<<endl;
        cin>>n;
        float x=bisection(n,0,n);
        cout<<"root of the number : "<<n<<" = ";
        cout<<setprecision(6)<<fixed<<x;
        return 0;
    }
