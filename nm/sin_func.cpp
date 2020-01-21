#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of waves: ";
    cin>>n;
    int x=2*n*n;
    char ar[n][x];
    int t=1;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<x;j++)
            ar[i][j]=' ';
    }
    int k=n-1;
    while(t<=n){
        for(i=0;i<n;i++){
            ar[i][k-i]='*';
            if(i==0){
                ar[i][k+1]='*';
            }
            if(i>0)
                ar[i][k+1+i]='*';
        }
        k+=(2*n);
        t++;
    }
    cout<<endl;
    cout<<"Sine Wave with "<<n<<" curves: \n";
    for(i=0;i<n;i++){
        for(j=0;j<x;j++)
            cout<<ar[i][j];
        cout<<"\n";
    }
    return 0;
}
