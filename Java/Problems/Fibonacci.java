public class Fibonacci {
    
    public static void main(String[] args) {
        
        int t1 = 0, t2 = 1, nextTerm = 0, count = 10;
        System.out.println(nextTerm);
        while (nextTerm <= count)
        {
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
            System.out.println(nextTerm);
        }
        
    }
}
