import java.util.Scanner;
// import java.math.*;
public class power {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        double a,b;
        System.out.print("A: ");
        a = sc.nextDouble();
        System.out.print("B: ");
        b = sc.nextDouble();
        double power = Math.pow(a,b);
        if(b<=0){
            System.out.print("Power cannot be calculated");
        }
        else{
            System.out.print("Power is: " + power);
        }
        sc.close();
    }
}
