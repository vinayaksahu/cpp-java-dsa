public class Prime {
   public static void main(String[] args)
   {
      int n = 47;
      boolean isprime = true;
      int i = 2;
      while(i <= n/2)
      {
         if(n % i == 0)
         {
            isprime = false;
            break;
         }
         i++;
      }
      
      if(isprime)
         System.out.println("Prime Number");
      else
         System.out.println("Not a Prime Number.");
   }
}