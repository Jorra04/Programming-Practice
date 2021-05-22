package easy;

import java.util.*;

public class LeetCodeEasy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		String s = "a";

//		System.out.println(getLongestPalindromicSubstring(s));
//		System.out.println(subString(s,s.length()));

//		int[] nums = { 1, 1, 2, 2, 2, 3 };
//
//		System.out.println(Arrays.toString(frequencySort(nums)));

//		int[] nums = { 2, 5, 1, 3, 4, 7 };
//
//		int n = 3;
//
//		System.out.println(Arrays.toString(shuffle(nums, n)));
	
//		int[] nums = { 1};
////
//		int target = 0;
//		
//		System.out.println(searchInsert(nums, target));
		
		
//		int[] nums1 = {1};
//		int m = 1; 
//		int[] nums2 = {}; 
//		int n = 0;
//		
//		merge(nums1, m, nums2, n);
//		System.out.println(Arrays.toString(nums1));
		
		
//		String paragraph = "a, a, a, a, b,b,b,c, c";
//		
//		String[] banned = {"a"};
//		
//		
//		System.out.println(mostCommonWord(paragraph, banned));
		
		
		
		
		
//		String sentence = "hellohello hellohellohello";
//		String searchWord = "ell";
//		
//		System.out.println(isPrefixOfWord(sentence, searchWord));
		
		
		System.out.println("h");
		
	}
	
	
	 public static int isPrefixOfWord(String sentence, String searchWord) {
	        String[] splitString = sentence.split("\\s+");
	        
	        for(int i = 0; i < splitString.length; i ++) {
	            if(splitString[i].startsWith(searchWord)) {
	                return i + 1;
	            }
	        }
	        
	        return -1;
	    }
	
	
	public static  String mostCommonWord(String paragraph, String[] banned) {
        HashMap<String, Integer> wordCount = new HashMap();
         
        paragraph = paragraph.replaceAll("[^A-Za-z0-9 ]", " ").toLowerCase();
        
        String[] splitString = paragraph.split("\\s+");
        HashSet<String> bannedSet = new HashSet();
        
        for(String bannedWord : banned){
            bannedSet.add(bannedWord);
        }
        
        for(String word : splitString) {
        	word = word.trim();
            if(wordCount.containsKey(word)) {
                wordCount.put(word, wordCount.get(word) + 1);
            } else {
                wordCount.put(word, 1);
            }
        }
        
        
        int maxOccurences = -1;
        String mostFrequent = "";
        for(Map.Entry<String, Integer> entry : wordCount.entrySet()) {
            if(!bannedSet.contains(entry.getKey()) && entry.getValue() > maxOccurences) {
                maxOccurences = entry.getValue();
                mostFrequent = entry.getKey();
            }
        }
        
        return mostFrequent;
    }
	
	
	
	public static void merge(int[] nums1, int m, int[] nums2, int n) {
		int index = 0;
		for(int i = m; i < nums1.length; i ++) {
			nums1[i] = nums2[index++];
		}
        
		
		Arrays.sort(nums1);
    }
	
	

	public static int searchInsert(int[] nums, int target) {

		int head = 0;
		int tail = nums.length;
		int index = -1;

		while (head < tail) {
			int mid = (head + tail) / 2;

			if (nums[mid] > target) {
				tail = mid - 1;

			} else if (nums[mid] < target) {
				head = mid + 1;
				index = mid;
			} else {
				return mid;
			}

			
		}

		return index +1;
	}

	public static int[] shuffle(int[] nums, int n) {

		int[] shuffledArray = new int[nums.length];
		int index = 0;
		int end = n;
		for (int i = 0; i < end; i++) {
			shuffledArray[index++] = nums[i];

			shuffledArray[index++] = nums[n++];
		}

		return shuffledArray;

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
