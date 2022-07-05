#include<iostream>
#include<vector>
using namespace std;

int birthday(int size, int arr[], int d, int m) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        int sum = 0;
        cout << "Pass : " << i << " " << endl;
        for (int j = i; j < i + m; j++) {
            cout << "Sum of " << arr[j] << " and ";
            sum += arr[j];
        }
        cout << "Sum is : " << sum << " " << endl;
        if (sum == d) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[5] = { 1, 2, 1, 2, 3 };
    birthday(5, arr , 2, 3);
    return 0;
}
