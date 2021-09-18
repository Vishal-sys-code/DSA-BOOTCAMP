import java.util.Scanner;
public class perimeterofrhombus {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the side: ");
        int side = sc.nextInt();
        int perimeter = 4 * side;
        if(side<=0){
            System.out.println("Perimeter is negative");
        }
        else{
            System.out.println("Perimeter is: " + perimeter);
        }
        sc.close();
    }
}
