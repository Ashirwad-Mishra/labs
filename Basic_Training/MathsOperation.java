public class MathsOperation{
    public static int addNumbers(int n, int m) {
        return n + m;
    }

    public static int subNumbers(int n, int m) {
        return n - m;
    }

    public static int mulNumbers(int n, int m) {
        return n * m;
    }

    public static int divNumbers(int n, int m) {
        return n / m;
    }

    public static int remainder(int n, int m) {
        return n % m;
    }
}

class InnerMathsOperation {
    public static void main(String[] args) {
        System.out.println("The product of 12 and 13 is " + MathsOperation.mulNumbers(12, 13));
    }
}
