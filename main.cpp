#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char lyrics2[] = "tu raat diwani, mai zardsitara";
    char lyrics1[] = "oh tere sang yaara khush ranga bhara, ";

    strcat(lyrics1, lyrics2);

    cout << lyrics1 << endl;
    cout << lyrics2 << endl;
    return 0;
}
