import java.util.Scanner;
public class factorial{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int number = sc.nextInt();
        int factorial=1;
        if(number == 0 || number == 1){
            System.out.println("Factorial is: " + "1");
        }
        for(int i=1;i<=number;i++){
            factorial*=i;
        }
        System.out.println("Factorial is: " + factorial);
        sc.close();
    }
}