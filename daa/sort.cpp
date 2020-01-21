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
        print(v);
        int x,i,j,step=0;
        for(i=1;i<v.size();i++)
           {
               x = v[i];step++;
               for(j=i-1;j>=0;j--)
                {
                    step++;
                    if(v[j]>x)
                        {v[j+1]=v[j]; step++;}
                    else
                        break;
                }
                v[j+1]=x; step++;
                print(v);
           }
        cout<<"Total steps taken for sorting = "<<step<<endl;
        cout<<"Size of array(n) = "<<v.size()<<endl;
        cout<<"n^2(n square) = "<<pow(v.size(),2)<<endl<<endl;
    }

void selectionsort(vector<int> v)
    {
        print(v);
        int n=v.size();
        int step=0,x,i,j;
        for(i=0;i<n-1;i++)
            {
                x=i; step++;
                for(j=i+1;j<n;j++)
                {
                    step++;
                    if(v[j]<v[x])
                    {
                        x=j; step++;
                    }
                }
                swap(v[i],v[x]); step++;
                print(v);
            }
        cout<<"Total steps taken for sorting = "<<step<<endl;
        cout<<"Size of array(n) = "<<v.size()<<endl;
        cout<<"n^2(n square) = "<<pow(v.size(),2)<<endl<<endl;
    }

void bubblesort(vector<int> v)
    {
        print(v);
        int n=v.size();
        int step=0,x,i,j;

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
                {
                    step++;
                    if(v[j]>v[j+1])
                    {
                        swap(v[j],v[j+1]); step++;
                        print(v);
                    }
                }

        }
        cout<<"Total steps taken for sorting = "<<step<<endl;
        cout<<"Size of array(n) = "<<v.size()<<endl;
        cout<<"n^2(n square) = "<<pow(v.size(),2)<<endl<<endl;

    }

int main()
    {
        int n,ch,x;
        cout<<"Enter the no. of elements to be inserted in array"<<endl;
        cin>>n;
        vector<int> v;
        cout<<"Enter the elements"<<endl;
        for(int i=0;i<n;i++)
            {cin>>x;v.push_back(x);}
        while(1){
        cout<<" Select the sorting to perform \n 1: Insertion Sort\n 2: Selection Sort\n 3: Bubble Sort\n 4: Print Array\n 5: Enter new array\n 6: Exit\n";
        cin>>ch;
        switch(ch)
            {
                case 1: insertionsort(v); break;
                case 2: selectionsort(v); break;
                case 3: bubblesort(v); break;
                case 4: print(v); break;
                case 5: {
                            cout<<"Enter the no. of elements to be inserted in array"<<endl;
                            cin>>n;
                            vector<int> a(n);
                            cout<<"Enter the elements"<<endl;
                            for(int i=0;i<n;i++)
                                cin>>a[i];

                            v=a;
                             break;
                        }
                case 6: exit(0); break;
                default : exit(0);
            }

        }

        return 0;
    }
