package easy;

import java.util.ArrayList;
import java.util.Arrays;
class GraphAlgorithms
{
    // A user define class to represent a graph.
    // A graph is an array of adjacency lists.
    // Size of array will be V (number of vertices
    // in graph)
    int V;
    ArrayList<ArrayList<Integer> > adjListArray;
    int size = 0;
    // constructor
    GraphAlgorithms(int V)
    {
        this.V = V;
        // define the size of array as
        // number of vertices
        adjListArray = new ArrayList<>();
 
        // Create a new list for each vertex
        // such that adjacent nodes can be stored
 
        for (int i = 0; i < V; i++) {
            adjListArray.add(i, new ArrayList<>());
        }
    }
 
    // Adds an edge to an undirected graph
    void addEdge(int src, int dest)
    {
        // Add an edge from src to dest.
        adjListArray.get(src).add(dest);
 
        // Since graph is undirected, add an edge from dest
        // to src also
        adjListArray.get(dest).add(src);
    }
    
    //Actual dfs code and stuff...
    
    public void helper() {
    	int[] visited = new int[V];
    	int[] parents = new int[V];
    	parents[0] = -1;
    	for(int i = 0; i < visited.length; i ++) {
    		if(visited[i] == 0) {
    			dfs( i, visited, parents);
    		}
    	}
    	
    	System.out.println(Arrays.toString(parents));
    }
    
    public int dfs(int u, int[] visited, int[] parents) {
    	
    	visited[u] = 1; //visiting
    	
    	for(int v : adjListArray.get(u)) {
    		if(visited[v] == 0) {
    			parents[v] = u;
    			dfs(v, visited, parents);
    		} else if(visited[v] == 1 && parents[v] != u) {
    			System.out.println("cycle");
    		}
    	}
    	
    	visited[u] = 2;
    	
    	return 1;
    }
    
    
    
    
    
    
    
    
    
    
 
    // Driver code
    public static void main(String[] args)
    {
        // Create a graph given in the above diagram
        GraphAlgorithms g = new GraphAlgorithms(
            5); // 5 vertices numbered from 0 to 4
 
        g.addEdge(1, 0);
        g.addEdge(1, 2);
        g.addEdge(3, 4);
        System.out.println(
            "Following are connected components");
        
        g.helper();
    }
}