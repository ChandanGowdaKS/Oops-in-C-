#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

void selectionSort(int a[], int n){
    for (int i = 0; i< n-1; i++){
        int min = i;
        for (int j = i+1; j<n; j++){
            
            if (a[min] > a[j]){
                min = j;
            }

        // int temp;
        // temp = a[i];
        // a[i] = a[min];
        // a[min] = temp;
            swap(a[i],a[min]);
        }
    }
}



int main(){
    int upperlimit = 500;
    int lowerlimit = 100;
    int n;
    cout<< "enter the number of elements :"<< endl;
    cin>> n;
    srand(time(0));
    int *arr = new int[n];
    for(int i =0; i<n; i++){
        arr[i] =(rand()% (upperlimit - lowerlimit));
        cout<< arr[i]<<endl;
    }
    clock_t start = clock();
    selectionSort(arr,n);
    clock_t stop = clock();
    for(int i =0; i<n; i++){
        //arr[i] =(rand());
        cout<< arr[i]<<endl;
    }
    double dif = (stop - start)/ (double)CLOCKS_PER_SEC;

    cout<< "Time taken to sort "<<n<<"elements : "<<dif<<endl;
}