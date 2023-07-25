/* Team (Codeforces)
https://codeforces.com/problemset/problem/231/A

This problem consist in calculate the number of problems that will be solved by the team, given the number of problems and the result of each problem.
If at least 2 of the 3 members of the team know the solution to a problem, they will solve it.

My approach here was to make a bool for the three of them, given the two possible answers, 0 for false and 1 for true. 
If it's true, they know the solution to the problem, if it's false, they don't know the solution to the problem.
Then, I created a variable problems to store the number of problems.
Then, I created a variable problemSolved to store the number of problems that will be solved by the team counting the solved problems in the for loop.
Finally, I printed the number of problems that will be solved.

Time complexity: O(n)
*/

#include<iostream>
using namespace std;

int main()
{
    bool  Petya, Vasya, Tonya;
    int problems;
    cin >> problems;
    int problemSolved=0;

    for(int i=0; i<problems;i++)
    {
        cin >> Petya;
        cin >> Vasya;
        cin >> Tonya;

        if ((Petya && Vasya) || (Vasya && Tonya) || (Tonya && Petya))
    {
    problemSolved++;
    }

    }
    cout << problemSolved << endl;
    return 0;

}