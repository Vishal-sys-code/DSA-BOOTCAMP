import java.util.Scanner;
public class maximum {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Numbers: ");
        System.out.print("A: ");
        int num1 = sc.nextInt();
        System.out.print("B: ");
        int num2 = sc.nextInt();
        if(num1>num2){
            System.out.println("Maximum number is: " + num1);
        }
        else{
            System.out.println("Maximum number is: " + num2);
        }
        sc.close();
    }
}
