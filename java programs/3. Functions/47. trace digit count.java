class Main {
    static int fun(int n) {
        int count = 0;
        System.out.println("Tracing fun(" + n + "):");
        while (n > 0) {
            count++;
            System.out.println("  step " + count + ": digit = " + (n % 10) + ", remaining n = " + (n / 10));
            n /= 10;
        }
        return count;
    }

    public static void main(String[] args) {
        int result = fun(12345);
        System.out.println("Final Digit Count of 12345: " + result);
    }
}
