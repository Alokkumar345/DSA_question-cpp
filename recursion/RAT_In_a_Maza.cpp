
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, int n,
            vector<vector<int>>& visited,
            vector<vector<int>>& m) {
    if (x >= 0 && x < n &&
        y >= 0 && y < n &&
        visited[x][y] == 0 &&
        m[x][y] == 1) {
        return true;
    }
    return false;
}

void solve(vector<vector<int>>& m, int n,
           vector<string>& ans, int x, int y,
           vector<vector<int>>& visited, string path) {

    // Base case: destination reached
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // Down
    int newx = x + 1;
    int newy = y;

    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Left
    newx = x;
    newy = y - 1;

    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Right
    newx = x;
    newy = y + 1;

    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Up
    newx = x - 1;
    newy = y;

    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Backtrack
    visited[x][y] = 0;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> m(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    vector<string> ans;
    vector<vector<int>> visited(n, vector<int>(n, 0));

    // Check starting cell
    if (n > 0 && m[0][0] == 1 && m[n - 1][n - 1] == 1) {
        solve(m, n, ans, 0, 0, visited, "");
    }

    sort(ans.begin(), ans.end());

    if (ans.empty()) {
        cout << "No path exists";
    } else {
        for (string path : ans) {
            cout << path << endl;
        }
    }

    return 0;
}