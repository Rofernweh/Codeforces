/* Anton And Danik (Codeforces)
https://codeforces.com/problemset/problem/734/A

This problem consist in calculate the winner of a game, given the number of games played and the result of each game.
If Anton wins more games than Danik, Anton is the winner, if Danik wins more games than Anton, Danik is the winner, 
and if they win the same number of games, the result is a draw(Friendship).

My approach was to create a variable games to store the number of games played, and input the result of each game in an array gamesPlayed.
Then, I created 2 variables, gamesA and gamesD, to store the number of games won by Anton and Danik, respectively.
Then, I used a for loop to store the result of each game in the array, and to calculate the number of games won by Anton and Danik.
Finally, I used if statements to print the winner.

Time complexity: O(n)
*/


#include <iostream>
using namespace std;

int main()
{
    int games;
    cin >> games;
    char gamesPlayed[games];
    int gamesA = 0;
    int gamesD = 0;

    for (int i = 0; i < games; i++)
    {
        cin >> gamesPlayed[i];
        if (gamesPlayed[i] == 'A')
        {
            gamesA++;
        }
        else if (gamesPlayed[i] == 'D')
        {
            gamesD++;
        }
    }

    if (gamesA > gamesD)
    {
        cout << "Anton";
    }
    else if (gamesD > gamesA)
    {
        cout << "Danik";
    }
    else if(gamesA==gamesD)
    {
        cout << "Friendship";
    }
    return 0;
}