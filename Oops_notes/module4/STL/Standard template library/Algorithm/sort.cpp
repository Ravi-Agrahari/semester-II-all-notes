#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

bool cmp2(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first)
        return a.first > b.first;
    else
        return a.second < b.second;
}

int main(void) {

    // sorting array using stl sort algorithm 
    int arr[] = {5, 2, 8, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n); // sort function from stl
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // sorting vector using stl sort algorithm 
    vector<int> vec = {7, 2, 5, 3, 1, 6};
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // sorting vector using comparator function 
    vector<int> vec2 = {52, 3, 1, 0, 4, 3, 0, 4, 21, 10};
    sort(vec2.begin(), vec2.end(), greater<int>());
    for (int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }
    cout << endl;

    // sorting vector using custom comparator function (cmp)
    vector<int> vec3 = {10, 60, 70, 20, 40, 50, 30};
    sort(vec3.begin(), vec3.end(), cmp);
    for (int i = 0; i < vec3.size(); i++) {
        cout << vec3[i] << " ";
    }
    cout << endl;

    // sorting vector of pair using custom comparator function using (cmp2)
    vector<pair<int, int>> vec_pair = {};
    sort(vec_pair.begin(), vec_pair.end(), cmp2);
    for (int i = 0; i < vec_pair.size(); i++) {
        cout << "{" << vec_pair[i].first << ", " << vec_pair[i].second << "} ";
    }
    cout << endl;

    return 0;
}
