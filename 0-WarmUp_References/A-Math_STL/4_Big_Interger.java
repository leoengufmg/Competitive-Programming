/*
using java there is Big Interger Class
1 modular arithmetic
2 base conversion
3 gcd calculation
4 power calculation
5 prime generation
6 bit-masking, bitwise operations
7 other miscellaneous
*/

import java.math.BigInteger; 
import java.util.Scanner;

public class Main {
    static void playWithInt()
    {
        Scanner sc = new Scanner(System.in); 
        int s1 = sc.nextInt();
        System.out.println(s1*s1);

        BigInteger one = new BigInteger("1"); // create BigInterger object whose value is 1
        BigInteger two = new BigInteger("12345678987654321");
        System.out.println(one);
        System.out.println(two);
        System.out.println(two.add(one));

        // read a string as a big Interger
        String s2 = sc.next();
        BigInteger three = new BigInteger(s2, 10);
        // Read as a binary number:b2 1001 is b10 9 BigInteger three = new BigInteger(s2, 2);
        System.out.println(three);

        String s3 = "1001";
        String s4 = "100";
        BigInteger B3 = new BigInteger(s3, 2);
        BigInteger B4 = new BigInteger(s4, 2);
        B3 = B3.multiply(B4);
        System.out.println(B3);
        B3 = B3.add(B4);
        B3 = B3.divide(B4);
    }

    static void GCD()
    {
        BigInteger b0 = new BigInteger("20");
        // Method valueOf converts long int into your int
        BigInteger b1 = BigInteger.valueOf(12);

        System.out.println(b1.gcd(b0));
    }

    // next probable Print - automaticaly generates your next prime number
    static void NextPrime()
    {
        BigInteger p1 = BigInteger.valueOf(5);
        System.out.println(p1.nextProbablePrime());
        
    }

    // BitWise count of the set of Bits
    static void BitWiseFuction()
    {
        BigInteger Bit1 = BigInteger.valueOf(100);
        System.out.println(Bit1.bitCount());
        
    }

    // Factorial
    static void Factorial(int N)
    {
        BigInteger fac = BigInteger.valueOf(1);
        for(int i = 2; i <=N; i++)
        {
            fac = fac.multiply(BigInteger.valueOf(i));
        }
        System.out.println(fac);
    }
    public static void main(String args[]) {
        // playWithInt();
        // GCD();
        // NextPrime();
        // BitWiseFuction();
        Factorial(100); // can use BigInteger b = sc.nextBigInteger();
    }
}