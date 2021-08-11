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
//		String[] words = { "ad", "bd", "aaab", "baa", "badab" };
//
//		System.out.println(countConsistentStrings(allowed, words));

//		String word = "Leetcode";
//		
//		System.out.println(detectCapitalUse(word));

//		int[] arr = {1,5,4,22};
//		int l = 0;
//		int h = arr.length -1;
//		System.out.println(recursiveFindMax(arr, l, h));

//		int[] arr1 = {1, 2, 11, 27};
//		int[] arr2 = {4, 12, 19, 22};
//		
//		System.out.println(Arrays.toString(minAbsDiff(arr1, arr2)));

//		System.out.println(isSubstring("eee", "eeeee"));

//		int[][] mat = {
//				{1,0,0},
//				{0,0,1},
//				{1,0,0}
//		};
//		System.out.println(numSpecial(mat));

//		System.out.println(isSub("eeee" , "eeeee"));
//		int[] arr = {3,71,3,71,71,71,71,42, 72};
//		int high = arr.length -1;
//		int low = 0;
//		HashMap<Integer, Integer> ds = new HashMap();

//		System.out.println(winningDay(arr, low, high, ds));
		
//		int[][] matrix = {{1,1,1},{1,0,1},{1,1,1}};
//		setZeroes(matrix);
//		
//		System.out.println(Arrays.toString(matrix));
		
//		char[][] board = {{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','R','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'}};
//		
//		System.out.println(numRookCaptures(board));
		
//		int[] coins = {1,2,5};
//		int amount = 5;
//		
//		System.out.println(makeChange2(amount, coins));
//		System.out.println(makeChangeDP(amount, coins));
//		int[] temperatures = {55,38,53,81,61,93,97,32,43,78};
//		System.out.println(Arrays.toString(dailyTemperatures(temperatures)));

//		List<Job> jobs = new ArrayList();
//		Test 1 tushar case
//		jobs.add(new Job(1,3,5));
//		jobs.add(new Job(5,8,11));
//		
//		jobs.add(new Job(4,6,5));
//		jobs.add(new Job(7,9,2));
//		jobs.add(new Job(6,7,4));
//		jobs.add(new Job(2,5,6));
		
//		Test 2	other video case
//		jobs.add(new Job(1,4,3));
//		jobs.add(new Job(2,6,5));
//		
//		jobs.add(new Job(4,7,2));
//		jobs.add(new Job(6,8,6));
//		jobs.add(new Job(5,9,4));
//		jobs.add(new Job(7,10,8));
		
//		Test 3	gfg case
//		jobs.add(new Job(1,2,50));
//		jobs.add(new Job(3,5,20));
//		
//		jobs.add(new Job(6,19,100));
//		jobs.add(new Job(2,100,200));
		
//		Test 4 custom case
//		jobs.add(new Job(1,5,50));
//		jobs.add(new Job(6,16,25));
//		
//		jobs.add(new Job(2,10,2));
//		jobs.add(new Job(11,18, 10));
//		jobs.add(new Job(17,20, 25));
		
//		Test 5 case where none overlap
//		jobs.add(new Job(0,5,60));
//		jobs.add(new Job(5, 10, 70));
//		
//		jobs.add(new Job(10,12,80));
//		jobs.add(new Job(12,13, 1));
//		jobs.add(new Job(13,18, 3));
		
//		Test 6 case where all overlap
//		jobs.add(new Job(0,6,5));
//		jobs.add(new Job(1, 7, 6));
//		
//		jobs.add(new Job(2,9,8));
//		jobs.add(new Job(3,12, 3));
//		jobs.add(new Job(4,15, 1));
		
		
//		System.out.println(jobScheduling(jobs));
	}
	
	
	
