/* Beautiful Matrix (Codeforces)
https://codeforces.com/problemset/problem/263/A

This problem consist in calculate the number of changes required to make the matrix a beautiful matrix, given the matrix.
A matrix is beautiful if the number 1 is in the middle of the matrix.
The output needs to be the number of changes required to move the number 1 to the middle of the matrix.

My approach was to create a matrix of size 5x5, and to store the input in the matrix.
Then, I used a for loop to find the position of the number 1 in the matrix,
and to calculate the number of changes required to move the number 1 to the middle of the matrix I used the abs function to get the difference between the center and the matrix points.

Finally, I printed the number of changes required.

Time complexity: O(n)
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int matrix[5][5];
    int x, y;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    
    int changesRequired = abs(x-2)+abs(y-2);
    cout << changesRequired << endl;

    return 0;
}