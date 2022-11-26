public class LargestEleArray {
    
    public static void main(String[] args) {
        
        int i, n;
        float[] arr = {4, 5, 1 ,-5, 4, 5};

        // Loop to store largest number to arr[0]
        for(i = 1;i < arr.length; ++i) {

            // Change < to > if you want to find the smallest element
            if(arr[0] < arr[i])
            arr[0] = arr[i];
        }

        System.err.println("Largest element = " + arr[0]);
    }
}