//	public static List<Job> jobScheduling(List<Job> jobs) {
//		if(jobs.size() == 0) {
//			return jobs;
//		}
//		int[] dp = new int[jobs.size()];
//		Collections.sort(jobs);
//		
//		//Fill array with initial profits
//		for(int i = 0 ; i < jobs.size(); i ++ ) {
//			dp[i] = jobs.get(i).profit;
//		}
//		
//		for(int i = 1; i < jobs.size(); i ++) {
//			for(int j = 0; j < i; j ++) {
//				if(jobs.get(i).start >= jobs.get(j).end) {
//					dp[i] = Math.max(dp[i], jobs.get(i).profit + dp[j]);
//				}
//			}
//		}
//		
//		//Find the maximum in the DP array
//		int max = Integer.MIN_VALUE;
//		int indexOfMax = -1;
//		for(int i = 0 ; i < dp.length; i ++ ) {
//			if(dp[i] > max) {
//				max = dp[i];
//				indexOfMax = i;
//			}
//		}
//		List<Job> solutionSet = new ArrayList();
//		for(int i = 0; i < indexOfMax; i ++) {
//			if(jobs.get(i).end <= jobs.get(indexOfMax).start) {
//				if(containsOverlap(jobs.get(i), solutionSet) == jobs.get(i)) {
//					solutionSet.add(jobs.get(i));
//				}
//			}
//		}
//
//		solutionSet.add(jobs.get(indexOfMax));
//		return solutionSet;
//	}
//	
//	public static Job containsOverlap(Job job, List<Job> jobs) {
//		for(int i = 0; i < jobs.size(); i ++) {
//			if(job.start < jobs.get(i).end) {
//				if(job.profit < jobs.get(i).profit) {
//					return jobs.get(i);
//				} else {
//					jobs.remove(i);
//				}
//			}
//		}
//		 return job;
//	}
	
	public static int[] dailyTemperatures(int[] temperatures) {
        int[] daysUntil = new int[temperatures.length];
        int currIndex = 0;
        for(int i = 0; i < temperatures.length; i ++) {
            for(int j = i + 1; j < temperatures.length; j ++ ) {
                if(temperatures[j] > temperatures[i]) {
                    daysUntil[currIndex] = j-i;
                    break;
                }
                
                
            }
            currIndex++;
        }
        
        return daysUntil;
    }
	
	public static void matrixPrinter(int[][] mat) {
		for(int[] row : mat) {
			System.out.println(Arrays.toString(row));
		}
	}
	
	public static int makeChangeDP(int amount, int[] coins) {
		int[][] dp = new int[coins.length + 1][amount +1];
		//Fill the first row with ones
		for(int i = 0; i < dp.length; i ++ ) {
			dp[i][0] = 1;
		}
		int coinsIndex = 0;
		for(int i = 1; i < dp.length; i ++) {
			for(int j = 1; j < dp[0].length; j ++ ) {
				if(coins[coinsIndex] > j) {
					dp[i][j] = dp[i-1][j];
				} else {
					dp[i][j] = dp[i-1][j] + dp[i][j - coins[i-1]];
				}
			}
			coinsIndex++;
		}
		matrixPrinter(dp);
		
		return dp[coins.length][amount];
	}
	
	public static int makeChange2(int amount, int[] coins) {
		int[] dp = new int[amount + 1];
		dp[0]= 1;
		for(int coin : coins) {
			for(int i = coin; i <  amount + 1; i ++) {
				dp[i] += dp[i-coin];
			}
			
		}
		return dp[amount];
	}
	
	public static int numRookCaptures(char[][] board) {
        int[] positions = findRook(board);
        
        int availableCaps = 0;
        
        availableCaps += upwards(positions[0], positions[1], board);
        availableCaps += downwards(positions[0], positions[1], board);
        availableCaps += left(positions[0], positions[1], board);
        availableCaps += right(positions[0], positions[1], board);
        
        
        return availableCaps;
    }
    
    public static int upwards(int row, int col, char[][]board) {
        for(int i = row; i >= 0; i --) {
            if(board[i][col] == 'p') return 1;
            
            else if(board[i][col] == 'B') return 0;
        }
        return 0;    
    }
    
    public static int downwards(int row, int col, char[][]board) {
        for(int i = row; i < board[0].length; i ++) {
            if(board[i][col] == 'p') return 1;
            
            else if(board[i][col] == 'B') return 0;
        }
        return 0;     
    }
    
    public static int left(int row, int col, char[][]board) {
        for(int i = col; i >= 0; i --) {
            if(board[row][i] == 'p') return 1;
            
            else if(board[row][i] == 'B') return 0;
        }
        return 0;   
    }
    
    public static int right(int row, int col, char[][]board) {
    	for(int i = col; i < board[0].length; i ++) {
            if(board[row][i] == 'p') return 1;
            
            else if(board[row][i] == 'B') return 0;
        }
        return 0; 
    }
    
    
    public static int[] findRook(char[][] board) {
        int[] position = {-1, -1};
        for(int i = 0; i < board.length; i ++) {
            for(int j = 0; j < board[0].length; j++) {
                if(board[i][j] == 'R') {
                    return new int[] {i,j};
                }
            }
        } 
        
        return position;
    }

	public static void setZeroes(int[][] matrix) {

		int[][] copyMat = new int[matrix.length][matrix[0].length];
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				copyMat[i][j] = matrix[i][j];
			}
		}

		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				if (matrix[i][j] == 0) {
					setRows(copyMat, i, j);
					setCols(copyMat, i, j);
				}
			}
		}

		matrix = copyMat;
	}

	public static void setRows(int[][] matrix, int row, int col) {
		for (int i = 0; i < matrix.length; i++) {
			matrix[i][col] = 0;
		}
	}

	public static void setCols(int[][] matrix, int row, int col) {
		for (int i = 0; i < matrix[row].length; i++) {
			matrix[row][i] = 0;
		}
	}

	public static int winningDay(int[] arr, int low, int high, HashMap<Integer, Integer> ds) {

		if (high == low) {
			if (ds.containsKey(arr[high])) {
				ds.put(arr[high], ds.get(arr[high]) + 1);
			} else {
				ds.put(arr[high], 1);
			}

			return arr[high];

		}

		int mid = (low + high) / 2;
		int left = winningDay(arr, low, mid, ds);
		int right = winningDay(arr, mid + 1, high, ds);

		if (ds.get(left) > ds.get(right)) {
			return left;
		} else {
			return right;
		}

	}

	public static boolean isSub(String s1, String s2) {

		if (s1.length() > s2.length()) {
			return false;
		}

		for (int i = 1; i < s2.length(); i++) {
			boolean isSub = true;
			for (int j = 1; j < s1.length(); j++) {
				if (s1.charAt(j) != s2.charAt(i + j - 1)) {
					isSub = false;
					break;
				}
			}

			if (isSub) {
				return true;
			}
		}

		return false;
	}

	public static int numSpecial(int[][] mat) {
		int numSpecialPositions = 0;
		for (int i = 0; i < mat.length; i++) {
			for (int j = 0; j < mat[i].length; j++) {
				if (mat[i][j] == 1 && (speacialRow(mat, j, i) && specialCol(mat, i, j))) {
					numSpecialPositions++;
				}
			}
		}

		return numSpecialPositions;
	}

	public static boolean speacialRow(int[][] mat, int col, int row) {
		for (int i = 0; i < mat.length; i++) {
			if (mat[i][col] != 0 && i != row)
				return false;
		}

		return true;
	}

	public static boolean specialCol(int[][] mat, int row, int col) {
		for (int i = 0; i < mat[0].length; i++) {
			if (mat[row][i] != 0 && i != col)
				return false;
		}

		return true;
	}

	public static int recursiveFindMax(int[] arr, int l, int h) {
		if (l == h) {
			return arr[l];
		}

		int mid = (l + h) / 2;
		int max1 = recursiveFindMax(arr, l, mid);
		int max2 = recursiveFindMax(arr, mid + 1, h);

		return Math.max(max1, max2);

	}

	public static boolean isSubstring(String s1, String s2) {
		if (s1.length() > s2.length()) {
			return false;
		}
		boolean isSub = true;
		for (int i = 0; i < s2.length(); i++) {
			isSub = true;
			for (int j = 0; j < s1.length(); j++) {
				if (s1.charAt(j) != s2.charAt(i + j)) {
					isSub = false;
					break;
				}
			}
		}

		return isSub;
	}

	public static int[] minAbsDiff(int[] arr1, int[] arr2) {
		int headA = 0;
		int headB = 0;
		int minDiff = Integer.MAX_VALUE;
		int[] smallestPair = { -1, -1 };

		while (headA < arr1.length && headB < arr2.length) {
			if (Math.abs(arr1[headA] - arr2[headB]) < minDiff) {
				minDiff = Math.abs(arr1[headA] - arr2[headB]);
				smallestPair = new int[] { headA, headB };
			}

			if (arr1[headA] < arr2[headB]) {
				headA++;
			} else {
				headB++;
			}
		}
		return smallestPair;
	}

