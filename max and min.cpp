#include <iostream>
using namespace std;

struct Pair
{
int max;
int min;
};
struct Pair getminmax (int arr1[] ,int n)
{
    struct Pair minmax;
    int i;

    if( n==1)
    {
    minmax.max=arr1[0];
    minmax.min=arr1[0];
    return minmax;
    }

    if (arr1[0]>arr1[1])
    {
        minmax.max=arr1[0];
        minmax.min=arr1[1];
    }
    else 
    {
        minmax.max=arr1[1];
        minmax.min=arr1[0];
    }

    for (i=2;i<n;i++)
    {
        if (arr1[i]>minmax.max)
        minmax.max=arr1[i];

  else if (arr1[i]<minmax.min)
  minmax.min=arr1[i];


    }
    return minmax;
};
    int main()
    {
        int arr1[]={1000,200,300,400,50,20};

        int arr_size =6;
        struct Pair minmax =getminmax (arr1,arr_size);
        cout <<" min element is "<< minmax.min<< endl;
        cout <<" maximum elment is "<<minmax.max<< endl;
        return 0;
        }
        

    
