#include<iostream>
using namespace std;
int main()
{    int n;
    int arr[n], i, num, index;
    cout<<"Enter Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter a Number to Search: "<<endl;
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"Found at Index No."<<index;
    cout<<endl;
    return 0;
}