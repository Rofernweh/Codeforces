/*Vanya And Fence (Codeforces)
https://codeforces.com/problemset/problem/677/A

This problem consist in calculate the width of the road, given the height of the fence and the height of each friend. 
If the friend is taller than the fence, he will have to bend down, so his height will be 2, otherwise, his height will be 1. 
The width of the road is the sum of the height of each friend.


My approach was to initialize 2 variables, n for the number of friends, and h for the height of the fence. 
Then, I created an array row, of size n, to store the height of each friend. 
Then, I initialize a variable width on 0, to store the width of the road. 
Then, I used a for loop to store the height of each friend in the array, and to calculate the width of the road. 
Finally, I printed the width of the road.

Time complexity: O(n)
*/

#include <iostream>
using namespace std;

int main()
{   
    int n,h;
    cin >> n;
    cin >> h;
    int row[n];
    int width=0;
    for(int i=0; i<n; i++)
    {
        cin >> row[i];
        if(row[i]>h)
        {
            row[i]=2;
        }
        else{
            row[i]=1;
        }
        width+=row[i];
    }
    cout << width;
    return 0;
}