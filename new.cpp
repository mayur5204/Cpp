
#include <iostream>
using namespace std;
Partition(int A,int l,int h){
    int pivot=A[l];
    int i=l,j=h;
    while(i<j){
        while(A[i]<=pivot){
            i++;
        }
    while(A[j]>pivot){
        j--;
    }
    if (i<j){
        swap(A[i],A[j]);
    }
    swap(A[l],A[j]);
    return j;
    }
}
QuickSort(int A[],int l,int h){
    if (l<h){
        int pivot=Partition(A,l,h);
    }
    QuickSort(A,l,pivot-1);
    QuickSort(A,pivot+1,h);
}
int main(){
    int A[]={2,4,1,5,3};
    QuickSort(A,0,4);
    for (int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
