import java.util.Scanner;
public class perimeterofparalleogram {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the side1: ");
        int side1 = sc.nextInt();
        System.out.print("Enter the side2: ");
        int side2 = sc.nextInt();
        int perimeter = 2 * (side1+side2);
        if(side1<=0 || side2 <=0){
            System.out.println("Perimeter is negative");
        }
        else{
            System.out.println("Perimeter is: " + perimeter);
        }
        sc.close();
    }
}
