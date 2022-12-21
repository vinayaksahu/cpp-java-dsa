public class ArrayReverse {
    
    public static void main(String[] args) {
        
        int[] arr = {7, 4, 8, 5, 6, 3, 2, 1, 9};
        int n = 9;
        int temp = 0;
        int s = 0, e = n-1;

        while (s <= e) {
            temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            s++;
            e--;
        }

        
    }
}
