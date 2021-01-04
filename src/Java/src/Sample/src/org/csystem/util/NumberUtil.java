package org.csystem.util;

import java.math.BigInteger;
import java.util.Random;

import static java.math.BigInteger.ONE;
import static java.math.BigInteger.ZERO;

public final class NumberUtil {
	private static final BigInteger TWO = BigInteger.valueOf(2); //For JDK < 9
	private static final BigInteger THREE = BigInteger.valueOf(3);
	private static final BigInteger FIVE = BigInteger.valueOf(5);
	private static final BigInteger SEVEN = BigInteger.valueOf(7);
	private static final BigInteger ELEVEN = BigInteger.valueOf(11);

	private NumberUtil() {}

	private static int [] getDigits(long val, int n)
	{
		val = Math.abs(val);
		int count = (int)(Math.log10(val) / n) + 1;
		int [] digits = new int[count];

		int factor = pow(10, n);

		for (int i = count - 1; val != 0; digits[i] = (int)(val % factor), val /= factor, --i)
			;

		return digits;
	}

	public static long factorial(int n)
	{
		if (n < 0)
			throw new IllegalArgumentException("n can not be negative");
		
		long result = 1;
		
		for (int i = 2; i <= n; ++i)
			result *= i;		
		
		return result;
	}
	
	public static int getCubeSum(int a, int b, int c)
	{
		return a * a * a + b * b * b + c * c * c;
	}
	
	public static int getDigitsCount(int val)
	{
		if (val == 0)
			return 1;

		return (int)Math.log10(Math.abs(val)) + 1;
	}

	public static int[] getDigits(long val)
	{
		return getDigits(val, 1);
	}

	public static int [] getDigitsInThrees(long val)
	{
		return getDigits(val, 3);
	}

	public static int getDigitsPowSum(int val)
	{
		int count = getDigitsCount(val);
		int sum = 0;	
		
		while (val != 0) {
			sum += pow(val % 10, count);
			val /= 10;
		}
		
		return sum;				
	}
	
	public static int getDigitsSum(int val)
	{
		int sum = 0;
		
		while (val != 0) {
			sum += val % 10;
			val /= 10;
		}
		
		return Math.abs(sum);
	}
	
	public static double getE()
	{
		double e = 2;
		
		for (int i = 2; i < 10; ++i)
			e += Math.pow(factorial(i), -1);		
		
		return e;	
	}
	public static int getGreaterFibonacci(int val)
	{
		int prev1 = 0, prev2 = 1, result = 0;

		for (int i = 2; result <= val; ++i) {
			result = prev1 + prev2;
			prev1 = prev2;
			prev2 = result;
		}

		return result;
	}

	public static int getFibonacciNumber(int n)
	{
		if (n == 1)
			return 0;

		if (n == 2)
			return 1;

		int prev1 = 0, prev2 = 1, result = 0;

		for (int i = 2; i < n; ++i) {
			result = prev1 + prev2;
			prev1 = prev2;
			prev2 = result;
		}

		return result;
	}
	
	public static int getPrime(int n)
	{
		if (n <= 0)
			return -1;
		
		int count = 0;
		int val = 0;
		int i = 2;
		
		for (;;) {
			if (count == n)
				break;
			
			if (isPrime(i)) {
				++count;
				val = i;
			}
			++i;
		}		
		
		return val;			
	}

	public static int [] getPrimes(int n)
	{
		int [] primes = new int[n];

		int count = 0;
		int i = 2;

		for (;;) {
			if (count == n)
				break;

			if (isPrime(i))
				primes[count++] = i;
			++i;
		}

		return primes;
	}
	
	public static int getReverse(int val)
	{
		int result = 0;
		
		while (val != 0) {
			result = result * 10 + val % 10;
			val /= 10;
		}		
		
		return result;
	}
	
	public static boolean isArmstrong(int val)
	{
		if (val < 0)
			return false;
		
		int count = getDigitsCount(val);
		int sum = 0;
		int temp = val;
		
		while (temp != 0) {
			sum += pow(temp % 10, count);
			temp /= 10;
		}
		
		return sum == val;
	}	
	
