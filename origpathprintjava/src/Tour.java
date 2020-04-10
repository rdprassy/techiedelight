import java.util.ArrayList;
import java.util.List;

// Object of Node class stores cell coordinates of the matrix
class Node
{
    int first, second;

    public Node(int first, int second) {
        this.first = first;
        this.second = second;
    }

    @Override
    public boolean equals(Object ob) {
        Node node = (Node) ob;
        return (first == node.first && second == node.second);
    }

    @Override
    public int hashCode() {
        return 31 * first + second;
    }
}

class Tour
{
    // N x N matrix
    private static final int N = 10;

    // Below arrays details all 4 possible movements from a cell
    private static final int row[] = { -1, 0, 0, 1 };
    private static final int col[] = { 0, -1, 1, 0 };

    // Function to check if it is possible to go to position pt
    // from current position. The function returns false if pt is
    // not a valid position or it is already visited
    private static boolean isValid(List<Node> path, Node pt)
    {
        return pt.first >= 0 && pt.first < N &&
                pt.second >= 0 && pt.second < N &&
                !path.contains(pt);
    }

    // Function to print the complete path from source to destination
    private static void printPath(List<Node> path)
    {
        for (Node cell: path) {
            System.out.print("(" + cell.first + ", " + cell.second + ") ");
        }
    }

    // Find route in a matrix mat from source cell (0, 0) to
    // destination cell (N-1, N-1)
    public static boolean findPath(int mat[][], List<Node> path, Node curr)
    {
        // include current vertex in the path
        path.add(curr);

        // if destination is found, return true
        if (curr.first == N - 1 && curr.second == N - 1)
            return true;

        // value of current cell
        int n = mat[curr.first][curr.second];

        // check all 4 possible movements from current cell
        // and recur for each valid movement
        for (int i = 0; i < 4; i++)
        {
            // get next position using value of current cell
            int x = curr.first + row[i] * n;
            int y = curr.second + col[i] * n;

            Node next = new Node(x, y);

            // check if it is possible to go to position (x, y)
            // from current position
            if (isValid(path, next) && findPath(mat, path, next))
                return true;
        }

        // Backtrack - exclude current vertex in the path
        path.remove(path.size() - 1);
        return false;
    }

    public static void main(String[] args)
    {
        int mat[][] =
                {
                        { 7, 1, 3, 5, 3, 6, 1, 1, 7, 5 },
                        { 2, 3, 6, 1, 1, 6, 6, 6, 1, 2 },
                        { 6, 1, 7, 2, 1, 4, 7, 6, 6, 2 },
                        { 6, 6, 7, 1, 3, 3, 5, 1, 3, 4 },
                        { 5, 5, 6, 1, 5, 4, 6, 1, 7, 4 },
                        { 3, 5, 5, 2, 7, 5, 3, 4, 3, 6 },
                        { 4, 1, 4, 3, 6, 4, 5, 3, 2, 6 },
                        { 4, 4, 1, 7, 4, 3, 3, 1, 4, 2 },
                        { 4, 4, 5, 1, 5, 2, 3, 5, 3, 5 },
                        { 3, 6, 3, 5, 2, 2, 6, 4, 2, 1 }
                };

        List<Node> path = new ArrayList<>();
        Node source = new Node(0, 0);

        // Find route in a matrix mat from source cell (0, 0) to
        // destination cell (N-1, N-1)
        if (findPath(mat, path, source))
            printPath(path);
    }
}