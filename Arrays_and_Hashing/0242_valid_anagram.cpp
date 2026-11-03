#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if(s.size() != t.size())
            return false;
        std::string alphaS = s, alphaT = t;
        std::sort(alphaS.begin(), alphaS.end());
        std::sort(alphaT.begin(), alphaT.end());
        for(int i = 0; i < alphaS.size(); i++)
            if(alphaS[i] != alphaT[i])
                return false;
        return true;
    }
};

void testPrintOut(Solution& sol, std::string string1, std::string string2, bool goal, int testNumber)
{
    if(sol.isAnagram(string1, string2) == goal)
        std::cout << "Test " << testNumber << " is successful!" << std::endl;
    else
        std::cout << "Test " << testNumber << " failed!" << std::endl;
}

int main()
{
    Solution sol;

    std::string test1String1 = "racecar", test1String2 = "carrace";
    std::string test2String1 = "jar", test2String2 = "jam";
    std::string test3String1 = "x", test3String2 = "x";
    std::string test4String1 = "Ij", test4String2 = "j";

    testPrintOut(sol, test1String1, test1String2, true, 1);
    testPrintOut(sol, test2String1, test2String2, false, 2);
    testPrintOut(sol, test3String1, test3String2, true, 3);
    testPrintOut(sol, test4String1, test4String2, false, 4);
    
    return 0;
}