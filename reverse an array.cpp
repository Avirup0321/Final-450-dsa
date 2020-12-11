#include <iostream>
using namespace std;
int main()
{
    int a,i,n,arr[20];
    cout<<"enter number of array want to store ";
    cin>> n;
cout<<"enter the following numbers ";
    for(i=0;i<n;i++)
    {
cin>> arr[i];
    }
    cout<<"the numbers are ";
      for(i=0;i<n;i++){
    cout << arr[i];
      }
cout<<" the reverse is" ;
for (i=n-1;i>=0;i--)
{
    cout <<arr[i];
}
}
