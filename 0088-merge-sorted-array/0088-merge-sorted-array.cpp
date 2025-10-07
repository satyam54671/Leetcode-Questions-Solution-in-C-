class Solution {
public:
    void swapIfGreater(vector<int>& arr1, vector<int>& arr2, int ind1, int ind2) {
        if (arr1[ind1] > arr2[ind2]) {
            swap(arr1[ind1], arr2[ind2]);
        }
    }

    void merge(vector<int>& arr1, int n, vector<int>& arr2, int m) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                if (left < n && right >= n) {
                    swapIfGreater(arr1, arr2, left, right - n);
                }
                else if (left >= n) {
                    swapIfGreater(arr2, arr2, left - n, right - n);
                }
                else {
                    swapIfGreater(arr1, arr1, left, right);
                }

                left++;
                right++;
            }

            if (gap == 1)
                break;

            gap = (gap / 2) + (gap % 2);
        }
        for (int i = 0; i < m; ++i) arr1[n + i] = arr2[i];
    }
};
