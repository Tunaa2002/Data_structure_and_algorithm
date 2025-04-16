#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));

        // Đọc ma trận
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }

        // dp[mask] sẽ lưu tổng lớn nhất có thể đạt được khi đã chọn các cột được biểu diễn bởi mask
        vector<int> dp(1 << n, -1);
        dp[0] = 0; // Trạng thái không chọn cột nào có tổng bằng 0

        // Duyệt qua tất cả các trạng thái bitmask
        for (int mask = 0; mask < (1 << n); ++mask) {
            int row = __builtin_popcount(mask); // Đếm số lượng bit 1 trong mask (tương ứng với số hàng đã chọn)
            if (row >= n) continue; // Không cần xử lý nếu đã chọn đủ hàng
            
            for (int col = 0; col < n; ++col) {
                if (!(mask & (1 << col))) { // Nếu cột chưa được chọn trong mask
                    int new_mask = mask | (1 << col);
                    dp[new_mask] = max(dp[new_mask], dp[mask] + matrix[row][col]);
                }
            }
        }

        // Kết quả là dp[(1 << n) - 1], trạng thái đã chọn đủ n cột
        cout << dp[(1 << n) - 1] << endl;
    }

    return 0;
}
