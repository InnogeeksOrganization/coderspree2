public class PrintZ {
  public static void main(String args[]){
    for(int i = 1; i <= 5; i++){
      System.out.print("*");
    }

    System.out.println();

    for(int i = 3; i >= 1; i--){
      for(int j = i; j >= 1; j--){
        System.out.print(" ");
      }
      System.out.println("*");
    }

    for(int i = 1; i <= 5; i++){
        System.out.print("*");
    }

  }
}
