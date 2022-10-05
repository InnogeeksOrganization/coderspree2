
    import java.util.*;

    public class rotateOfficial {
    
      public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long temp = n;
        long k;
        k = sc.nextLong();
        int c =0;
        while(temp >0)
        {
            temp/=10;
            c++;
        }
        k= k%c;
        if(k<0)
        {
            k+=c;
        }
        long ans = (n%((long)Math.pow(10,k)))*((long)Math.pow(10,c-k)) + (n/((long)Math.pow(10,k)));
        temp = ans;
        int c2=0;
         while(temp >0)
        {
            temp/=10;
            c2++;
        }
        while(c-c2>0)
        {
            System.out.print("0");
            c--;
        }
        System.out.println(ans);
      }
    }
