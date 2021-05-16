#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>




char word [50], guessed_letters[20], user_guess[] = "", blank[1] = "-", user_input;
int random_number, word_len, attempts = 6;


/*words in the dictionary included from the
site : https://pastebin.com/raw/RnDPnp9V */

void get_word()
{ /* Function to get word from the dictionary */

    FILE *fp;
    int line_number = 0;
    char current_word[50];
    fp = fopen("dictionary.txt","r");
    if(fp == NULL)
    {
        perror("Error in opening file");
    }

    while(fgets(current_word, 50, fp) != NULL)
    {
        line_number++;
    }
    random_number = rand() % line_number; /* to find a random line in the
                                              dictionary to pick a word */

    rewind(fp); // sets cursor back to the top of dictionary

    for(line_number = 0; line_number != random_number; line_number++)
    {
        fgets(current_word, 50, fp);
    }
    strcpy(word, current_word); // copy word from dictionary
    fclose(fp);
}




void start_game()
{
    get_word();
    word_len = strlen(word);
    memset(guessed_letters, 0, sizeof guessed_letters);
    attempts = 6;
}




void get_input()
{  /* Function to get input from the player */

    int i;
    int letter_hit = 0;
    printf("\nYour guess: ");
    scanf(" %c", user_guess);
    getchar();

    for(i=0; i < word_len; i++)
    { /* if player guesses the correct word letter_hit is increased else
          attempt is decreased */
        if(user_guess[0] == word[i])
        {
            guessed_letters[i] = user_guess[0];
            letter_hit ++;
        }
    }
    if(letter_hit > 0)
    {
        return;
    }
    else
    {
        attempts --;
    }
}




void platform()
{ /* Function to print platform in hangman game */

    char *platformtypes[]={

                     "        |\n"
                     "        |\n"  //1
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "        |\n"
                     "        |\n"  //2
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     "        |\n"  //3
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     "  |     |\n"  //4
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     " -|-    |\n"  //5
                     "        |\n"
                     "       ===\n",

                     "   |=====|\n"
                     "   O     |\n"
                     "  -|-    |\n"   //6
                     "  //     |\n"
                     "       ===\n"

    };
    switch(attempts)
    {
    case 5:
        printf("\n\n%s\n", platformtypes[0]);
        break;
    case 4:
        printf("\n\n%s\n", platformtypes[1]);
        break;
    case 3:
        printf("\n\n%s\n", platformtypes[2]);
        break;
    case 2:
        printf("\n\n%s\n", platformtypes[3]);
        break;
    case 1:
        printf("\n\n%s\n", platformtypes[4]);
        break;
    case 0:///
        printf("\n\n%s\n", platformtypes[5]);
        break;
    }
}




void print_blanks()
{
    int i, j;
    platform();
    for(i=0; i<word_len; i++)
    {
        printf("%c", guessed_letters[i]);
        printf(" ");
    }
    printf("\n");
    for(j=0; j<word_len - 1; j++)
    {
        printf("%s", blank);
        printf(" ");
    }
    printf("\n");
}





int main()
{
    int n=1;
    while(n==1)
    {
        start_game();

        while(attempts != 0)
        { /* game is continued until attempts are equal to 0 or player
             guesses the correct word */

            if(strlen(guessed_letters) == word_len - 1)
            {
                print_blanks();
                break;
            }
            else
            {
                printf("\n===========================================");
                printf("\n\t Attempts Remaining: %d\n", attempts);
                printf("===========================================\n");
                print_blanks();
                get_input();
            }
        }
        if(attempts > 0)
        {
            print_blanks();
            printf("\t\t\tYOU WON! :-)\n Do you want to Play again (y=yes and n=no)? : ");
        }
        else
        {
            platform();
            printf("\t\t\tYOU LOST! :-( \nThe word was >> %s \n Do you want to Play again (y=yes and n=no)? : ", word);
        }
        scanf("%c", &user_input);
        getchar();
        if(user_input == 'y')
            start_game();
        else
            return 0;
    }
}
