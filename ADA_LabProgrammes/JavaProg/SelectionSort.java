

public class SelectionSort {
    public static void main(String[] args) {
        int arr[] = {64, 25, 12, 22, 11};
        int min = 0;
        int temp = 0,i;
        for ( i = 0; i<arr.length-1; i++){
            min = i;
            for (int j = i+1; j<arr.length; j++){
                    if(arr[min]> arr[j]){
                        min = j;
                    }
            }
        

        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for (i =0; i< arr.length; i++){
        System.out.println(arr[i]);   
    }
}
    
}
