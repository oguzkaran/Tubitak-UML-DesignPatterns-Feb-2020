package org.csystem.util;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Optional;
import java.util.Random;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public final class ArrayUtil {
    private ArrayUtil() {}

    public static int [][] addMatrices(int [][] a, int [][] b)
    {
        if (!isMatrix(a) || !isMatrix(b) || a.length != b.length || a[0].length != b[0].length)
            throw new UnsupportedOperationException("Invalid matrices");

        int row = a.length;
        int col = a[0].length;
        int [][] c = new int[row][col];

        for (int i = 0; i < row; ++i)
            for (int j = 0; j < col; ++j)
                c[i][j] = a[i][j] + b[i][j];

        return c;
    }

    public static double average(int [] a)
    {
        return (double)sum(a) / a.length;
    }

    public static void copy(int [] src, int [] dest)
    {
        copy(src, dest, src.length);
    }

    public static void copy(int [] src, int [] dest, int size)
    {
        for (int i = 0; i < size; ++i)
            dest[i] = src[i];
    }

    public static void display(int...a)
    {
        display(1, a);
    }

    public static void display(int n, int [] a)
    {
        String fmt = String.format("%%0%dd ", n);

        IntStream.of(a).forEach(val -> System.out.printf(fmt, val));

        System.out.println();
    }

    public static void display(int []... a)
    {
        display(1, a);
    }

    public static void display(int n, int []... a)
    {
        Stream.of(a).forEach(array -> display(n, array));
    }

    public static void display(byte...bytes)
    {
        for (byte b : bytes)
            System.out.printf("%d ", b);

        System.out.println();
    }

    public static void display(String [] str)
    {
        Stream.of(str).forEach(System.out::println);
    }

    public static void drawHistogram(int [] hist, int nMax, char ch)
    {
        int maxCount = max(hist).get();

        IntStream.of(hist).forEach(val -> {
            int nChars = (int)Math.round((double)val * nMax / maxCount);

            IntStream.rangeClosed(1, nChars).forEach(System.out::print);
            System.out.println();
        });
    }

    public static boolean equalsMatrices(int [][] a, int [][] b)
    {
        if (a.length != b.length || !isMatrix(a) || !isMatrix(b))
            return false;

        int row = a.length;

        for (int i = 0; i < row; ++i)
            if (!Arrays.equals(a[i], b[i]))
                return false;

        return true;
    }

    public static int [][] getMultipliedByScalar(int [][] a, int val)
    {
        int [][] m = new int [a.length][a[0].length];

        for (int i = 0; i < m.length; ++i)
            for (int j = 0; j < m[0].length; ++j)
                m[i][j] = -a[i][j];

        return m;
    }

    public static int [] getHistogram(int [] a, int n) //[0, n]
    {
        int [] histogram = new int[n + 1];

        IntStream.of(a).forEach(val -> ++histogram[val]);

        return histogram;
    }

    public static byte [] getRandomArray(int n, byte min, byte max)
    {
        return getRandomArray(null, n, min, max);
    }

    public static byte [] getRandomArray(Random r, int n, byte min, byte max)
    {
        byte [] result = new byte[n];

        IntStream.rangeClosed(0, n).forEach(i -> result[i] = (byte)(r.nextInt(max - min) + min));

        return result;
    }

    public static int [] getRandomArray(int n, int min, int max) //[min, max)
    {
        return getRandomArray(new Random(), n, min, max);
    }

    public static int [] getRandomArray(Random r, int n, int min, int max) //[min, max)
    {
        if (r == null)
            r = new Random();

        int [] result = new int[n];

        for (int i = 0; i < n; ++i)
            result[i] = r.nextInt(max - min) + min;

        return result;
    }


    public static double [] getRandomArray(int n, double min, double max) //[min, max)
    {
        return getRandomArray(new Random(), n, min, max);
    }

    public static double [] getRandomArray(Random r, int n, double min, double max) //[min, max)
    {
        if (r == null)
            r = new Random();

        double [] result = new double[n];

        for (int i = 0; i < n; ++i)
            result[i] = r.nextDouble() * (max - min) + min;

        return result;
    }

    public static int [][] getRandomMatrix(int m, int n, int min, int max) //[min, max)
    {
        return getRandomMatrix(new Random(), m, n, min, max);
    }

    public static int [][] getRandomMatrix(Random r, int m, int n, int min, int max) //[min, max)
    {
        if (r == null)
            r = new Random();

        int [][] a = new int[m][];

        for (int i = 0; i < m; ++i)
            a[i] = getRandomArray(r, n, min, max);

        return a;
    }

    public static int [][] getRandomSquareMatrix(int n, int min, int max) //[min, max)
    {
        return getRandomSquareMatrix(new Random(), n, min, max);
    }

    public static int [][] getRandomSquareMatrix(Random r, int n, int min, int max) //[min, max)
    {
        return getRandomMatrix(r, n, n, min, max);
    }


    public static double [][] getRandomMatrix(int m, int n, double min, double max) //[min, max)
    {
        return getRandomMatrix(new Random(), m, n, min, max);
    }

    public static double [][] getRandomMatrix(Random r, int m, int n, double min, double max) //[min, max)
    {
        if (r == null)
            r = new Random();

        double [][] a = new double[m][];

        for (int i = 0; i < m; ++i)
            a[i] = getRandomArray(r, n, min, max);

        return a;
    }

    public static int [][] getTranspose(int [][] a)
    {
        int [][] t = new int[a[0].length][a.length];

        for (int i = 0; i < a.length; ++i)
            for (int j = 0; j < a[i].length; ++j)
                t[j][i] = a[i][j];

        return t;
    }

    public static boolean isMatrix(int [][] a)
    {
        for (int i = 1; i < a.length; ++i)
            if (a[i].length != a[0].length)
                return false;

        return true;
    }

    public static boolean isSquareMatrix(int [][] a)
    {
        return isMatrix(a) && a[0].length == a.length;
    }


    public static String join(ArrayList list, String delim)
    {
        String result = "";

        for (Object o : list)
            result += o + delim;

        return result.isEmpty() ? result : result.substring(0, result.length() - delim.length());
    }

    public static String join(ArrayList list, char delim)
    {
        return join(list, delim + "");
    }

    public static String join(String [] str, String delim)
    {
        String result = "";

        for (String s : str)
            result += s + delim;

        return  result.isEmpty() ? result : result.substring(0, result.length() - delim.length());
    }

    public static String join(String [] s, char delim)
    {
        return join(s, delim + "");
    }

    public static Optional<Integer> max(int [] a)
    {
        if (a.length == 0)
            return Optional.empty();
        int result = a[0];

        for (int i = 0; i < a.length; ++i)
            if (result < a[i])
                result = a[i];

        return Optional.of(result);
    }

    public static Optional<Integer> min(int [] a)
    {
        if (a.length == 0)
            return Optional.empty();

        int result = a[0];

        for (int i = 0; i < a.length; ++i)
            if (result > a[i])
                result = a[i];

        return Optional.of(result);
    }
    public static BigDecimal max(BigDecimal [] bigDecimals)
    {
        BigDecimal result = bigDecimals[0];

        for (int i = 1; i < bigDecimals.length; ++i)
            result = result.max(bigDecimals[i]);

        return result;
    }

    public static int [] merge(int [] a, int...b)
    {
        int [] c = new int[a.length + b.length];

        int index = 0;
        for (int i = 0; i < a.length; ++i)
            c[index++] = a[i];

        for (int i = 0; i < b.length; ++i)
            c[index++] = b[i];

        return c;
    }

    public static int [] merge(int []...a)
    {
        //TODO:
        throw new UnsupportedOperationException();
    }

    public static BigDecimal min(BigDecimal [] bigDecimals)
    {
        BigDecimal result = bigDecimals[0];

        for (int i = 1; i < bigDecimals.length; ++i)
            result = result.min(bigDecimals[i]);

        return result;
    }

    public static int[][] multiplyByScalar(int [][] a, int val)
    {
        for (int [] array : a)
            multiplyByScalar(array, val);

        return a;
    }

    public static int[] multiplyByScalar(int [] a, int val)
    {
        for (int i = 0; i < a.length; ++i)
            a[i] *= val;

        return a;
    }

    public static int [] resize(int [] a, int size)
    {
        if (size <= a.length)
            return a;

        return Arrays.copyOf(a, size);
    }

    public static int[] reverse(int [] a)
    {
        int halfLen = a.length / 2;
        int len = a.length;

        for (int i = 0; i < halfLen; ++i) {
            int temp = a[i];

            a[i] = a[len - 1 - i];
            a[len - 1 - i] = temp;
        }

        return a;
    }

    public static char[] reverse(char [] a)
    {
        int halfLen = a.length / 2;
        int len = a.length;

        for (int i = 0; i < halfLen; ++i) {
            char temp = a[i];

            a[i] = a[len - 1 - i];
            a[len - 1 - i] = temp;
        }

        return a;
    }
    public static int [][] subMatrices(int [][] a, int [][] b)
    {
        return addMatrices(a, getMultipliedByScalar(b, -1));
    }

    public static int sum(int...a)
    {
        return sum(0, a);
    }

    public static int sum(int init, int...a)
    {
        int result = init;

        for (int x : a)
            result += x;

        return result;
    }

    public static int sum(int [][] a)
    {
        int total = 0;

        for (int [] array : a)
            total += sum(array);

        return total;
    }

    public static int [] sumsOfArrays(int []...a)
    {
        int [] sums = new int[a.length];

        for (int i = 0; i < a.length; ++i)
            sums[i] = sum(a[i]);

        return sums;
    }

    public static int sumDiagonal(int [][] a)
    {
        int total = 0;

        for (int i = 0; i < a.length; ++i)
            total += a[i][i];

        return total;
    }
}
