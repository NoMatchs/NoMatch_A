#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[9][9] = {0};

    int num = 1;
    int row = 0, col = 0;
    int dr = 0, dc = 1;

    for (int i = 0; i < n * n; i++)
    {
        matrix[row][col] = num++;
    }

    int nextRow = row + dr;
    int nextCol = col + dc;

    if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= n || matrix[nextRow][nextCol] != 0)
    {
        int temp = dr;
        dr = dc;
        dc = -temp;
    }

    row += dc;
    col += dc;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}