//	public static int recursiveFindMax(int[] arr, int l, int h) {
//		if(l >= h) {
//			return arr[l];
//		}
//		
//		
//		int mid = (l+h)/2;
//		int max1 = recursiveFindMax(arr, l, mid);
//		int max2 = recursiveFindMax(arr, mid + 1, h);
//		
//		return Math.max(max1, max2);
//	}
	
	
	
	

	public static boolean detectCapitalUse(String word) {

		char[] charArray = word.toCharArray();

		return AllCaps(charArray) || noCaps(charArray) || firstLetterCaps(charArray);
	}

	public static boolean AllCaps(char[] charArray) {

		for (char c : charArray) {
			if (!(c >= 65 && c <= 90)) {
				return false;
			}
		}

		return true;
	}

	public static boolean noCaps(char[] charArray) {

		for (char c : charArray) {
			if ((c >= 65 && c <= 90)) {
				return false;
			}
		}

		return true;
	}

	public static boolean firstLetterCaps(char[] charArray) {
		if (!(charArray[0] >= 65 && charArray[0] <= 90)) {
			return false;
		}

		for (int i = 1; i < charArray.length; i++) {
			if ((charArray[i] >= 65 && charArray[i] <= 90)) {
				return false;
			}
		}

		return true;
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

		for (char c : allowed.toCharArray()) {
			charCountsAllowed[c - 'a']++;
		}

		// System.out.println(Arrays.toString(charCountsAllowed) +"\n\n");

		for (String word : words) {
			int[] tempCharCountsAllowed = new int[26];

			for (char c : word.toCharArray()) {
				tempCharCountsAllowed[c - 'a']++;
			}

			// System.out.println(Arrays.toString(tempCharCountsAllowed));
			boolean mismatch = false;
			for (int i = 0; i < 26 && !mismatch; i++) {
				mismatch = !(tempCharCountsAllowed[i] >= charCountsAllowed[i]);

			}
			if (!mismatch) {
				consistentStrings++;
			}

		}

		return consistentStrings;

	}

	public static int oddCells(int m, int n, int[][] indices) {
		int[][] matrix = new int[m][n];

		for (int[] instructions : indices) {
			changeRowValues(matrix, instructions[0]);
			changeColValues(matrix, instructions[1]);
		}

		return checkOdds(matrix);
	}

	public static int checkOdds(int[][] matrix) {
		int oddCounter = 0;
		for (int[] row : matrix) {
			for (int i : row) {
				if (i % 2 != 0) {
					oddCounter++;
				}
			}
		}

		return oddCounter;
	}

	public static void changeRowValues(int[][] matrix, int row) {
		for (int i = 0; i < matrix[row].length; i++) {
			matrix[row][i]++;
		}
	}

	public static void changeColValues(int[][] matrix, int col) {
		for (int i = 0; i < matrix.length; i++) {
			matrix[i][col]++;
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

			if (foundOnes.get(i).position - foundOnes.get(i - 1).position - 1 < k) {
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