	public static boolean isEven(int val)
	{
		return val % 2 == 0;
	}
	
	public static boolean isOdd(int val)
	{
		return !isEven(val);
	}
	
	public static boolean isPalindrome(int val)
	{
		return getReverse(val) == val;		
	}

	public static boolean isPrime(int val) {return isPrime((long)val);}

	public static boolean isPrime(long val)
	{
		if (val <= 1)
			return false;

		if (val % 2 == 0)
			return val == 2;

		if (val % 3 == 0)
			return val == 3;

		if (val % 5 == 0)
			return val == 5;

		if (val % 7 == 0)
			return val == 7;

		if (val % 11 == 0)
			return val == 11;

		for (long i = 13; i * i <= val; i += 2)
			if (val % i == 0)
				return false;

		return true;
	}
	

	public static boolean isPrime(BigInteger val)
	{
		if (val.compareTo(ONE) <= 0)
			return false;

		if (val.mod(TWO).equals(ZERO))
			return val.equals(TWO);

		if (val.mod(THREE).equals(ZERO))
			return val.equals(THREE);

		if (val.mod(FIVE).equals(ZERO))
			return val.equals(FIVE);

		if (val.mod(SEVEN).equals(ZERO))
			return val.equals(SEVEN);

		for (BigInteger i = ELEVEN; i.pow(2).compareTo(val) <= 0; i = i.add(TWO))
			if (val.mod(i).equals(ZERO))
				return false;

		return true;
	}

	public static boolean isValidForBounds(BigInteger bigInteger, long min, long max)
	{
		return	bigInteger.compareTo(BigInteger.valueOf(max)) <= 0 && bigInteger.compareTo(BigInteger.valueOf(min)) >= 0;
	}

	public static boolean isValidForLong(BigInteger bigInteger)
	{
		return isValidForBounds(bigInteger, Long.MIN_VALUE, Long.MAX_VALUE);
	}

	public static boolean isValidForInt(BigInteger bigInteger)
	{
		return isValidForBounds(bigInteger, Integer.MIN_VALUE, Integer.MAX_VALUE);
	}
	
	public static int max(int a, int b)
	{
		return a > b ? a : b;
	}
	
	public static int max(int a, int b, int c)
	{
		return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	}
	
	public static double nextDouble(Random r, double min, double max) //[min, max)
	{
		return r.nextDouble() * (max - min) + min;
	}
	
	public static int nextInt(Random r, int min, int max) //[min, max)
	{
		return r.nextInt(max - min) + min;
	}

	public static String numToStrMax3DigitsTR(int val)
	{
		if (val == 0)
			return "sıfır";

		String [] ones =  {"", "bir", "iki", "üç", "dört", "beş", "altı", "yedi", "sekiz", "dokuz"};
		String [] tens =  {"", "on", "yirmi", "otuz", "kırk", "elli", "altmış", "yetmiş", "seksen", "doksan"};

		String str = val > 0 ? "" : "eksi";

		val = Math.abs(val);

		int a = val / 100;
		int b = val / 10 % 10;
		int c = val % 10;

		if (a != 0) {
			if (a != 1)
				str += " " + ones[a];
			str += (str.isEmpty() ? "" : " ") + "yüz";
		}

		if (b != 0)
			str += (str.isEmpty() ? "" : " ") + tens[b];

		if (c != 0)
			str += (str.isEmpty() ? "" : " ") + ones[c];

		return str;
	}
	
	public static int pow(int a, int b)
	{
		b = Math.abs(b);
		
		int result = 1;
		
		while (b-- > 0)
			result *= a;		
		
		return result;
	}

	public static int sumPrimeFactors(int val)
	{
		val = Math.abs(val);

		int sum = 0;

		for (int i = 2; i <= val / 2; ++i)
			if (val % i == 0 && isPrime(i))
				sum += i;

		return sum;
	}
		
}
