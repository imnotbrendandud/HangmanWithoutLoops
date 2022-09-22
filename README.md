# HangmanWithoutLoops
Hangman Without Loops
- The user of this program will go through a hangman simulation game. A five letter word will be
  used, and the user will have 5 letter guesses before they lose. The word will be predefined,
  and the user's goal is to guess the word under 5 letter guesses. When the word is guessed
  correctly, the user wins.

-User is given 5 guesses. User has to guess the word which is stored in its string.
    
-If word length is 5, the program will work. If not, then the user has to restart.

-cout << "guessedLetters", a variable, allows us to substitute letters in for '-' that the user guesses.
-these numbers will start from 0 to 4 because the word is 5 letters.

-If the letter length is not equal to 1, the program breaks.

-Otherwise, continue to the logic. 

-This is the logic where the guessedLetters '-' is replaced with the letter a user inputs. If the letter 
 is in the word, '-' will be replaced with that letter.

-I also use tolower to keep user inputs consistent.

-Note that this logic repeats itself until the user wins or loses.

- The only thing that changes with each guess is the number of guesses.
-If the number of guesses gets to zero, the user loses.
-The user wins if they correctly guess the word.
-User can not win by inputting all the letters. A word still must be guessed.

-If user loses, display a "you lose!" message.
