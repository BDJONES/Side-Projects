// This program is a rock paper scissors game where you play a game against the computer
// The choice of the computer is randomly picked based on a time seed I planted in the file
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int CompChoice (int result);

int main() {
    srand(time(0));
    char choice[10];
    int res;
    int w = 0, l = 0, t = 0;
    int counter = 0;
    printf("Enter rock, paper, or scissors\n");
    while (1) {
        if (counter == 1) {
            printf("Enter r (for rock), p (for paper), or s(for scissors)\n");
            printf("If you wish to quit type 'quit'\n");
        }
        else if (counter > 1) {
            printf("Enter r, p, or s\n");
            printf("If you wish to quit type 'quit'\n");
        }
        scanf("%s", choice);
        printf("\n");
        if (strcmp(choice, "quit")  == 0) {
            printf("Thank You For Playing\n");
            break;
        }
        if (counter == 0 && strcmp(choice, "rock") != 0 && strcmp(choice, "paper") != 0 && strcmp(choice, "scissors") != 0) {
            printf("You made an invalid decision\n\n");
        }
        else if (counter > 0 && strcmp(choice, "r") != 0 && strcmp(choice, "p") != 0 && strcmp(choice, "s") != 0) {
            printf("You made an invalid decision\n\n");
        }
        else {
            if (strcmp(choice, "r") == 0 || strcmp(choice, "rock") == 0) {
                printf("You chose rock\n");
            }
            else if (strcmp(choice, "p") == 0 || strcmp(choice, "paper") == 0) {
                printf("You chose paper\n");
            }
            else {
                printf("You chose scissors\n");
            }
        
            res = CompChoice(res);

            if (res == 0 && counter == 0) {
                printf("The computer chose rock\n");
                if (strcmp(choice, "rock") == 0) {
                    printf("You tied\n");
                    t++;
                }
                else if (strcmp(choice, "paper") == 0) {
                    printf("You Win\n");
                    w++;
                } 
                else if (strcmp(choice, "scissors") == 0) {
                    printf("You Lose\n");
                    l++;
                }
            }
            else if (res == 0 && counter > 0) {
                printf("The computer chose rock\n");
                if (strcmp(choice, "r") == 0) {
                    printf("You tied\n");
                    t++;
                }
                else if (strcmp (choice, "p") == 0) {
                    printf("You Win\n");
                    w++;
                } 
                else if (strcmp(choice, "s") == 0) {
                    printf("You Lose\n");
                    l++;
                }
            }
            else if (res == 1 && counter == 0) {
                printf("The computer chose paper\n");
                if (strcmp(choice, "paper") == 0 || strcmp(choice, "p") == 0) {
                    printf("You tied\n");
                    t++;
                }
                else if (strcmp(choice, "scissors") == 0 || strcmp(choice, "s") == 0) {
                    printf("You Win\n");
                    w++;
                } 
                else if (strcmp(choice, "rock") == 0 || strcmp(choice, "r") == 0) {
                    printf("You Lose\n");
                    l++;
                }
            }
             else if (res == 1 && counter > 0) {
                printf("The computer chose paper\n");
                if (strcmp(choice, "p") == 0) {
                    printf("You tied\n");
                    t++;
                }
                else if (strcmp(choice, "s") == 0) {
                    printf("You Win\n");
                    w++;
                } 
                else if (strcmp(choice, "r") == 0) {
                    printf("You Lose\n");
                    l++;
                }
            }
            else if (res == 2 && counter == 0) {
                printf("The computer chose scissors\n");
                if (strcmp(choice, "scissors") == 0 || strcmp(choice, "s") == 0) {
                    printf("You Tied\n");
                    t++;
                }
                else if (strcmp(choice, "rock") == 0 || strcmp(choice, "r") == 0) {
                    printf("You Win\n");
                    w++;
                } 
                else if (strcmp(choice, "paper") == 0 || strcmp(choice, "p") == 0) {
                    printf("You Lose\n");
                    l++;
                }
            }
            else if (res == 2 && counter > 0) {
                printf("The computer chose scissors\n");
                if (strcmp(choice, "s") == 0) {
                    printf("You Tied\n");
                    t++;
                }
                else if (strcmp(choice, "r") == 0) {
                    printf("You Win\n");
                    w++;
                } 
                else if (strcmp(choice, "p") == 0) {
                    printf("You Lose\n");
                    l++;
                }
            }
            printf("\nYour record is %d-%d-%d\n\n", w, l, t);
            counter++;
        }
    }
    return 0;
}

int CompChoice (int result) {
    int choice = rand() % 3;
    return choice;
}
