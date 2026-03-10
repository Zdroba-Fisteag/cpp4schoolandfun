#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maxCount(vector<vector<bool>> matrixToCount)
{
    int currentCounter = 0;
    int maxCounter = 0;
    for (int i = 0; i < matrixToCount.size(); i++) {
        for (int j = 0; j < matrixToCount[i].size(); j++) {
            if (matrixToCount[i][j] == 0) {
                currentCounter = 0;
            } else if (matrixToCount[i][j] == 1) {
                currentCounter++;
                if (i > 0 && matrixToCount[i-1][j]) currentCounter++;
                if (j > 0 && matrixToCount[i][j-1]) currentCounter++;
                if (i < matrixToCount.size()-1 && matrixToCount[i+1][j]) currentCounter++;
                if (j < matrixToCount[i].size()-1 && matrixToCount[i][j+1]) currentCounter++;
                if (currentCounter > maxCounter) maxCounter = currentCounter;
            }
        }
    }
    return maxCounter;
}

int main()
{
    vector<vector<bool>> simple = {
        {true, true, false, false},
        {false, true, true, false},
        {true, false, true, false},
        {false, false, true, true}
    };

    vector<vector<bool>> vals = {
        {false, false, false, true, true, true, false, false, true, true, false, false},
        {false, true, true, true, false, true, true, true, true, false, false, false},
        {true, false, true, true, false, false, true, true, false, false, true, true},
        {true, false, false, false, true, true, true, false, false, true, true, true},
        {true, true, true, false, false, false, false, true, true, true, false, false},
        {true, true, false, true, true, false, false, true, false, false, true, true},
        {false, false, false, true, false, false, true, false, true, true, true, false},
        {false, false, false, false, false, true, true, true, true, false, false, false}
    };

    cout << "maxCount of \"simple\": " << maxCount(simple) << endl;
    cout << "maxCount of \"vals\": " << maxCount(vals);
    return 0;
}