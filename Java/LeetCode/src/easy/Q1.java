package easy;

import java.util.*;

public class Q1 {

	int V;
	ArrayList<ArrayList<Integer>> adjListArray;

//	    int size = 0;
	// constructor
	Q1(int V) {
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

	void addEdge(int src, int dest) {
		// Add an edge from src to dest.
		adjListArray.get(src).add(dest);

		// Since graph is undirected, add an edge from dest
		// to src also
		adjListArray.get(dest).add(src);
	}

	int bfs(int source) {
		// To store length of the shortest cycle
        int ans = Integer.MAX_VALUE;
 
        // For all vertices
        for (int i = 0; i < V; i++)
        {
 
            // Make distance maximum
            int[] dist = new int[V];
            boolean[] visited = new boolean[V];
            // Take a imaginary parent
            int[] par = new int[V];
            Arrays.fill(par, -1);
 
            // Distance of source to source is 0
            dist[i] = 0;
            Queue<Integer> q = new LinkedList<>();
 
            // Push the source element
            q.add(i);
 
            // Continue until queue is not empty
            while (!q.isEmpty())
            {
 
                // Take the first element
                int x = q.poll();
 
                // Traverse for all it's childs
                for (int child : adjListArray.get(x))
                {
                    // If it is not visited yet
                    if (!visited[child])
                    {
                    	visited[child] = true;
                        // Increase distance by 1
                        dist[child] = 1 + dist[x];
 
                        // Change parent
                        par[child] = x;
 
                        // Push into the queue
                        q.add(child);
                    } else if (par[x] != child && par[child] != x )
                        ans = Math.min(ans, dist[x] + dist[child] + 1);
                }
            }
        }
 
        // If graph contains no cycle
        if (ans == Integer.MAX_VALUE)
            return -1;
 
        // If graph contains cycle
        else
            return ans;
	}

	public static void main(String[] args) {
		// Create a graph given in the above diagram
		Q1 g = new Q1(7); // 5 vertices numbered from 0 to 4

		g.addEdge(0, 1);
		g.addEdge(0, 6);
		g.addEdge(0, 3);
		g.addEdge(1, 2);
		g.addEdge(2, 3);
		g.addEdge(3, 4);
		g.addEdge(4, 5);
		g.addEdge(5, 6);

		System.out.println(g.bfs(0));
	}

}
