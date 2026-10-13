class Main {
    static int fun(int x) {
        System.out.println("Entering fun(" + x + ")");
        if (x <= 1) {
            System.out.println("Base case reached: fun(" + x + ") = 1");
            return 1;
        }
        int result = x * fun(x - 1);
        System.out.println("Returning from fun(" + x + ") = " + result);
        return result;
    }

    public static void main(String[] args) {
        System.out.println("Evaluating fun(4):");
        int ans = fun(4);
        System.out.println("Final Output: " + ans);
    }
}
