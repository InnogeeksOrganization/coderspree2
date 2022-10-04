public class printz {

  public static void main(String[] args) {
    // Write your code here
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            System.out.print((i==1 || i==5)?"*":((j==6-i)?"*":" "));
        }
        System.out.println();
    }

  }
}