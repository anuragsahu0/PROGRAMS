class Main {
    static int add(int a, int b) {
        System.out.println("Executing add(" + a + ", " + b + ") -> returns " + (a + b));
        return a + b;
    }

    static int square(int x) {
        System.out.println("Executing square(" + x + ") -> returns " + (x * x));
        return x * x;
    }

    public static void main(String[] args) {
        System.out.println("Calling square(add(2, 3)):");
        int result = square(add(2, 3));
        System.out.println("Final Result: " + result);
    }
}
