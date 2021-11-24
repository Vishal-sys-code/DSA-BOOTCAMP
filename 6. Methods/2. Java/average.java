import java.util.Scanner;
public class average {

    static int avgOfVar(int ...arr){
        int sum = 0;
        for(int i:arr){
            sum+=i;
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Average: " + (avgOfVar(1,2,3,4,5)/5));
        sc.close();
    }
}
