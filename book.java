class a1
{
    public int test(int a, int b, int c)
    {
        int compute = a+b+c;
        return compute;
    }

    public double test (double a, double b, double c)
    {
        double compute = a+b+c;
        return compute;
    }
}
public class book{
    public static void main(String[] args) {
        a1 ob = new a1();
        int compute2 = ob.test(3,5,2);
        System.out.println(compute2);

        double compute3 = ob.test(5.0, 6.0, 1.0);
        System.out.println(compute3);
    }
}