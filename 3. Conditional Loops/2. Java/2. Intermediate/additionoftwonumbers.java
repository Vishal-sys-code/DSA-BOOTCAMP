import java.util.Scanner;
public class additionoftwonumbers {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a,b;
        System.out.print("A: ");
        a = sc.nextInt();
        System.out.print("B: ");
        b = sc.nextInt();
        int sum = 0;
        sum = a+b;
        if(a<=0 && b<=0){
            System.out.println("Addition can't be done");
        }
        else{
            System.out.println("Result is : " + sum);
        }
        sc.close();
    }
}
