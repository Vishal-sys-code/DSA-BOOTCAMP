import java.util.Scanner;
public class multiply {
    static int product(int a, int b){
        // int ans = a*b;
        return a*b;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number A : ");
        int a = sc.nextInt();
        System.out.print("Enter the Number B : ");
        int b = sc.nextInt();
        int ans = product(a, b);
        System.out.print("Result is : " + ans);
        sc.close();
    }
}
