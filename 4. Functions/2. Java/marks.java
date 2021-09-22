import java.util.Scanner;
public class marks {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int subjects = 0;
        double totalMarks =0 ,percentage;
        System.out.println("Enter Number of Subject");
        subjects = sc.nextInt();
        System.out.println("Enter Marks of " + subjects + " Subject");
        for(int i=0;i<subjects;i++){
            totalMarks+=sc.nextDouble();
        }
        System.out.println("Total Marks : " + totalMarks);
        percentage = (totalMarks / (subjects * 100)) * 100;
        switch ((int) percentage / 10) {
            case 9:
                System.out.println("Grade : O");
                break;
            case 8:
                System.out.println("Grade : A+");
                break;
            case 7:
                System.out.println("Grade : A");
                break;
            case 6:
                System.out.println("Grade : B");
                break;
            case 5:
                System.out.println("Grade : C");
                break;
            default:
                System.out.println("Grade : D");
                break;
            }
        sc.close();
    }
}
