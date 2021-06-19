package easy;

import easy.Pair;
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

//		int[] nums = {1,0,0,1,0,1};
//		int k = 2;
//		
//		System.out.println(kLengthApart(nums, k));
		
//		int a = 1;
//		int b  = 0;
//		System.out.println(b=~b);
		
		
//		
//		int[][] indices = {
//				{0,1},
//				{1,1}
//		};
//		
//		
//		
//		
//		System.out.println(oddCells(2, 3, indices));
//		String allowed = "ab";
//		
//		String [] words = {"ad","bd","aaab","baa","badab"};
//		
//		System.out.println(countConsistentStrings(allowed, words));
		
//		int [][] mat = {{1,2},{3,4}};
//		int r = 2;
//		int c = 4;
//		
//		System.out.println(Arrays.toString(matrixReshape(mat, r, c)));
//		int[] arr = {1,0,2,3,0,4,5,0};
//		duplicateZeros(arr);
//		System.out.println(Arrays.toString(arr));
		
		char[] arr = {'a','b','c','d','e'};
		rotateNTimes(arr, 2);
		System.out.println(Arrays.toString(arr));
	}
	
	public static void rotateNTimes(char[] arr,  int n) {
        for(int i = 0; i <arr.length; i ++) {
        	char temp = arr[i%arr.length];
            arr[i%arr.length] = arr[(i+1)%arr.length];
            arr[(i+1)%arr.length] = temp;
            
        }
    }
	
	public static void duplicateZeros(int[] arr) {
        for(int i = 0; i < arr.length; i ++) {
            if(arr[i] == 0) {
                moveToRight(arr, i);
                arr[i] = 0;
                i++;
            }
        }
    }
    
    public static void moveToRight(int[] arr, int until) {
        for(int i = arr.length -1; i > until; i --) {
            arr[i] = arr[i -1];
        }
    }
	
	
	
	public static int[][] matrixReshape(int[][] mat, int r, int c) {
        int[][] newMatrix = new int[r][c];
        int[] aux = new int[mat.length + mat[0].length];
        int counter = 0;
        for(int i = 0; i < mat.length; i ++) {
            for(int j = 0; j < mat[i].length; j ++) {
                aux[counter++] = mat[i][j];
            }
        }
        counter = 0;
        for(int i = 0; i < r; i ++){
            for(int j = 0; j < c; j ++) {
                newMatrix[i][j] = aux[counter++];
            }
        }
        
        return newMatrix;
    }
	
	
	public static int countConsistentStrings(String allowed, String[] words) {
        int consistentStrings = 0;
        int[] charCountsAllowed = new int[26];
        
        for(char c : allowed.toCharArray()){
            charCountsAllowed[c -'a'] ++;
        }
        
         // System.out.println(Arrays.toString(charCountsAllowed) +"\n\n");
        
        for(String word : words) {
            int[] tempCharCountsAllowed = new int[26];
        
            for(char c : word.toCharArray()){
                tempCharCountsAllowed[c -'a'] ++;
            }
            
            // System.out.println(Arrays.toString(tempCharCountsAllowed));
            boolean mismatch = false;
            for(int i = 0; i < 26 && !mismatch; i ++) {
                mismatch = !(tempCharCountsAllowed[i] >= charCountsAllowed[i]);
            
            }
            if(!mismatch) {
                consistentStrings++;
            }
            
            
        }
        
        
        return consistentStrings;
        
        
    }
	
	
	 public static int oddCells(int m, int n, int[][] indices) {
	        int[][] matrix = new int[m][n];
	        
	        for(int[] instructions : indices) {
	            changeRowValues(matrix, instructions[0]);
	            changeColValues(matrix, instructions[1]);
	        }
	        
	        
	        return checkOdds(matrix);
	    }
	    
	    
	    
	    public static int checkOdds(int[][] matrix) {
	        int oddCounter = 0;
	        for(int[] row : matrix) {
	            for(int i : row) {
	                if(i % 2 != 0 ){
	                    oddCounter ++;
	                }
	            }
	        }
	        
	        
	        return oddCounter;
	    }
	    
	    
	    
	    public static void changeRowValues(int[][] matrix, int row) {
	        for(int i = 0; i <matrix[row].length; i ++) {
	        	matrix[row][i] ++;
	        }
	    }
	    
	    public static void changeColValues(int[][] matrix, int col) {
	        for(int i = 0; i <matrix.length; i ++) {
	        	matrix[i][col] ++;
	        }
	    }

	public static boolean kLengthApart(int[] nums, int k) {

		List<Pair> foundOnes = new ArrayList();

		for (int i = 0; i < nums.length; i++) {
			if (nums[i] == 1) {
				foundOnes.add(new Pair(nums[i], i));
			}

		}

		for (int i = 1; i < foundOnes.size(); i++) {
			System.out.println(foundOnes.get(i).position - foundOnes.get(i - 1).position);

			if (foundOnes.get(i).position - foundOnes.get(i - 1).position -1 < k) {
				return false;
			}
		}

		return true;

	}

	public static int isPrefixOfWord(String sentence, String searchWord) {
		String[] splitString = sentence.split("\\s+");

		for (int i = 0; i < splitString.length; i++) {
			if (splitString[i].startsWith(searchWord)) {
				return i + 1;
			}
		}

		return -1;
	}

	public static String mostCommonWord(String paragraph, String[] banned) {
		HashMap<String, Integer> wordCount = new HashMap();

		paragraph = paragraph.replaceAll("[^A-Za-z0-9 ]", " ").toLowerCase();

		String[] splitString = paragraph.split("\\s+");
		HashSet<String> bannedSet = new HashSet();

		for (String bannedWord : banned) {
			bannedSet.add(bannedWord);
		}

		for (String word : splitString) {
			word = word.trim();
			if (wordCount.containsKey(word)) {
				wordCount.put(word, wordCount.get(word) + 1);
			} else {
				wordCount.put(word, 1);
			}
		}

		int maxOccurences = -1;
		String mostFrequent = "";
		for (Map.Entry<String, Integer> entry : wordCount.entrySet()) {
			if (!bannedSet.contains(entry.getKey()) && entry.getValue() > maxOccurences) {
				maxOccurences = entry.getValue();
				mostFrequent = entry.getKey();
			}
		}

		return mostFrequent;
	}

	public static void merge(int[] nums1, int m, int[] nums2, int n) {
		int index = 0;
		for (int i = m; i < nums1.length; i++) {
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

		return index + 1;
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
