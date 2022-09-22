//======================================================================================================
//Author: Brendan Czekaj
//Date  : 10-12-20
//Desc  : The user of this program will go through a hangman simulation game. A five letter word will be
//        used, and the user will have 5 letter guesses before they lose. The word will be predefined,
//        and the user's goal is to guess the word under 5 letter guesses. When the word is guessed
//        correctly, the user wins.
//======================================================================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string  word = "hello";
    int     guesses = 5;
    string  guessedLetters = "-----";
    string  letter;
    string  guess;
    //User is given 5 guesses. User has to guess the word which is stored in its string.
    //If word length is 5, the program will work. If not, then the user has to restart.
    if (word.length() == 5)
    {
        cout << endl;
        //This cout << guessedLetters allows us to substitute letters in for '-' that the user guesses.
        cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;
        cout << "You have " << guesses << " guesses left. Guess a letter: ";
        cin >> letter;
        //You broke the program.
        if (letter.length() != 1)
        {
            cout << "You are only supposed to enter a letter. Run the program again.";
        }
        //Letter length good.
        else if (letter.length() == 1)
        {
            //This is the logic where the guessedLetters '-' is replaced with the letter a user inputs. If the letter is in the word, '-' will be replaced with that letter.
            //I also use tolower to keep user inputs consistent.
            //NOTE: This logic does repeat itself.
            if (tolower(word.at(0)) == tolower(letter.at(0)))
            {
                cout << "You guessed the first letter correct!" << endl;
                guessedLetters.at(0) = word.at(0);

            }
            if (tolower(word.at(1)) == tolower(letter.at(0)))
            {
                cout << "You guessed the second letter correct!" << endl;
                guessedLetters.at(1) = word.at(1);

            }
            if (tolower(word.at(2)) == tolower(letter.at(0)))
            {
                cout << "You guessed the third letter correct!" << endl;
                guessedLetters.at(2) = word.at(2);

            }
            if (tolower(word.at(3)) == tolower(letter.at(0)))
            {
                cout << "You guessed the fourth letter correct!" << endl;
                guessedLetters.at(3) = word.at(3);

            }
            if (tolower(word.at(4)) == tolower(letter.at(0)))
            {
                cout << "You guessed the fifth letter correct!" << endl;
                guessedLetters.at(4) = word.at(4);

            }
            //This displays whatever letter the user has guessed.
            cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;
            //Then display how many guesses you have left.
            cout << "You have " << guesses << " guesses left. Guess a word: ";
            cin >> guess;
            //You win.
            if (guess == word)
            {
                cout << "You guessed the word correctly in 1 guess! You Win!";
            }
            //Keep going.
            else
            {
                //This code it repeated except for a few number that are changed like the number of guesses.
                guesses = 4;
                cout << endl;
                cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;
                cout << "You have " << guesses << " guesses left. Guess a letter: ";
                cin >> letter;
                if (letter.length() != 1)
                {
                    cout << endl;
                    cout << "You are only supposed to enter a letter. Run the program again.";
                }

                else if (letter.length() == 1)
                {

                    if (tolower(word.at(0)) == tolower(letter.at(0)))
                    {
                        cout << "You guessed the first letter correct!" << endl;
                        guessedLetters.at(0) = word.at(0);

                    }
                    if (tolower(word.at(1)) == tolower(letter.at(0)))
                    {
                        cout << "You guessed the second letter correct!" << endl;
                        guessedLetters.at(1) = word.at(1);

                    }
                    if (tolower(word.at(2)) == tolower(letter.at(0)))
                    {
                        cout << "You guessed the third letter correct!" << endl;
                        guessedLetters.at(2) = word.at(2);

                    }
                    if (tolower(word.at(3)) == tolower(letter.at(0)))
                    {
                        cout << "You guessed the fourth letter correct!" << endl;
                        guessedLetters.at(3) = word.at(3);

                    }
                    if (tolower(word.at(4)) == tolower(letter.at(0)))
                    {
                        cout << "You guessed the fifth letter correct!" << endl;
                        guessedLetters.at(4) = word.at(4);

                    }

                    cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;

                    cout << "You have " << guesses << " guesses left. Guess a word: ";
                    cin >> guess;
                    if (guess == word)
                    {
                        cout << endl;
                        cout << "You guessed the word correctly in 2 guesses! You Win!";
                    }
                    else
                    {
                        guesses = 3;
                        cout << endl;
                        cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;
                        cout << "You have " << guesses << " guesses left. Guess a letter: ";
                        cin >> letter;
                        if (letter.length() != 1)
                        {
                            cout << endl;
                            cout << "You are only supposed to enter a letter. Run the program again.";
                        }

                        else if (letter.length() == 1)
                        {

                            if (tolower(word.at(0)) == tolower(letter.at(0)))
                            {
                                cout << "You guessed the first letter correct!" << endl;
                                guessedLetters.at(0) = word.at(0);

                            }
                            if (tolower(word.at(1)) == tolower(letter.at(0)))
                            {
                                cout << "You guessed the second letter correct!" << endl;
                                guessedLetters.at(1) = word.at(1);

                            }
                            if (tolower(word.at(2)) == tolower(letter.at(0)))
                            {
                                cout << "You guessed the third letter correct!" << endl;
                                guessedLetters.at(2) = word.at(2);

                            }
                            if (tolower(word.at(3)) == tolower(letter.at(0)))
                            {
                                cout << "You guessed the fourth letter correct!" << endl;
                                guessedLetters.at(3) = word.at(3);

                            }
                            if (tolower(word.at(4)) == tolower(letter.at(0)))
                            {
                                cout << "You guessed the fifth letter correct!" << endl;
                                guessedLetters.at(4) = word.at(4);

                            }

                            cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;

                            cout << "You have " << guesses << " guesses left. Guess a word: ";
                            cin >> guess;
                            if (guess == word)
                            {
                                cout << endl;
                                cout << "You guessed the word correctly in 3 guesses! You Win!";
                            }
                            else
                            {
                                guesses = 2;
                                cout << endl;
                                cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;
                                cout << "You have " << guesses << " guesses left. Guess a letter: ";
                                cin >> letter;
                                if (letter.length() != 1)
                                {
                                    cout << "You are only supposed to enter a letter. Run the program again.";
                                }

                                else if (letter.length() == 1)
                                {

                                    if (tolower(word.at(0)) == tolower(letter.at(0)))
                                    {
                                        cout << "You guessed the first letter correct!" << endl;
                                        guessedLetters.at(0) = word.at(0);

                                    }
                                    if (tolower(word.at(1)) == tolower(letter.at(0)))
                                    {
                                        cout << "You guessed the second letter correct!" << endl;
                                        guessedLetters.at(1) = word.at(1);

                                    }
                                    if (tolower(word.at(2)) == tolower(letter.at(0)))
                                    {
                                        cout << "You guessed the third letter correct!" << endl;
                                        guessedLetters.at(2) = word.at(2);

                                    }
                                    if (tolower(word.at(3)) == tolower(letter.at(0)))
                                    {
                                        cout << "You guessed the fourth letter correct!" << endl;
                                        guessedLetters.at(3) = word.at(3);

                                    }
                                    if (tolower(word.at(4)) == tolower(letter.at(0)))
                                    {
                                        cout << "You guessed the fifth letter correct!" << endl;
                                        guessedLetters.at(4) = word.at(4);

                                    }

                                    cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;

                                    cout << "You have " << guesses << " guesses left. Guess a word: ";
                                    cin >> guess;
                                    if (guess == word)
                                    {
                                        cout << endl;
                                        cout << "You guessed the word correctly in 4 guesses! You Win!";
                                    }
                                    else
                                    {
                                        guesses = 1;
                                        cout << endl;
                                        cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;
                                        cout << "You have " << guesses << " guesses left. Guess a letter: ";
                                        cin >> letter;
                                        if (letter.length() != 1)
                                        {
                                            cout << "You are only supposed to enter a letter. Run the program again.";
                                        }

                                        else if (letter.length() == 1)
                                        {

                                            if (tolower(word.at(0)) == tolower(letter.at(0)))
                                            {
                                                cout << "You guessed the first letter correct!" << endl;
                                                guessedLetters.at(0) = word.at(0);

                                            }
                                            if (tolower(word.at(1)) == tolower(letter.at(0)))
                                            {
                                                cout << "You guessed the second letter correct!" << endl;
                                                guessedLetters.at(1) = word.at(1);

                                            }
                                            if (tolower(word.at(2)) == tolower(letter.at(0)))
                                            {
                                                cout << "You guessed the third letter correct!" << endl;
                                                guessedLetters.at(2) = word.at(2);

                                            }
                                            if (tolower(word.at(3)) == tolower(letter.at(0)))
                                            {
                                                cout << "You guessed the fourth letter correct!" << endl;
                                                guessedLetters.at(3) = word.at(3);

                                            }
                                            if (tolower(word.at(4)) == tolower(letter.at(0)))
                                            {
                                                cout << "You guessed the fifth letter correct!" << endl;
                                                guessedLetters.at(4) = word.at(4);

                                            }

                                            cout << guessedLetters.at(0) << " " << guessedLetters.at(1) << " " << guessedLetters.at(2) << " " << guessedLetters.at(3) << " " << guessedLetters.at(4) << endl;

                                            cout << "You have " << guesses << " guesses left. Guess a word: ";
                                            cin >> guess;
                                            if (guess == word)
                                            {
                                                cout << endl;
                                                cout << "You guessed the word correctly in 5 guesses! You Win!";
                                            }
                                            //This is new. If the user does not happen to guess the word in 5 letter guesses, the user loses.
                                            else
                                            {
                                                cout << endl;
                                                cout << "Sorry, you lose! The word was " << word << ". Better luck next time.";
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }





        }

    }
    //IF USER DOES NOT ENTER A 5 LETTER WORD, EITHER OF THESE MESSAGES APPEAR.
    else if (word.length() < 5)
    {
        cout << "That word is too short";
    }
    else
    {
        cout << "That word is too long";
    }




    return 0;


}
