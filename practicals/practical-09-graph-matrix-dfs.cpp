#include <iostream>
using namespace std;


int G[20][20], visited[20], n;

void DFS(int i)
{
    int j;

    cout << i << " ";
    visited[i] = 1;

    for (j = 0; j < n; j++)
    {
        if (!visited[j] && G[i][j] == 1)
            DFS(j);
    }
}

int main()
{
    int i, j;

    cout << "\nEnter the number of vertices: ";
    cin >> n;

    cout << "\nEnter the adjacency matrix of the graph:\n";

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
           cin >> G[i][j];

    for (i = 0; i < n; i++)
        visited[i] = 0;
    cout<<"\nDFS traversal is \n";
    DFS(0);

    return 0;
}

// Output :-
// PS E:\Collage\Practical\DSA> cd "e:\Collage\Practical\DSA\practicals\om_pawar\" ; if ($?) { g++ practical-09-graph-matrix-dfs.cpp -o practical-09-graph-matrix-dfs } ; if ($?) { .\practical-09-graph-matrix-dfs }

// Enter the number of vertices: 4

// Enter the adjacency matrix of the graph:
// 0 1 1 0
// 1 0 0 1
// 1 0 0 1
// 0 1 1 0

// DFS traversal is 
// 0 1 3 2