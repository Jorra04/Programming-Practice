package easy;

import java.util.ArrayList;
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
    
    public void depthFirst() {
  
    	for(ArrayList<Integer> list : this.adjListArray) {
    		for(int vertex : list) {
    			
    		}
    	}
    }
    
    
    public void depthFirstVisit(int vertex) {
    	
    }
    
    
    
    
    
    
    
    
    
    
    
 
    // Driver code
    public static void main(String[] args)
    {
        // Create a graph given in the above diagram
        Graph g = new Graph(
            5); // 5 vertices numbered from 0 to 4
 
        g.addEdge(1, 0);
        g.addEdge(1, 2);
        g.addEdge(3, 4);
        System.out.println(
            "Following are connected components");
    }
}