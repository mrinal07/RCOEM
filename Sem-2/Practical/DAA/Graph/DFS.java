import java.io.*;
import java.util.*;

public class DFS {

    private int V; // No. of vertices

    // Array of lists for
    // Adjacency List Representation
    private LinkedList<Integer> adj[];

    // Constructor
    @SuppressWarnings("unchecked")
    DFS(int v) {
        V = v;
        adj = new LinkedList[v];
        for (int i = 0; i < v; ++i)
            adj[i] = new LinkedList();
    }

    // Function to add an edge into the graph
    void addEdge(int v, int w) {
        adj[v].add(w); // Add w to v's list.
    }

    // A function used by DFS
    void doDFS(int v, boolean visited[]) {
        // Mark the current node as visited and print it
        visited[v] = true;
        System.out.print(v + " ");

        // Recur for all the vertices adjacent to this
        // vertex
        Iterator<Integer> i = adj[v].listIterator();
        while (i.hasNext()) {
            int n = i.next();
            if (!visited[n])
                doDFS(n, visited);
        }
    }

    void doDFSHelper(int v) {
        // Mark all the vertices as
        // not visited(set as
        // false by default in java)
        boolean visited[] = new boolean[V];

        doDFS(v, visited);
    }

    // Driver Code
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of vertices");
        int vertex = sc.nextInt();
        
        System.out.println("Enter number of edges");
        int edge = sc.nextInt();

        DFS g = new DFS(vertex);



        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);

        System.out.println(
                "Following is Depth First Traversal "
                        + "(starting from vertex 2)");

        g.doDFSHelper(2);
    }

}