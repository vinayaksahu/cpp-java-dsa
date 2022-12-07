public class SelectionSort {

    public static void main(String[] args) {
        
        int[] arr = {64, 25, 12, 22, 11};
        
        int n = arr.length;

        // Total number of round (n-1)
        for (int i = 0; i < n-1; i++) {

            //find minimum of the next array from (i+i)
            int min_idx = i;
            for (int j = i+1; j < n; j++) {
                if (arr[j] < arr[min_idx])
                    min_idx = j;                
            }
        //swap the found element with the ith element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp; 
        }

        //print the aray
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}