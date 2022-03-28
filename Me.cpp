#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    ofstream GitHub;
    GitHub.open("Me.txt");
    GitHub << "--------------------------------------------------------";
    GitHub << "\n"; 
    GitHub << "|     My Name is Leonid Perminov. I am 14 years old.   |";
    GitHub << "\n";
    GitHub << "--------------------------------------------------------";
    GitHub << "\n";
    GitHub << "|           I am from Russia (Saint Petersburg)        |";
    GitHub << "\n";
    GitHub << "--------------------------------------------------------";
    GitHub << "\n"; 
    GitHub << "|               My GitHub is Perminov2008.             |";
    GitHub << "\n";
    GitHub << "--------------------------------------------------------";
    GitHub << "\n";
    GitHub << "|            My GitHub Project is MyOperatirs.         |";
    GitHub << "\n";
    GitHub << "--------------------------------------------------------";
    GitHub << "\n";     
    GitHub << "|        I programming in GitHub in language С++.      |";
    GitHub << "\n";
    GitHub << "--------------------------------------------------------";
    GitHub << "\n";
    GitHub << "|     link(GitHub):https://github.com/Perminov2008     |";
    GitHub << "\n";
    GitHub << "--------------------------------------------------------";
    GitHub << "\n"; 
    GitHub << "|            link(Instagram):@perminov10992            |";
    GitHub << "\n";
    GitHub << "--------------------------------------------------------";
    GitHub << "\n"; 
    GitHub << "|          link(VK):https://vk.com/id649030166         |";
    GitHub << "\n";
    GitHub << "--------------------------------------------------------";
    GitHub << "\n"; 
    GitHub.close();
}