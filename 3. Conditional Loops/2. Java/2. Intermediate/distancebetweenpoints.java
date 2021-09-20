import java.util.Scanner;
public class distancebetweenpoints {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x1, x2, y1, y2;
        System.out.print("x1: ");
        x1 = sc.nextInt();
        System.out.print("x2: ");
        x2 = sc.nextInt();
        System.out.print("y1: ");
        y1 = sc.nextInt();
        System.out.print("y2: ");
        y2 = sc.nextInt();
        int A = (x2 - x1);
	    int B = (y2 - y1);
	    int first_part = A * A;
	    int second_part = B * B;
        double distance = Math.sqrt(first_part + second_part);
        System.out.println("Distance between two points are: " + distance);
        sc.close();
    }
}
