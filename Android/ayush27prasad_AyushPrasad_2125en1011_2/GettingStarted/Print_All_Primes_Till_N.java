import java.util.*;

public class Main{
     
        public static boolean PrimeCheck(int x){
        for(int i=2;i*i<=x;i++){
            if(x%i ==0)
                return false;
        }
        return true;
        
    }
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n1=sc.nextInt();
        int n2=sc.nextInt();
        for(int i=n1;i<=n2;i++){
            if(PrimeCheck(i))
                System.out.println(i);
        }
        
    }
}
