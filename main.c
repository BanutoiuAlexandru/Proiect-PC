#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char[]);

int main()
{
const int MIN = 1;
const int MAX = 100;
int guess;
int guesses;
int answer;
int counter, r , r1 , count , i , n;
float score;
char choice;
char playername[30];
    mainhome:
        system("cls");
        printf("\t\t Home made game!\n ");
        printf("\n\t\t================================");
        printf("\n\t\t > Press S to start the game \n ");
        printf("\t\t > Press V to view the highest score \n ");
        printf("\t\t > Press R to reset the game scores \n ");
        printf("\t\t > Press H to for help \n ");
        printf("\t\t > Press Q to embrace cowardice ? \n ");
        choice=toupper(getch());
        if (choice=='V'){
            show_record();
            goto mainhome;

        }
        else if (choice=='H'){
            help();
            getch();
            goto mainhome;

        }
        else if (choice=='Q')
            exit(1);
        else if (choice=='S'){
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\t\t\tRegister your name: ");
            gets(playername);
            system("cls");
            printf("\n--------------- Hello Adventurer ! ---------------");
            printf("\n*****************************************************");
            printf("\nBefore your game will begin we must test to see if you are a human! ");
            printf("\nBut do not worry !");
            printf("\nYou will face some easy questions!");
            printf("\n**********************************");
            printf("\n**********************************");
            printf("\n**********************************");
            printf("\nBut if you answer wrong more than one");
            printf("\n the game shall never start!!!");
            printf("\n**********************************");
            printf("\n**********************************");
            printf("\n**********************************");
            /*
            leave some tips and tricks !!!
            */
            printf("\nPress Y to start the game!\n");
            printf("\nPress any other key to return to the main menu!\n");
        }
        if (toupper(getch())=='Y'){
            goto home;
        }
        else {
            goto mainhome;
            system("cls");
        }
        home:
            system("cls");
            count=0;
            for(i=1;i<=5;i++){
                system("cls");
                r1=i;
                switch(r1)
                {
                    case 1:
                        printf("\n\nWhat number is bigger between the following?");
                        printf("\n\nA. 31\t\tB. 101\t\tC. 99\t\tD. bananas");
                        if(toupper(getch())=='B')
                        {
                            printf("\n\nCORRECT!\n1");count++;
                            getch();
                            break;
                        }
                        else
                            {
                            printf("\nWRONG!!!");
                            getch();
                            break;
                        }
                    case 2:
                        printf("\n\nWhat shape has only 3 sides?");
                        printf("\n\nA. a circle \t\tB. a triangle\t\tC. a cube\t\tD. a potato");
                    if(toupper(getch())=='B')
                       {

                        printf("\n\nCORRECT!\n");count++;
                        getch();
                        break;
                       }
                       else{
                            printf("\nWRONG!!!");
                       getch();
                       break;

                       }
                       case 3:
                        printf("\n\nWhat color is the sky?");
                        printf("\n\nA.  red \t\tB.  purple\t\tC.  green\t\tD. blue");
                    if(toupper(getch())=='D')
                       {

                        printf("\n\nCORRECT!\n");count++;
                        getch();
                        break;
                       }
                       else{
                            printf("\nWRONG!!!");
                       getch();
                       break;

                       }
                       case 4:
                        printf("\n\nWhat is 1 + 1?");
                        printf("\n\nA.1 \t\tB.101\t\tC.2\t\tD.5");
                    if(toupper(getch())=='C')
                       {

                        printf("\n\nCORRECT!\n");count++;
                        getch();
                        break;
                       }
                       else{
                            printf("\nWRONG!!!");
                       getch();
                       break;

                       }
                       case 5:
                        printf("\n\nWhat from the following animals is a mammal?");
                        printf("\n\nA.a cow \t\tB.a worm\t\tC.a banana\t\tD.a eagle");
                    if(toupper(getch())=='A')
                       {

                        printf("\n\nCORRECT!\n");count++;
                        getch();
                        break;
                       }
                       else{
                            printf("\nWRONG!!!");
                       getch();
                       break;

                       }
                }

            }
            if(count>=4)  {
                goto test;
            }
            else{
                system("cls");
                printf("\n\nYou are not a human....GOOD BYE !");
                getch();
                goto mainhome;
            }
            test:
                system("cls");
                printf("\n\n\t**** Well done %s you are an official adventurer, now let's play the game!****",playername);
                printf("\n\n\n\tPress any key to start the game!");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                if(toupper(getch())=='p'){
                    goto game;
                }
                game:
counter=0;
srand(time(0));
answer = (rand() % MAX) + MIN;
do{
    printf("Enter a guess: ");
    scanf("%d" , &guess);
    if(guess > answer)
    {

        printf("Too high!\nPlease try again!\n");
    }
    else if (guess < answer)
    {
        printf("Too low!\nPlease try again!\n");
    }
    else
    {
        printf("CORRECT!\n");
    }
    guess++;
    guesses=guess;
    if(guesses==1)
    {
    counter+=10;
    }
    else if(guesses==2){
        counter+=8;
    }
    else if(guesses>=3 && guesses<=5){
        counter+=5;
    }
    else if(guesses>=6 && guesses <=8)
    {
        counter+=3;
    }
    else if(guesses>=9 && guesses <=10)
    {
        counter+=2;
    }
    else if(guesses>=11)
    {
        counter+=1;
    }score=counter;

}while(guess != answer);
printf("guesses: %d\n" , guess);
printf("answer : %d\n" , answer);
printf("score:   %f\n", score);
            return 0;

}
        void help()
        {
            system("cls");
            printf("\n\n       HELP");
            printf("\n--------------------------------------------------------------------------------------------------");
            printf("\nThis is a number guessing game");
            printf("\nThere are two challenges ");
            printf("\nFirst challenge is made out of a simple test to prove that you are a human");
            printf("\nThe second challenge is based on a number guessing game where you are rewarded points ");
            printf("\nFor each wrong guess you will be told if you went higher or lower than the generated number");
            printf("\nNumbers are randomly generated between 1 and 100");
            printf("\nBest of luck!");
            printf("\n--------------------------------------------------------------------------------------------------");
        }
        void edit_score1(int score, char plnm[30]){
            system("cls");
            int sc;
            char nm[30];
            FILE *f;
            f=open("score.txt", "r");
            fscanf(f , "%s%d", &nm,&sc);
            if (score>sc){
                sc=score;
                fclose(f);
                f=open("source.txt", "w");
                fprintf(f, "%s%d",plnm,sc);
            }
        }

        void show_record(){
        system("cls");
        char name[30];
        int scr;
       FILE *out = ("score.out" , "w");
     if (out == NULL) {
        fprintf(stderr, "ERROR: Can't open file %s", out);
        return -1;
     }

     fprintf(out, " %s %d\n", name, scr);
    printf("\n");
    fclose(out);

        }
