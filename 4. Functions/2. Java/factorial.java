import java.util.Scanner;
public class factorial {

    static int factorial_function (int n){
        if(n==0) return 1;
        else return(n*factorial_function(n-1));
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Numbers : ");
        int num = sc.nextInt();
        int fact = factorial_function(num);
        System.out.print("Factorial is: " + fact);
        sc.close();
    }
}
