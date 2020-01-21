#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v)
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl<<endl;
    }

void insertionsort(vector<int> v)
    {
        //print(v);
        int x,i,j,comp=0,swaps=0;
        for(i=1;i<v.size();i++)
           {
               x = v[i]; //swaps++;
               for(j=i-1;j>=0;j--)
                {
                    comp++;
                    if(v[j]>x)
                        {v[j+1]=v[j];swaps++;}
                    else
                        break;
                }
                v[j+1]=x;
                swaps++;
               // print(v);
           }
        cout<<"total comparisons for insertion sort = "<<comp<<endl;
        cout<<"total swaps for insertion sort = "<<swaps<<endl;
        cout<<"total steps for insertion sort = "<<comp+swaps<<endl<<endl;
    }

void selectionsort(vector<int> v)
    {
        //print(v);
        int n=v.size();
        int comp=0,swaps=0,x,i,j;
        for(i=0;i<n-1;i++)
            {
                x=i; //swaps++;
                for(j=i+1;j<n;j++)
                {
                    comp++;
                    if(v[j]<v[x])
                    {
                        x=j; //swaps++;
                    }
                }
                swap(v[i],v[x]); swaps++;
                //print(v);
            }
        cout<<"total comparisons for selection sort = "<<comp<<endl;
        cout<<"total swaps for selection sort = "<<swaps<<endl;
        cout<<"total steps for selection sort = "<<comp+swaps<<endl<<endl;
    }

void bubblesort(vector<int> v)
    {
        //print(v);
        int n=v.size();
        int comp=0,swaps=0,x,i,j;

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
                {
                    comp++;
                    if(v[j]>v[j+1])
                    {
                        swap(v[j],v[j+1]); swaps++;
                        //print(v);
                    }
                }

        }
        cout<<"total comparisons for bubble sort = "<<comp<<endl;
        cout<<"total swaps for bubble sort = "<<swaps<<endl;
        cout<<"total steps for bubble sort = "<<comp+swaps<<endl<<endl;

    }

int main()
    {
        vector<int> a(500);
        vector<int> b(500);
        vector<int> c(500);
        vector<int> d;
        set<int> s;
        int x,p;
        for(int i=1;i<501;i++)
            a[i-1]=i;
        for(int i=500;i>0;i--)
            b[500-i]=i;

        srand(time(0));
        for(int i=1;i<501;i++)
        {
            x=rand();
            c[i-1]=x;
        }

        srand(time(0));
        while(s.size()<501)
        {
            x=rand();
            p=s.size();
            s.insert(x);
            if(s.size()!=p)
                d.push_back(x);
        }

        print(a);
        print(b);
        print(c);
        print(d);
        cout<<"Analysis for 500 elements"<<endl;
        cout<<" Analysis for ascending array"<<endl<<endl;
        insertionsort(a);
        selectionsort(a);
        bubblesort(a);
        cout<<endl;

        cout<<" Analysis for descending array"<<endl<<endl;
        insertionsort(b);
        selectionsort(b);
        bubblesort(b);
        cout<<endl;

        cout<<" Analysis for random repeated array"<<endl<<endl;
        insertionsort(c);
        selectionsort(c);
        bubblesort(c);
        cout<<endl;

        cout<<" Analysis for random unique array"<<endl<<endl;
        insertionsort(d);
        selectionsort(d);
        bubblesort(d);



        return 0;
    }

