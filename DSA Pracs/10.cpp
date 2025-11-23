#include <iostream> 
using namespace std; 
int main() { 
 int n, i, j, k, row, col, mincost = 0, min; 
 char op; //character variable named op is declared.
//It stores a single character, such as:
//y,n
 cout << "Enter number of vertices: "; 
 cin >> n; 
 //User enters how many nodes the graph has.
 int cost[n][n]; //stores edge weights
 int visit[n]; //keeps track of which vertices are already in the MST
    // Initialize visit[] to 0
    //Because Prim’s algorithm needs to know which vertices are already included in the MST so we use this .
    for (i = 0; i < n; i++) {
        visit[i] = 0;
    }
// Initialize cost matrix with -1 (no edge)
//-1 means no connection between nodes yet.//This sets all edges to no edge yet.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cost[i][j] = -1;
        }
    }

    // Accept edges
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            cout << "Do you want an edge between " << i + 1 << " and " << j + 1 << "? (y/n): ";
            cin >> op;

            if (op == 'y' || op == 'Y') {
                cout << "Enter weight: ";
                cin >> cost[i][j];
                cost[j][i] = cost[i][j];   // Undirected graph
            }
        }
    }
//idhr se upar sab cost ke naam aab neeche sab visit ke naam
    // Start with first node
  // Start with the first node
visit[0] = 1;

// Repeat n - 1 times to select n - 1 edges
for (k = 0; k < n - 1; k++) {

    min = 999;  // assume very large value

    // Find the smallest edge from visited → unvisited
    for (i = 0; i < n; i++) {
        
        if (visit[i] == 1) {  // consider only visited nodes

            for (j = 0; j < n; j++) {

                // j must be unvisited, there must be an edge,
                // and weight must be smaller than current min
                if (visit[j] == 0 && cost[i][j] != -1 && cost[i][j] < min) {

                    min = cost[i][j];
                    row = i;
                    col = j;

                }
            }
        }
    }

    // Add the selected edge to MST
    mincost += min;//It adds the weight of the selected smallest edge to the total MST cost.
    visit[col] = 1;//This marks vertex col as visited or included in the MST.

    // Mark the used edge as removed
    cost[row][col] = cost[col][row] = -1;

    cout << row + 1 << " -> " << col + 1
         << " (weight = " << min << ")\n";
}

    cout << "Minimum cost of Spanning Tree: " << mincost << endl; 
    return 0; 
}
