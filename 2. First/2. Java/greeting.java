import java.util.Scanner;
public class greeting {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Name: ");
        String name = sc.nextLine();
        System.out.println("Thank you!!! " + name + " for writing this code");
        sc.close();
    }
}
