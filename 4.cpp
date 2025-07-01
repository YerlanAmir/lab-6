#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countValue(const vector<int>& arr, int value) {
    return count(arr.begin(), arr.end(), value);
}
int findMin(const vector<int>& arr) {
    return *min_element(arr.begin(), arr.end());
}
int findMax(const vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >>x;
    int count = countValue(arr, x);
    int min = findMin(arr);
    int max= findMax(arr);
    cout << "Count of " <<x << ": " <<count << endl;
    cout << "Min: " << min<< endl;
    cout << "Max: " << max << endl;

    return 0;
}