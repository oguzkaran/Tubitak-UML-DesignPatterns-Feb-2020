package org.csystem.app;

import java.io.UnsupportedEncodingException;
import java.nio.charset.Charset;
import java.util.Locale;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class StringEx {
    private final String m_str;

    public StringEx(String str)
    {
        m_str = str;
    }

    public int length()
    {
        return m_str.length();
    }

    public boolean isEmpty()
    {
        return m_str.isEmpty();
    }

    public char charAt(int index)
    {
        return m_str.charAt(index);
    }

    public int codePointAt(int index)
    {
        return m_str.codePointAt(index);
    }

    public int codePointBefore(int index)
    {
        return m_str.codePointBefore(index);
    }

    public int codePointCount(int beginIndex, int endIndex)
    {
        return m_str.codePointCount(beginIndex, endIndex);
    }

    public int offsetByCodePoints(int index, int codePointOffset)
    {
        return m_str.offsetByCodePoints(index, codePointOffset);
    }

    public void getChars(int srcBegin, int srcEnd, char[] dst, int dstBegin)
    {
        m_str.getChars(srcBegin, srcEnd, dst, dstBegin);
    }

    @Deprecated(since = "1.1")
    public void getBytes(int srcBegin, int srcEnd, byte[] dst, int dstBegin)
    {
        m_str.getBytes(srcBegin, srcEnd, dst, dstBegin);
    }

    public byte[] getBytes(String charsetName) throws UnsupportedEncodingException
    {
        return m_str.getBytes(charsetName);
    }

    public byte[] getBytes(Charset charset)
    {
        return m_str.getBytes(charset);
    }

    public byte[] getBytes()
    {
        return m_str.getBytes();
    }

    public boolean contentEquals(StringBuffer sb)
    {
        return m_str.contentEquals(sb);
    }

    public boolean contentEquals(CharSequence cs)
    {
        return m_str.contentEquals(cs);
    }

    public boolean equalsIgnoreCase(String anotherString)
    {
        return m_str.equalsIgnoreCase(anotherString);
    }

    public int compareTo(String anotherString)
    {
        return m_str.compareTo(anotherString);
    }

    public int compareToIgnoreCase(String str)
    {
        return m_str.compareToIgnoreCase(str);
    }

    public boolean regionMatches(int toffset, String other, int ooffset, int len)
    {
        return m_str.regionMatches(toffset, other, ooffset, len);
    }

    public boolean regionMatches(boolean ignoreCase, int toffset, String other, int ooffset, int len)
    {
        return m_str.regionMatches(ignoreCase, toffset, other, ooffset, len);
    }

    public boolean startsWith(String prefix, int toffset)
    {
        return m_str.startsWith(prefix, toffset);
    }

    public boolean startsWith(String prefix)
    {
        return m_str.startsWith(prefix);
    }

    public boolean endsWith(String suffix)
    {
        return m_str.endsWith(suffix);
    }

    public int indexOf(int ch)
    {
        return m_str.indexOf(ch);
    }

    public int indexOf(int ch, int fromIndex)
    {
        return m_str.indexOf(ch, fromIndex);
    }

    public int lastIndexOf(int ch)
    {
        return m_str.lastIndexOf(ch);
    }

    public int lastIndexOf(int ch, int fromIndex)
    {
        return m_str.lastIndexOf(ch, fromIndex);
    }

    public int indexOf(String str)
    {
        return m_str.indexOf(str);
    }

    public int indexOf(String str, int fromIndex)
    {
        return m_str.indexOf(str, fromIndex);
    }

    public int lastIndexOf(String str)
    {
        return m_str.lastIndexOf(str);
    }

    public int lastIndexOf(String str, int fromIndex)
    {
        return m_str.lastIndexOf(str, fromIndex);
    }

    public String substring(int beginIndex)
    {
        return m_str.substring(beginIndex);
    }

    public String substring(int beginIndex, int endIndex)
    {
        return m_str.substring(beginIndex, endIndex);
    }

    public CharSequence subSequence(int beginIndex, int endIndex)
    {
        return m_str.subSequence(beginIndex, endIndex);
    }

    public String concat(String str)
    {
        return m_str.concat(str);
    }

    public String replace(char oldChar, char newChar)
    {
        return m_str.replace(oldChar, newChar);
    }

    public boolean matches(String regex)
    {
        return m_str.matches(regex);
    }

    public boolean contains(CharSequence s)
    {
        return m_str.contains(s);
    }

    public String replaceFirst(String regex, String replacement)
    {
        return m_str.replaceFirst(regex, replacement);
    }

    public String replaceAll(String regex, String replacement)
    {
        return m_str.replaceAll(regex, replacement);
    }

    public String replace(CharSequence target, CharSequence replacement)
    {
        return m_str.replace(target, replacement);
    }

    public String[] split(String regex, int limit)
    {
        return m_str.split(regex, limit);
    }

    public String[] split(String regex)
    {
        return m_str.split(regex);
    }

    public static String join(CharSequence delimiter, CharSequence... elements)
    {
        return String.join(delimiter, elements);
    }

    public static String join(CharSequence delimiter, Iterable<? extends CharSequence> elements)
    {
        return String.join(delimiter, elements);
    }

    public String toLowerCase(Locale locale)
    {
        return m_str.toLowerCase(locale);
    }

    public String toLowerCase()
    {
        return m_str.toLowerCase();
    }

    public String toUpperCase(Locale locale)
    {
        return m_str.toUpperCase(locale);
    }

    public String toUpperCase()
    {
        return m_str.toUpperCase();
    }

    public String trim()
    {
        return m_str.trim();
    }

    public String strip()
    {
        return m_str.strip();
    }

    public String stripLeading()
    {
        return m_str.stripLeading();
    }

    public String stripTrailing()
    {
        return m_str.stripTrailing();
    }

    public boolean isBlank()
    {
        return m_str.isBlank();
    }

    public Stream<String> lines()
    {
        return m_str.lines();
    }

    public IntStream chars()
    {
        return m_str.chars();
    }

    public IntStream codePoints()
    {
        return m_str.codePoints();
    }

    public char[] toCharArray()
    {
        return m_str.toCharArray();
    }

    public static String format(String format, Object... args)
    {
        return String.format(format, args);
    }

    public static String format(Locale l, String format, Object... args)
    {
        return String.format(l, format, args);
    }

    public static String valueOf(Object obj)
    {
        return String.valueOf(obj);
    }

    public static String valueOf(char[] data)
    {
        return String.valueOf(data);
    }

    public static String valueOf(char[] data, int offset, int count)
    {
        return String.valueOf(data, offset, count);
    }

    public static String copyValueOf(char[] data, int offset, int count)
    {
        return String.copyValueOf(data, offset, count);
    }

    public static String copyValueOf(char[] data)
    {
        return String.copyValueOf(data);
    }

    public static String valueOf(boolean b)
    {
        return String.valueOf(b);
    }

    public static String valueOf(char c)
    {
        return String.valueOf(c);
    }

    public static String valueOf(int i)
    {
        return String.valueOf(i);
    }

    public static String valueOf(long l)
    {
        return String.valueOf(l);
    }

    public static String valueOf(float f)
    {
        return String.valueOf(f);
    }

    public static String valueOf(double d)
    {
        return String.valueOf(d);
    }

    public String intern()
    {
        return m_str.intern();
    }

    public String repeat(int count)
    {
        return m_str.repeat(count);
    }

    public static int compare(CharSequence cs1, CharSequence cs2)
    {
        return CharSequence.compare(cs1, cs2);
    }

    public String reverse()
    {
        char [] c = m_str.toCharArray();

        for (int i = 0; i < c.length / 2; ++i) {
            char temp = c[i];
            c[i] = c[c.length - 1 - i];
            c[c.length - 1 - i] = temp;
        }

        return new String(c);
     }
}
