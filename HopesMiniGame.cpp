#include <iostream>

using namespace std;

int main()
{
    char direction;
    bool play = true;

    //TODO: add something that the player runs into when they go right.
    //BUG: there is no way for the player to enter an direction! fix this.
    //BUG: the end function is never called! call it right after the bear eats the player.



    cout << "Oh!, Hello you! I do not think we have met before!" << endl;
    cout << "You know, while your here, lets play a game!" << endl;
    cout << endl;
    cout << endl;
    cout << "Do you want to go left or right? (L/R)" << endl;
    cout<< endl;
    do
    {
        if(direction == 'L' or direction == 'l')
        {
            cout << "You decide to go left and run into a bear. The bear eats you." << endl;
        }
        if(direction == 'R' or direction == 'r')
        {
            cout << "You decide to go right and find yourself looking face to face with a ......" << endl;
        }
        cout << "Would you like to play again? (0 = no, 1 = yes)"<< endl;
        cin >> play;
    }
    while(play == true);


    return 0;
}


void theEnd()
{
    cout << "You died" << endl;
    cout << "The end" << endl;
}
