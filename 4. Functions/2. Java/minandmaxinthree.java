import java.util.Scanner; 
public class minandmaxinthree{

    static void compare_max(int a, int b, int c){
        if(a>b && a>c){
            System.out.println("The maximum number is :" + a);
        }
        else if(b>a && b>c){
            System.out.println("The maximum number is :" + b);
        }
        else{
            System.out.println("The maximum number is :" + c);
        }
    }

    static void compare_min(int a, int b, int c){
        if(a<b && a<c){
            System.out.println("The minimum number is :" + a);
        }
        else if(b<a && b<c){
            System.out.println("The minimum number is :" + b);
        }
        else{
            System.out.println("The minimum number is :" + c);
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Numbers :");
        System.out.print("A : ");
        int a = sc.nextInt();
        System.out.print("B : ");
        int b = sc.nextInt();
        System.out.print("C : ");
        int c = sc.nextInt();
        compare_max(a, b, c);
        compare_min(a, b, c);
        sc.close();
    }
}