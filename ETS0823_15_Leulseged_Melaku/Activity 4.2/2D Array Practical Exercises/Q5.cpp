// 
#include <iostream>

using namespace std;

int main() {
    const int size = 5; // Assuming there are 5 people
    bool friendships[size][size] = {
        {false, true, false, true, true},
        {true, false, true, false, true},
        {false, true, false, false, false},
        {true, false, false, false, true},
        {true, true, false, false, true}
    };

    int pairsOfFriends = 0;

    cout << "Friendship Matrix:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << friendships[i][j] << " ";
            if (friendships[i][j] && i < j) {
                pairsOfFriends++;
            }
        }
        cout << endl;
    }

    cout << "\nNumber of Pairs of Friends: " << pairsOfFriends << endl;

    return 0;
}
