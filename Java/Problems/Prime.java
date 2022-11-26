import javax.sql.rowset.spi.SyncResolver;

public class Prime {
    
    public static void main(String[] args) {

        int n = 47;
        boolean isprime = true;
    
        int i = 2;
        while (i <= n/2) 
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
            
            i++;
        }
        if (is_prime)
        {
            System.out.println("Prime"); 
        }
        else
        { System.out.println("Not Prime"); }
            
}

