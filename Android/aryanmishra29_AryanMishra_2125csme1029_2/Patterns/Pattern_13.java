import java.util.*;
public class Pattern_13{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        for(int i=0;i<n;i++){
            int x=1;
            for(int j=0;j<=i;j++){
                System.out.print(x+"\t");
                x=(x*(i-j))/(j+1);
            }
            System.out.println();
        }
    }
}