#include <iostream>
#include <vector>
using namespace std;

int findMissingNo(const vector<int>& arr, int n) {
    
    int total_s = n * (n + 1) / 2;

    int array_sum = 0;
    for (int num : arr) {
        array_sum += num;
    }

    
    return total_s - array_sum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5};
    int n = 5; 
    int missing = findMissingNo(arr, n);
    cout << "The missing no is: " << missing << endl;
    return 0;
}

