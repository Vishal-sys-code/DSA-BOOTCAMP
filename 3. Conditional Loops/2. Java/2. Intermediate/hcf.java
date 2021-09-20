import java.util.Scanner;
public class hcf {

    static int gcd(int a, int b){
        if(b == 0) return a;
        return (gcd(b, a % b));
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a,b;
        System.out.print("A: ");
        a = sc.nextInt();
        System.out.print("B: ");
        b = sc.nextInt();
        int hcf = gcd(a,b);
        System.out.print("HCF: " + hcf);
        sc.close();
    }
}
