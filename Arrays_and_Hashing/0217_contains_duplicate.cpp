#include <vector>
#include <unordered_set>
#include <iostream>

class Solution {
public:
    bool hasDuplicate(const std::vector<int>& nums) const {
        std::unordered_set<int> seen;
        for (int num : nums) {
            if(seen.count(num))
                return true;
            seen.insert(num);
        }
        return false;
    }
};

void testPrintOut(const Solution& sol, const std::vector<int> test, int testNumber, bool goal)
{
     if(sol.hasDuplicate(test) == goal)
        std::cout << "Test " << testNumber << " is successful!" << std::endl;
    else
        std::cout << "Test " << testNumber << " failed!" << std::endl;
}

// --- Local Test Driver ---
int main() {
    Solution sol;
    
    std::vector<int> test1 = {1, 2, 3, 1};
    std::vector<int> test2 = {1, 2, 3, 4};
    
    testPrintOut(sol, test1, 1, true);
    testPrintOut(sol, test2, 2, false);
    
    return  0;
}