import java.util.Scanner;
public class operator {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("A: ");
        int a = sc.nextInt();

        System.out.print("B: ");
        int b = sc.nextInt();

        System.out.print("Operator: ");
        char operator = sc.next().charAt(0);

        int ans = 0;
        if(operator=='+'){
            ans = a+b;
            System.out.print("Result: " + ans);
        }

        if(operator == '-'){
            ans = a-b;
            System.out.print("Result: " + ans);
        }

        if(operator=='*'){
            ans = a*b;
            System.out.print("Result: " + ans);
        }

        if(operator=='/'){
            ans = a/b;
            System.out.print("Result: " + ans);
        }

        sc.close();
    }
}
