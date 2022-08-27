import java.util.*;

// BFS program for undirected and non weighted graph
public class BFS {
    private int V; // No. of vertices
    private static LinkedList<Character> adj[]; // Adjacency Lists
    private static HashMap<Character, Integer> hm = new HashMap<>(); // distance of each character
    private static ArrayList<Character> arr = new ArrayList<>(); // position of character

    // Constructor
    BFS(int v) {
        V = v;
        adj = new LinkedList[v];
        for (int i = 0; i < v; ++i)
            adj[i] = new LinkedList();
    }

    void addEdge(int v, char w) {
        adj[v].add(w);
        hm.put(w, Integer.MAX_VALUE); // initializing infinite to all vertex

    }

    void doBFS(int s) {
        boolean visited[] = new boolean[V]; // same working as we do in white, grey, black coloring.
        char sourceVertexName = arr.get(s);
        LinkedList<Integer> queue = new LinkedList<Integer>();

        visited[s] = true;
        queue.add(s);// adding source vertex to queue.
        hm.put(sourceVertexName, 0); // putting source vertex distance as zero.

        int distance = 0; // keeping track of all vertexes from source vertex.

        while (queue.size() != 0) {

            s = queue.poll(); // removing vertex from front queue.
            distance = (hm.get(arr.get(s)) + 1); // increasing distance by 1 for next vertexes.

            Iterator<Character> i = adj[s].listIterator(); // for traversing purpose

            while (i.hasNext()) {

                char adjacencyVertex = i.next();
                int position = arr.indexOf(adjacencyVertex);

                if (!visited[position]) {
                    visited[position] = true;
                    queue.add(position);
                    hm.put(adjacencyVertex, distance);

                    System.out.print("From " + sourceVertexName + " to " + arr.get(position) + " distance is: "
                            + hm.get(arr.get(position)) + ",  ");
                }
            }
            System.out.println();

        }
    }

    public static void main(String args[]) {

        // DYNAMIC INPUTS / FROM USER

        System.out.println("BFS");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of vertices");
        int v = sc.nextInt();

        BFS obj = new BFS(v);

        for (int i = 0; i < v; i++) {
            System.out.println((i + 1) + ") Enter start vertex name");
            char startVertexName = sc.next().charAt(0);
            arr.add(startVertexName);

            System.out.println("How many vertices are connected to " + startVertexName + " vertex ?");
            int destVertexCount = sc.nextInt();

            if (destVertexCount == 0) {
                obj.addEdge(i, startVertexName);
                continue;
            }

            int j = 0;
            while (j < destVertexCount) {
                System.out.println((j + 1) + ") Enter destination vertex name");
                char destVertexName = sc.next().charAt(0);

                obj.addEdge(i, destVertexName);

                j++;

            }

        }

        // for (int i = 0; i < 8; i++) {
        // // System.out.print(arr.get(i) + " ");
        // System.out.println(adj[i]);
        // }

        System.out.println(hm);
        long startTime = System.nanoTime();

        obj.doBFS(1);

        long endTime = System.nanoTime();
        long totalTime = endTime - startTime;
        double seconds = (double) totalTime / 1000000000.0;

        System.out.println("Time taken for BFS: " + seconds);

        System.out.println(hm);

        sc.close();

        // STATIC INPUTS

        // BFS g = new BFS(8);
        // // r
        // g.addEdge(0, 's');
        // g.addEdge(0, 'v');

        // arr.add('r');

        // // s
        // g.addEdge(1, 'r');
        // arr.add('s');
        // g.addEdge(1, 'w');

        // // t
        // g.addEdge(2, 'w');
        // g.addEdge(2, 'x');
        // g.addEdge(2, 'u');
        // arr.add('t');

        // // u
        // g.addEdge(3, 't');
        // g.addEdge(3, 'y');
        // arr.add('u');

        // // v->null
        // g.addEdge(4, 'v');
        // arr.add('v');

        // // w
        // g.addEdge(5, 's');
        // g.addEdge(5, 't');
        // g.addEdge(5, 'x');
        // arr.add('w');

        // // x
        // g.addEdge(6, 'w');
        // g.addEdge(6, 't');
        // g.addEdge(6, 'y');
        // arr.add('x');

        // // y
        // g.addEdge(7, 'x');
        // g.addEdge(7, 'u');
        // arr.add('y');

        // System.out.println("Following is Breadth First Traversal " +
        // "(starting from vertex 1)");

        // // for (int i = 0; i < 8; i++) {
        // // // System.out.print(arr.get(i) + " ");
        // // // System.out.println(adj[i]);
        // // }

        // // System.out.println(hm);
        // g.doBFS(1);
        // System.out.println(hm);

    }

}
