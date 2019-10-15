/*
Julka Julka spoj
use big Integer to solve the equation
x = (N-k)/2;
*/

import java.math.BigInteger; 
import java.util.Scanner;

public class Main {
    static void compute(BigInteger n, BigInteger k)
    {
        BigInteger x, y;
        x = n.subtract(k);
        x = x.divide(BigInteger.valueOf(2));

        y = x.add(k);

        System.out.println(x);
        System.out.println(y);
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in); 
        BigInteger n, k, ans;

        int test = 1;
        while(test>0)
        {
            n = sc.nextBigInteger();
            k = sc.nextBigInteger();
            compute(n, k);
            test--;
        }
    }
}