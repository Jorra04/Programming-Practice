package easy;

import java.util.*;

public class LeetCodeEasy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		String s = "a";

//		System.out.println(getLongestPalindromicSubstring(s));
//		System.out.println(subString(s,s.length()));

		int[] nums = { 1, 1, 2, 2, 2, 3 };

		System.out.println(Arrays.toString(frequencySort(nums)));
	}

	public static int[] frequencySort(int[] nums) {
		HashMap<Integer, Integer> count = new HashMap();
		List<Integer> tmp = new ArrayList();
		int[] resultArray = new int[nums.length];
		for (int i : nums) {
			if (count.containsKey(i)) {
				count.put(i, count.get(i) + 1);
			} else {
				count.put(i, 1);
			}
		}

		ArrayList<Map.Entry<Integer, Integer>> entries = new ArrayList();
		for (Map.Entry<Integer, Integer> entry : count.entrySet()) {
			entries.add(entry);
		}

		Collections.sort(entries, new Comparator<Map.Entry<Integer, Integer>>() {
			@Override
			public int compare(Map.Entry<Integer, Integer> entry1, Map.Entry<Integer, Integer> entry2) {
				if (entry1.getValue() > entry2.getValue()) {
					return 1;
				} else if (entry1.getValue() < entry2.getValue()) {
					return -1;
				} else {
					return entry2.getKey().compareTo(entry1.getKey());
				}
			}
		});

		System.out.println(entries);
		int index = 0;
		for (Map.Entry<Integer, Integer> tempEntry : entries) {
			int i = tempEntry.getValue();

			while (i > 0) {
				resultArray[index++] = tempEntry.getKey();
				i--;
			}
		}

		return resultArray;
	}

	public static String getLongestPalindromicSubstring(String s) {
		Set<String> allSubstrings = subString(s, s.length());
		int maxLenPalindrome = 0;
		String longestFoundPalindrome = "";
		for (String substr : allSubstrings) {
			if (isPalindrome(substr)) {
				if (maxLenPalindrome < substr.length()) {
					longestFoundPalindrome = substr;
					maxLenPalindrome = substr.length();
				}
			}
		}

		return longestFoundPalindrome;
	}

	public static boolean isPalindrome(String s) {
		if (s.length() <= 1)
			return true;

		int head = 0;
		int tail = s.length() - 1;

		while (head <= tail) {
			if (s.charAt(head) != s.charAt(tail)) {
				return false;
			}

			head++;
			tail--;
		}

		return true;
	}

	public static Set<String> subString(String s, int n) {
		// Pick starting point
		Set<String> set = new HashSet();
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				System.out.println(s.substring(i, j));
				set.add(s.substring(i, j));
			}

		}

		System.out.println(set);

		return set;
	}

}
