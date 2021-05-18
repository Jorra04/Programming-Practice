package easy;

public class LeetCodeEasy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}
	
	
	public static void subString(char str[], int n) {
        // Pick starting point
        for(int i = 0; i < n; i ++) {
            String currentSubStr = "";
            for(int j = i; j < n; j ++) {
                currentSubStr += str[j];
            }
            
            System.out.println(currentSubStr);
        }
    }

}
