#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        bool check = true;
        while (check) {
            int counter = 0;
            for (int j = 0; j < m; j++) {
                for (int i = 0; i < n; i++) {
                    if (n != 1 && m != 1) {
                        if (i == 0 && j == 0) {
                            if (a[i][j] > max(a[i+1][j], a[i][j+1])) {
                                a[i][j] = max(a[i+1][j], a[i][j+1]);
                                counter++;
                            }
                        } else if (i == n - 1 && j == 0) {
                            if (a[i][j] > max(a[i-1][j], a[i][j+1])) {
                                a[i][j] = max(a[i-1][j], a[i][j+1]);
                                counter++;
                            }
                        } else if (i == 0 && j == m - 1) {
                            if (a[i][j] > max(a[i+1][j], a[i][j-1])) {
                                a[i][j] = max(a[i+1][j], a[i][j-1]);
                                counter++;
                            }
                        } else if (i == n - 1 && j == m - 1) {
                            if (a[i][j] > max(a[i-1][j], a[i][j-1])) {
                                a[i][j] = max(a[i-1][j], a[i][j-1]);
                                counter++;
                            }
                        } else if (i == 0 && j != 0 && j != m - 1) {
                            if (a[i][j] > max(a[i][j-1], max(a[i][j+1], a[i+1][j]))) {
                                a[i][j] = max(a[i][j-1], max(a[i][j+1], a[i+1][j]));
                                counter++;
                            }
                        } else if (i == n - 1 && j != 0 && j != m - 1) {
                            if (a[i][j] > max(a[i][j-1], max(a[i][j+1], a[i-1][j]))) {
                                a[i][j] = max(a[i][j-1], max(a[i][j+1], a[i-1][j]));
                                counter++;
                            }
                        } else if (j == 0 && i != 0 && i != n - 1) {
                            if (a[i][j] > max(a[i][j+1], max(a[i+1][j], a[i-1][j]))) {
                                a[i][j] = max(a[i][j+1], max(a[i+1][j], a[i-1][j]));
                                counter++;
                            }
                        } else if (j == m - 1 && i != 0 && i != n - 1) {
                            if (a[i][j] > max(a[i][j-1], max(a[i+1][j], a[i-1][j]))) {
                                a[i][j] = max(a[i][j-1], max(a[i+1][j], a[i-1][j]));
                                counter++;
                            }
                        } else {
                            if (a[i][j] > max(a[i+1][j], max(a[i-1][j], max(a[i][j+1], a[i][j-1])))) {
                                a[i][j] = max(a[i+1][j], max(a[i-1][j], max(a[i][j+1], a[i][j-1])));
                                counter++;
                            }
                        }
                    } else if (n == 1 && m != 1) {
                        // Special case for a single row (n == 1)
                        if (j == 0) {
                            if (a[i][j] > a[i][j+1]) {
                                counter++;
                                a[i][j] = a[i][j+1];
                            }
                        } else if (j == m - 1) {
                            if (a[i][j] > a[i][j-1]) {
                                counter++;
                                a[i][j] = a[i][j-1];
                            }
                        } else {
                            if (a[i][j] > max(a[i][j+1], a[i][j-1])) {
                                counter++;
                                a[i][j] = max(a[i][j+1], a[i][j-1]);
                            }
                        }
                    } else if (m == 1 && n != 1) {
                        if (i == 0) {
                            if (a[i][j] > a[i+1][j]) {
                                counter++;
                                a[i][j] = a[i+1][j];
                            }
                        } else if (i == n - 1) {
                            if (a[i][j] > a[i-1][j]) {
                                counter++;
                                a[i][j] = a[i-1][j];
                            }
                        } else {
                            if (a[i][j] > max(a[i+1][j], a[i-1][j])) {
                                counter++;
                                a[i][j] = max(a[i+1][j], a[i-1][j]);
                            }
                        }
                    }
                }
            }
            if (counter == 0) {
                check = false;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

}
