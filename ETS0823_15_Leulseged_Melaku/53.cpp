#include <iostream>
using namespace std;

int main(){
    int N, count = 1;
    float score, points, percentage, total_score = 0, total_points = 0;
    cout << "Number of exercises to input: ";
    cin >> N;
    while(count <= N){
        cout << "score recieved for exercise " << count << ": ";
        cin >> score;
        cout << "Total points possible for exercise " << count << ": ";
        cin >> points;
        total_score += score;
        total_points += points;
        count++;
        
    }
    if(total_score <= total_points){
        percentage = (total_score / total_points) * (100);
        cout << "Your total is " << total_score << " out of " << total_points << " or " << percentage << "%";
    }
    else{
        cout << "Your score can't be greater than the total points you can get!!!";
    }
     return 0;
}