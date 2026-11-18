#include <iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r);
{
    int n1 = ;
}

void mergesort(int arr[],int l, int r)
{
    if(l < r)
    {
        int mid = (l+r)/2;
        mergesort(arr[],l,mid);
        mergesort(arr[],mid+1,r);
        merge(arr[],l,mid,r);
    }
}

int main()
{

}