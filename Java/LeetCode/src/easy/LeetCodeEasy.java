package easy;
import java.util.*;
public class LeetCodeEasy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s = "a";
		
//		System.out.println(getLongestPalindromicSubstring(s));
		System.out.println(subString(s,s.length()));
	}
	
	
	public static String getLongestPalindromicSubstring(String s) {
		Set<String> allSubstrings = subString(s, s.length());
		int maxLenPalindrome = 0;
		String longestFoundPalindrome = "";
		for(String substr : allSubstrings) {
			if(isPalindrome(substr)) {
				if(maxLenPalindrome < substr.length()) {
					longestFoundPalindrome = substr;
					maxLenPalindrome = substr.length();
				}
			}
		}
		
		return longestFoundPalindrome;
	}
	
	
	public static boolean isPalindrome(String s) {
		if(s.length() <= 1) return true;
		
		int head = 0; 
		int tail = s.length() -1;
		
		while(head <= tail) {
			if(s.charAt(head) != s.charAt(tail)) {
				return false;
			}
			
			head ++;
			tail--;
		}
		
		return true;
	}
	
	public static Set<String> subString(String s, int n) {
        // Pick starting point
		Set<String> set = new HashSet();
        for(int i = 0; i < n; i ++) {
            for(int j = i; j < n; j ++) {
            	System.out.println(s.substring(i, j));
               set.add(s.substring(i, j));
            }
            
          
        }
        
        System.out.println(set);
        
        return set;
    }

}
