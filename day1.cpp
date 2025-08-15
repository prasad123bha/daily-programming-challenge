#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int>& arr) {
    int l = 0;                 
    int m = 0;                 
    int h = arr.size() - 1;   

    while (m <= h) {
        if (arr[m] == 0) {
            swap(arr[l], arr[m]);
            l++;
            m++;
        } else if (arr[m] == 1) {
            
            m++;
        } else { 
            swap(arr[m], arr[h]);
            h--;
        }
    }
}


int main() {
    vector<int> arr = {0, 1, 2, 1, 0, 2, 1, 0};
    sort012(arr);


    for (int num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}
