#include<bits/stdc++.h>
using namespace std;

int f(int day, int last, vector<vector<int>>& points, vector<vector<int>>& dp) {
    if (day == 0) {
        int maxi = 0;
        for (int task = 0; task < 3; task++) {
            if (task != last) {
                maxi = max(maxi, points[0][task]);
            }
        }
        return maxi;
    }

    if (dp[day][last] != -1) {
        return dp[day][last];
    }

    int maxi = 0;
    for (int task = 0; task < 3; task++) {
        if (task != last) {
            int point = points[day][task] + f(day - 1, task, points, dp);
            maxi = max(maxi, point);
        }
    }
    return dp[day][last] = maxi;
}

int ninjaTraining(int n, vector<vector<int>>& points) {
    vector<vector<int>> dp(n, vector<int>(3, -1));

    int maxi = 0;
    for (int task = 0; task < 3; task++) {
        int point = points[n - 1][task] + f(n - 2, task, points, dp);
        maxi = max(maxi, point);
    }
    return maxi;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> points[i][j];
            }
        }
        int result = ninjaTraining(n, points);
        cout << result << endl;
    }

    return 0;
}
