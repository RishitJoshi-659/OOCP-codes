#include <iostream>
using namespace std;

int main() 
{
    const int CANDIDATES = 5;
    int count[CANDIDATES] = {0}; 
    int spoiltBallots = 0; 
    int vote;

    cout << "Enter votes for candidate 1-5 (press 0 to finish the voting): " << endl;

    while (true) 
    {
        cin >> vote;
        if (vote == 0)
        {
            break;
        } 
        else if (vote >= 1 && vote <= CANDIDATES) 
        {
            count[vote - 1]++; 
        } 
        else 
        {
            spoiltBallots++;
        }
    }

    // Display results
    cout << "Vote counts:" << endl;
    for (int i = 0; i < CANDIDATES; i++) 
    {
        cout << "Candidate " << (i + 1) << ": " << count[i] << " votes" << endl;
    }
    cout << "Spoilt ballots: " << spoiltBallots << endl;

    return 0;
}
