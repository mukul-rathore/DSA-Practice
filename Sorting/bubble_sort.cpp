#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr) {
    int n = arr.size();
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr);
    cout << "After Sorting : " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " "; 
    }
    return 0;
} 