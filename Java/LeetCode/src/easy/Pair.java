package easy;

public class Pair {
	int key;
    int position;
    
    
    public Pair(int key, int position) {
        this.key = key;
        this.position = position;
    }
    
    
    @Override
    public String toString(){
        return "{" + this.key + "," + this.position + "}";
    }
}
