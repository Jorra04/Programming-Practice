package easy;

import java.util.ArrayList;
class Graph
{
    // A user define class to represent a graph.
    // A graph is an array of adjacency lists.
    // Size of array will be V (number of vertices
    // in graph)
    int V;
    ArrayList<ArrayList<Integer> > adjListArray;
//    int size = 0;
    // constructor
    Graph(int V)
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
 
    int DFSUtil(int v, boolean[] visited, int size)
    {
        // Mark the current node as visited and print it
        visited[v] = true;
        
        // Recur for all the vertices
        // adjacent to this vertex
        for (int x : adjListArray.get(v)) {
            if (!visited[x]) {
            	size ++;
                size = Math.max(size, DFSUtil(x, visited, size));
            }
        }
        
        return size;
    }
    boolean connectedComponents()
    {
        // Mark all the vertices as not visited
    	ArrayList<Integer> connectedLengths = new ArrayList();
        boolean[] visited = new boolean[V];
        for (int v = 0; v < V; ++v) {
            if (!visited[v]) {
   
                connectedLengths.add(DFSUtil(v, visited, 0));
            }
        }
        
        for(int i = 1; i < connectedLengths.size(); i ++) {
        	if(connectedLengths.get(i) != connectedLengths.get(i -1)) {
        		return false;
        	}
        }
        
        return true;
    }
 
    // Driver code
    public static void main(String[] args)
    {
        // Create a graph given in the above diagram
        Graph g = new Graph(
            6); // 5 vertices numbered from 0 to 4
 
        g.addEdge(1, 0);
        g.addEdge(1, 2);
        g.addEdge(3, 4);
        g.addEdge(4, 5);
        System.out.println(
            "All disconected components have the same length: " + g.connectedComponents());
        
    }
}