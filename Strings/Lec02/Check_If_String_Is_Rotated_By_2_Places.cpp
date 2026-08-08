#include <iostream>
using namespace std;

    void rotateAntiClockwise(string &s)
    {
        char c = s[0];

        int index = 1;

        while (index < s.size())
        {
            s[index - 1] = s[index];
            index++;
        }

        s[s.size() - 1] = c;   // Fixed
    }

    void rotateClockwise(string &s)
    {
        char c = s[s.size() - 1];

        int index = s.size() - 2;

        while (index >= 0)
        {
            s[index + 1] = s[index];
            index--;
        }

        s[0] = c;
    }

    bool isRotated(string& s1, string& s2)
    {
        if (s1.size() != s2.size())
            return false;

        if (s1.size() < 2)
            return s1 == s2;

        string clockwise = s1;
        string anticlockwise = s1;

        // Rotate 2 times clockwise
        rotateClockwise(clockwise);
        rotateClockwise(clockwise);

        if (clockwise == s2)
            return true;

        // Rotate 2 times anti-clockwise
        rotateAntiClockwise(anticlockwise);
        rotateAntiClockwise(anticlockwise);

        if (anticlockwise == s2)
            return true;

        return false;
    }

int main() {
    string s1 = "amazon";
    string s2 = "azonam";

    if (isRotated(s1, s2)) {
        cout << "Yes, strings are rotated!" << endl;
    } else {
        cout << "No, strings are not rotated!" << endl;
    }

    return 0;
}