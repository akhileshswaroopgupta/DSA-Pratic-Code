#include<bits/stdc++.h>
//bits/stdc++.h -> Isuse for hole library of C++
using namespace std;
void print(int array[], int n)
{
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
void selectionSort(int array[], int n)
{
    int i,j,min;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
            if (array[j] < array[min])
                min = j;
        swap(array[i],array[min]);
    }
}
int main(int argv, char* argc[])
{
    int array[] = {5,4,10,1,6,2};
    int i,j,n,temp;
    n = sizeof(array)/sizeof(int);
    cout<<"Unsorted Array :";
    cout<<array<<n;
    selectionSort(array,n);
    cout<<"Sorted Array :";
    cout<<array<<n;
    return(0);
}