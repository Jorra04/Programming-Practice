package easy;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
 
// A class to store a graph edge
class Edge
{
    int source, dest;
 
    public Edge(int source, int dest)
    {
        this.source = source;
        this.dest = dest;
    }
}
 
// A class to represent a graph object
class GraphN
{
    // A list of lists to represent an adjacency list
    List<List<Integer>> adjList = null;
 
    // Constructor
    GraphN(List<Edge> edges, int N)
    {
        adjList = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            adjList.add(new ArrayList<>());
        }
 
        // add edges to the undirected graph
        for (Edge edge: edges)
        {
            int src = edge.source;
            int dest = edge.dest;
 
            adjList.get(src).add(dest);
            adjList.get(dest).add(src);
        }
    }
}
 
class TestGraph
{
    // Function to perform DFS traversal on the graph on a graph
    public static void DFS(GraphN graph, int v, boolean[] discovered)
    {
        // mark the current node as discovered
        discovered[v] = true;
 
        // print the current node
        System.out.print(v + " ");
 
        // do for every edge `v —> u`
        for (int u: graph.adjList.get(v))
        {
            // if `u` is not yet discovered
            if (!discovered[u]) {
                DFS(graph, u, discovered);
            }
        }
    }
 
    public static void main(String[] args)
    {
        // List of graph edges as per the above diagram
        List<Edge> edges = Arrays.asList(
                // Notice that node 0 is unconnected
                new Edge(1, 2), new Edge(1, 3), new Edge(2, 3), new Edge(2, 4)
        );
 
        // total number of nodes in the graph (0–12)
        final int N = 5;
 
        // build a graph from the given edges
        GraphN graph = new GraphN(edges, N);
 
        // to keep track of whether a vertex is discovered or not
        boolean[] discovered = new boolean[N];
 
        // Perform DFS traversal from all undiscovered nodes to
        // cover all unconnected components of a graph
        for (int i = 0; i < N; i++)
        {
            if (!discovered[i]) {
                DFS(graph, i, discovered);
            }
        }
    }
}
