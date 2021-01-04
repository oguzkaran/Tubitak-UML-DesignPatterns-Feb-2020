package org.csystem.util;

import java.util.HashSet;
import java.util.Random;

public final class StringUtil {
	private StringUtil() {}
	private static char getRandomChar(Random r, String str)
	{
		return str.charAt(r.nextInt(str.length()));
	}

	private static String getRandomString(Random r, int n, String str)
	{
		StringBuilder sb = new StringBuilder(n);

		for (int i = 0; i < n; ++i)
			sb.append(getRandomChar(r, str));

		return sb.toString();
	}

	public static boolean areCharactersDistinct(String s)
	{
		int len = s.length();
		HashSet<Character> characters = new HashSet<>();

		for (int i = 0; i < len; ++i)
			if (!characters.add(s.charAt(i)))
				return false;

		return true;
	}

	public static String capitalize(String s) 
	{
		s = s.trim();
		
		if (s.isEmpty())
			return "";
		
		return Character.toUpperCase(s.charAt(0)) + s.substring(1).toLowerCase();
	}

	public static String changeCase(String s)
	{
		StringBuilder sb = new StringBuilder(s);

		int len = s.length();

		for (int i = 0; i < len; ++i) {
			char ch = sb.charAt(i);
			if (Character.isUpperCase(ch))
				sb.setCharAt(i, Character.toLowerCase(ch));
			else if (Character.isLowerCase(ch))
				sb.setCharAt(i, Character.toUpperCase(ch));
		}

		return sb.toString();
	}

	public static int getCount(String s1, String s2)
	{
		int count = 0;
		
		for (int index = -1; (index = s1.indexOf(s2, index + 1))!= -1; ++count)
			;
		
		return count;
	}
	
	public static String getLetters(String s)
	{
		String str = "";
		int len = s.length();
		
		for (int i = 0; i < len; ++i) {
			char ch = s.charAt(i);
			
			if (Character.isLetter(ch))
				str += ch;
		}
		
		return str;
	}

	public static String getLongestPalindrome(String s)
	{
		String text = "";
		int endIndex = s.length();

		while (endIndex != 0) {
			int beginIndex = 0;

			while (beginIndex != endIndex) {
				String str = s.substring(beginIndex++, endIndex);

				if (str.length() > 1 && StringUtil.isPalindirome(str) && str.length() > text.length())
					text = str;
			}
			--endIndex;
		}

		return text;
	}

	public static String getRandomStringEN(Random r, int n)
	{
		String alphabet = "ABCDEFGHIJKLMNOPQRSTUWXVYZabcdefghijklmnopqrstuwxvyz0123456789";

		return getRandomString(r, n, alphabet);
	}

	public static String getRandomStringEN(int n)
	{
		return getRandomStringTR(new Random(), n);
	}

	public static String getRandomStringTR(Random r, int n)
	{
		String alphabet = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZabcçdefgğhıijklmnoöprsştuüvyz0123456789";

		return getRandomString(r, n, alphabet);
	}

	public static String getRandomStringTR(int n)
	{
		return getRandomStringTR(new Random(), n);
	}


	public static boolean isBlank(String s)
	{
		return s.trim().isEmpty();
	}
	
	public static boolean isPalindirome(String s)
	{
		String str = getLetters(s);
		
		int halfLen = str.length() / 2;
		int len = str.length();
		
		for (int i = 0; i < halfLen; ++i) {
			char chLeft = Character.toLowerCase(str.charAt(i));
			char chRight = Character.toLowerCase(str.charAt(len - 1 - i));
			
			if (chLeft != chRight)
				return false;
		}
		
		return true;
	}	
	
	
	public static boolean isPangram(String s, String alphabet)
	{
		int count = 0;
		int len = alphabet.length();
		
		for (int i = 0; i < len; ++i)
			if (s.contains(alphabet.charAt(i) + ""))
				++count;
		
		return count == len;				
	}
	
	public static boolean isPangramEN(String s)
	{
		s = s.toLowerCase();

		int count = 0;
		
		for (char ch = 'a'; ch <= 'z'; ++ch)
			if (s.indexOf(ch) != -1)
				++count;


		return count == 26;
	}	
	
	public static boolean isPangramTR(String s)
	{
		String alphabet = "abcçdefgğhıijklmnoöprsştuüvyz";
		
		return isPangram(s.toLowerCase(), alphabet);						
	}	
	
	public static String padLeft(String s, int len, char ch)
	{
		if (len <= s.length())
			return s;
		
		return repeat(len - s.length(), ch) + s;
	}
	
	public static String padLeft(String s, int len)
	{
		return padLeft(s, len, ' ');		
	}
	
	public static String padRight(String s, int len, char ch)
	{
		if (len <= s.length())
			return s;
		
		return s + repeat(len - s.length(), ch);		
	}
	
	public static String padRight(String s, int len)
	{
		return padRight(s, len, ' ');		
	}
	
	public static String removeWS(String s)
	{
		int len = s.length();
		StringBuilder sb = new StringBuilder(len);
		
		for (int i = 0; i < len; ++i) {
			char ch = s.charAt(i);
			
			if (!Character.isWhitespace(ch))
				sb.append(ch);
		}
		return sb.toString();
	}
	
	public static String repeat(int n, char ch)
	{
		if (n <= 0)
			return "";

		StringBuilder sb = new StringBuilder(n);

		while (n-- > 0)
			sb.append(ch);

		return sb.toString();
	}
	
	public static String reverse(String s)
	{
		return new StringBuilder(s).reverse().toString();
	}

	public static String squeeze(String s1, String s2)
	{
		int len1 = s1.length();
		int len2 = s2.length();

		boolean [] status = new boolean[65536];
		StringBuilder sb = new StringBuilder(len1);

		for (int i = 0; i < len2; ++i)
			status[s2.charAt(i)] = true;

		for (int i = 0; i < len1; ++i) {
			char ch = s1.charAt(i);

			if (!status[ch])
				sb.append(ch);
		}

		return sb.toString();
	}

	public static char [] toCharArray(StringBuilder sb)
	{
		int len = sb.length();
		char [] c = new char[len];

		sb.getChars(0, len, c, 0);

		return c;
	}

	public static String trimEnd(String s)
	{
		int i = s.length() - 1;
		
		for (; i >= 0 && Character.isWhitespace(s.charAt(i)); --i)
			;
		
		return s.substring(0, i + 1);		
	}
	
	public static String trimStart(String s)
	{
		int i = 0;
		
		for (; i < s.length() && Character.isWhitespace(s.charAt(i)); ++i)
			;
		
		return s.substring(i);		
	}
}
