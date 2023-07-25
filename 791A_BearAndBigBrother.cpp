/* Bear And Big Brother (Codeforces)
https://codeforces.com/problemset/problem/791/A

This problem consist in calculate the number of years that will take Limak to be heavier than Bob, given their initial weights.
Limak's weight is tripled after every year, and Bob's weight is doubled after every year.

My approach was to create a variable for Limak's weight and Bob's weight, and input their initial weights.
Then, I create a counter variable annos to store the number of years that will take Limak to be heavier than Bob.
Then, I used a while loop to calculate the number of years that will take Limak to be heavier than Bob.
Finally, I printed the number of years.

Time complexity: O(n)
*/


#include<iostream>
using namespace std;

int main()
{
    int pesoLimak, pesoBob;
    int annos=0;
    cin >> pesoLimak;
    cin >> pesoBob;
    

    while(pesoLimak <= pesoBob)
    {
        pesoLimak *= 3;
        pesoBob *= 2;
        annos++;
    }
    cout << annos << endl;
}