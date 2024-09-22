class Solution {
public:
    // Helper function to calculate the maximum height a worker can reduce in maxTime
    long long maxHeightReduced(int time, long long maxTime) {
        // Solve x(x + 1)/2 * time <= maxTime using quadratic formula
        long long left = 0, right = 1e9; // Large enough upper bound for binary search
        while (left < right) {
            long long mid = left + (right - left + 1) / 2;
            if (mid * (mid + 1) / 2 <= maxTime / time) {
                left = mid; // mid is a valid height reduction, try larger values
            } else {
                right = mid - 1; // mid is too large, try smaller values
            }
        }
        return left;
    }

    // Helper function to check if the mountain can be reduced to 0 within a given time
    bool canReduceMountain(int mountainHeight, vector<int>& workerTimes, long long maxTime) {
        long long totalHeightReduced = 0;
        for (int time : workerTimes) {
            totalHeightReduced += maxHeightReduced(time, maxTime);
            if (totalHeightReduced >= mountainHeight) {
                return true;
            }
        }
        return totalHeightReduced >= mountainHeight;
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        // Binary search for the minimum time
        long long low = 0;
        long long high = 1e18;  // Large enough upper bound for time
        long long result = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (canReduceMountain(mountainHeight, workerTimes, mid)) {
                result = mid;
                high = mid - 1;  // Try to find a smaller time
            } else {
                low = mid + 1;  // Increase the time
            }
        }

        return result;
    }

};