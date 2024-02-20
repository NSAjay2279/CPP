#include <iostream>
using namespace std;

int main()
{
    // Define a 4D array representing library books
    int libraryBooks[3][5][10][20]; // Assuming 3 libraries, 5 genres, 10 authors, and 20 publication years

    // Populate the array with book counts or other relevant data
    // For simplicity, let's just initialize it with arbitrary values
    int counter = 1;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            for (int k = 0; k < 10; ++k)
            {
                for (int l = 0; l < 20; ++l)
                {
                    libraryBooks[i][j][k][l] = counter++;
                }
            }
        }
    }

    // Accessing elements of the 4D array
    cout << "Number of books at library 1, genre 2, author 3, published in year 4: " << libraryBooks[0][1][2][3] << endl;
    cout << "Number of books at library 3, genre 4, author 7, published in year 10: " << libraryBooks[2][3][6][9] << endl;

    return 0;
}
