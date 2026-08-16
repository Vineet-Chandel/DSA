#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {

        if (mp.find(nums[i]) != mp.end()) {
            continue;
        }

        mp[nums[i]] = i;
    }

    int k = 0;

    for (const auto& [key, value] : mp) {
        k++;
        cout << key << " -> " << value << endl;
    }

    cout << "Unique elements: " << k << endl;
}