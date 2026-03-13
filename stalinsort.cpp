#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> testSoviet = {5,1,3,2,4,4,9,5,10};

int stalinSort(vector<int>& unOrd) {
    vector<int> result;
    if (unOrd.empty()) return 0;
    result.push_back(unOrd[0]);
    for (size_t i = 1; i < unOrd.size(); i++) {
        if (unOrd[i] >= result.back()) result.push_back(unOrd[i]);
    }
    
    for (int x : result) {
        cout << "{" << x << "}";
    }
    return result.size();
}

int main() {
    cout << stalinSort(testSoviet);
    return 0;
}