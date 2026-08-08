#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        int index = 0;
        string ans;

        while (index < address.size()) {
            if (address[index] == '.') {
                ans = ans + "[.]";
            } else {
                ans = ans + address[index];
            }
            index++;
        }

        return ans;
    }
};

int main() {
    // Solution class ka object banaya
    Solution sol; 
    
    // test input IP Address
    string ip = "1.1.1.1"; 
    
    // function ko call kiya aur result print kiya 
    string result = sol.defangIPaddr(ip);
    cout << "Original IP: " << ip << endl;
    cout << "Defanged IP: " << result << endl;

    return 0;
}