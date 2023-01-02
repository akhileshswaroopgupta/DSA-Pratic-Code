#include<iostream>
using namespace std;
int binary_search(int A[], int n, int key) {
    int low = 0;
    int high = n-1;
    while (low <= high){
        int mid = low +(high-low)/2;
        if (A[mid] == key){
            return mid;
        }
        if ( key> A[mid] ) {
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return low;
}
int searchInsert(int A[], int n, int target) {
    if (n==0) return n;
    return binary_search(A, n, target);
}

int main()
{
    int a[]={1,3,5,6};
    cout<<("%d -> %d\n", 5, searchInsert(a, 4, 5));
    cout<<("%d -> %d\n", 2, searchInsert(a, 4, 2));
    cout<<("%d -> %d\n", 7, searchInsert(a, 4, 7));
    cout<<("%d -> %d\n", 0, searchInsert(a, 4, 0));
    return 0;
}