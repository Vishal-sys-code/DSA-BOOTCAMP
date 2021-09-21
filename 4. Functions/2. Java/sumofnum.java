import java.util.Scanner;
public class sumofnum {
    static void add(int a, int b){
        int sum = 0;
        if(a > 0 && b > 0){
            sum = a+b;
            System.out.print(" SUM IS: " + sum);
        }
        else{

            System.out.print(" CHECK THE NUMBER YOU HAVE ENTERED ");
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number A : ");
        int a = sc.nextInt();
        System.out.print("Enter the Number B : ");
        int b = sc.nextInt();
        add(a, b);
        sc.close();
    }
}
