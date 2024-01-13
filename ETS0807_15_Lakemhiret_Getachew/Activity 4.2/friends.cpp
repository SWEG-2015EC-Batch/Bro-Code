#include <iostream>

using namespace std;

const int NUM_PEOPLE = 5; 

bool friends[NUM_PEOPLE][NUM_PEOPLE] = {
    {false, true, true, true, true},
    {false, false, false, false, false},
    {false, true, false, false, false},
    {false, true, false, false, false},
    {true, false, true, false, false}
}; 

int main() {
    int pair_count = 0;

    for (int i = 0; i < NUM_PEOPLE; i++) {
        for (int j = i + 1; j < NUM_PEOPLE; j++) { 
            if (friends[i][j]) {
                pair_count++;
            }
        }
    }

    cout << "Number of friend pairs: " << pair_count << endl;

    return 0;
}
