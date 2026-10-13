import java.util.Scanner;

class Main {
    static boolean isEligibleToVote(int age) {
        return (age > 18);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter age: ");
        int age = sc.nextInt();

        if (isEligibleToVote(age)) {
            System.out.println("User is eligible to vote.");
        } else {
            System.out.println("User is NOT eligible to vote.");
        }
        sc.close();
    }
}
