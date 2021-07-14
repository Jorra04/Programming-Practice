package easy;

public class Job implements Comparable<Job> {
	int start;
	int end;
	int profit;
	
	
	public Job(int start, int end, int profit) {
		this.start = start;
		this.end = end;
		this.profit = profit;
	}
	
	
	public String toString() {
		return "(" + this.start + ", " + this.end + ", " + this.profit + ")";
	}


	@Override
	public int compareTo(Job o) {
		// TODO Auto-generated method stub
		return this.end - o.end;
	}
}
