#include <stdio.h>
#include<iostream>
using namespace std;
void printSinWave(int wave_height, int wave_length)
{
    int is = 1, os = 2;
    for (int i = 1; i <= wave_height; i++) {
        for (int j = 1; j <= wave_length; j++) {
            for (int k = 1; k <= os; k++) {
                printf(" ");
            }
            printf("*");
            for (int k = 1; k <= is; k++)
                printf(" ");
            printf("*");

            for (int k = 1; k <= os; k++)
                printf(" ");
            printf(" ");
        }
        os = (i + 1 != wave_height);
        is = (i + 1 != wave_height) ? 3 : 5;
        printf("\n");
    }
}
int main()
{
    int n;
    cout<<"Enter the number of waves: ";
    cin>>n;
    int wave_height = n, wave_length = 2*n;
    cout<<endl;
    cout<<"Sine Wave with "<<2*n<<" curves: \n\n";
    printSinWave(wave_height, wave_length);
    return 0;
}
