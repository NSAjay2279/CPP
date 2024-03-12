#include <conio.h> // For _getch() function on Windows
#include <fstream>
#include <iostream>

using namespace std;

const int WIDTH = 10;
const int HEIGHT = 5;

char grid[HEIGHT][WIDTH];
int playerX, playerY;

// Function to initialize the game grid
void initializeGrid()
{
    for (int y = 0; y < HEIGHT; ++y)
    {
        for (int x = 0; x < WIDTH; ++x)
        {
            grid[y][x] = '.';
        }
    }
    // Place player at the center of the grid
    playerX = WIDTH / 2;
    playerY = HEIGHT / 2;
    grid[playerY][playerX] = '@';
}

// Function to display the game grid
void displayGrid()
{
    system("cls"); // Clear screen (Windows specific)
    for (int y = 0; y < HEIGHT; ++y)
    {
        for (int x = 0; x < WIDTH; ++x)
        {
            cout << grid[y][x] << ' ';
        }
        cout << endl;
    }
}

// Function to save the game state to a file
void saveGame()
{
    ofstream outFile("game_state.txt");
    if (outFile.is_open())
    {
        outFile << playerX << ' ' << playerY;
        outFile.close();
    }
    else
    {
        cerr << "Error: Unable to open file for writing." << endl;
    }
}

// Function to load the game state from a file
void loadGame()
{
    ifstream inFile("game_state.txt");
    if (inFile.is_open())
    {
        inFile >> playerX >> playerY;
        inFile.close();
    }
    else
    {
        cerr << "Error: Unable to open file for reading." << endl;
    }
}

int main()
{
    char move;
    bool running = true;

    initializeGrid();

    while (running)
    {
        displayGrid();
        cout << "Use arrow keys to move ('s' to save, 'l' to load, 'q' to quit): ";
        move = _getch(); // Get character without waiting for Enter key

        switch (move)
        {
            case 's':
                saveGame();
                break;
            case 'l':
                loadGame();
                break;
            case 'q':
                running = false;
                break;
            case 72: // Up arrow
                if (playerY > 0)
                {
                    grid[playerY][playerX] = '.';
                    playerY--;
                    grid[playerY][playerX] = '@';
                }
                break;
            case 80: // Down arrow
                if (playerY < HEIGHT - 1)
                {
                    grid[playerY][playerX] = '.';
                    playerY++;
                    grid[playerY][playerX] = '@';
                }
                break;
            case 75: // Left arrow
                if (playerX > 0)
                {
                    grid[playerY][playerX] = '.';
                    playerX--;
                    grid[playerY][playerX] = '@';
                }
                break;
            case 77: // Right arrow
                if (playerX < WIDTH - 1)
                {
                    grid[playerY][playerX] = '.';
                    playerX++;
                    grid[playerY][playerX] = '@';
                }
                break;
        }
    }

    return 0;
}
