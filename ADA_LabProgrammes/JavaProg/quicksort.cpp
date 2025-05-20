#include<iostream>
#include<time.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for (int j = low; j< high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);

        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
 void quicksort(int arr[], int low , int high){
    if(low < high){
        int pi = partition(arr,low,high);
        cout<< "Pivot elemenet : "<< pi<< endl;
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
 }

}
int main(){
    int n;
    cout<< "Enter the num of elements";
    cin>> n;
    int *a = new int[n];
    srand(time(0));
    for(int i =0; i< n; i++){
        a[i] = rand();
        cout<< a[i]<< endl;
    }
    clock_t start = clock();
    quicksort(a,0,n-1);
    clock_t stop = clock();

    cout<< "after sorting"<< endl;
    for (int i = 0; i<n; i++){
        cout<<a[i]<< endl;
    }
    double diff = (stop- start)/(double) CLOCKS_PER_SEC;
    cout<< "time taken :"<< diff<<endl;
}