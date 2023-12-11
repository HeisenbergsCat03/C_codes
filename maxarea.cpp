#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int maxArea(vector<int>& a) {
    int n = a.size();
    int ans = 0;
    int i = 0;
    
    a.push_back(0);
    
    stack<int> s;
    
    while (i < n + 1) {
        if (s.empty() || a[s.top()] <= a[i]) {
            s.push(i++);
        } else {
            int tp = s.top();
            s.pop();
            int width = s.empty() ? i : i - s.top() - 1;
            int area = a[tp] * width;
            ans = max(ans, area);
        }
    }
    
    return ans;
}

int main() {
    vector<int> a = {2, 1, 5, 6, 2, 3};
    cout << maxArea(a) << endl;
    
    return 0;
}
