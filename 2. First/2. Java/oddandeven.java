import java.util.Scanner;
public class oddandeven {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Numbers: ");
        System.out.print("A: ");
        int num = sc.nextInt();
        if(num%2 == 0){
            System.out.print("EVEN");
        }
        else{
            System.out.print("ODD");
        }
        sc.close();
    }
}
