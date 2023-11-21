#include <bits/stdc++.h>
using namespace std;

// Function to solve the problem for a single test case
int solve() {
    // Input the number of elements (n) and the target value (y)
    int n, y;
    cin >> n >> y;

    // Input the array of integers
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Initialize 'out' with the first element of the array
    int out = a[0];

    // Iterate through the array to find bitwise OR of all elements
    for (int i = 0; i < n; i++) {
        out = out | a[i];
    }

    // Check if the bitwise OR result is greater than the target value
    if (out > y) {
        cout << "-1" << endl;
        return 0;
    } else {
        // Calculate the difference between the target value and the bitwise OR result
        int diff = y - out;
        int diff_copy = diff;

        // Iterate while the difference is greater than or equal to 1
        while (diff >= 1) {
            // Find the highest bit set in the difference
            int power = log2(diff);
            
            // Create a mask with only the bit at 'power' set to 1
            int mask = 1 << power;

            // Check if setting this bit in 'out' maintains its value
            if ((out | mask) == out) {
                cout << "-1" << endl;
                return 0;
            } else {
                // Set the bit at 'power' in 'out'
                out = out | mask;

                // Update the difference
                diff = y - out;
            }
        }

        // Output the original difference
        cout << diff_copy << endl;
        return 0;
    }
}

// Main function
int main() {
    // Input the number of test cases
    int t;
    cin >> t;

    // Iterate through each test case and call the solve function
    while (t--) {
        solve();
    }

    return 0;
}
