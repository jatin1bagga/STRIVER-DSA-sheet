#include <vector>
#include <algorithm>

std::vector<int> getSecondOrderElements(int n, std::vector<int> a) {
    int max = a[0];
    int max2;

    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] != max && a[i] > max2) {
            max2 = a[i];
        }
    }

    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    int min2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] != min &&  a[i] < min2) {
            min2 = a[i];
        }
    }

    vector<int> ans;
    ans.push_back(max2);
    ans.push_back(min2);
    return ans;
}
