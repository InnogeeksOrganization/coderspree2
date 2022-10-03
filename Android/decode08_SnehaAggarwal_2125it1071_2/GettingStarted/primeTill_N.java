import java.util.*;

public class Main{
    public static void main(String[] args) {
        
    Scanner scn = new Scanner(System.in);
    int low = scn.nextInt();
    int high =scn.nextInt();
  //  scn close();
    
    for(int i=low; i<=high; i++){
        int c=0;
        for(int d=2; d*d<=i; d++){
            if(i%d==0){
            c++;
            break;
        }
        }
        if(c==0)
        System.out.println(i);
    }
    }
}