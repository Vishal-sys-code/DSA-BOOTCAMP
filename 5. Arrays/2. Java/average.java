import java.util.Scanner;

// import javax.print.event.PrintJobListener;
public class average {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double [] physics_marks = {23.5, 32.5, 40.0, 21.5, 39.9};
        double sum = 0;
        for(double i : physics_marks){
            sum+=i;
        }
        System.out.println("Average is: " + sum/physics_marks.length);
        sc.close();
    }
}
