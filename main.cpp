#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
using namespace std;


int POINTS_IN_DECKS = 288;
int Zero_points_in_decks  = 128;
int Total_cards = 416;
int player_points =0;
int banker_points =0;
void shuffle( int array[], int length);
int cardnumber= 0;
bool drawp = false;
bool drawb = false;
int main(void)
{
 int cards [Total_cards];
 for (int i = 0; i < POINTS_IN_DECKS +1; i++ )
    cards[i] = (i+1) %10 ;
 for (int i = 288; i < Total_cards; i++)
    cards[i] = 0;
//Before Shuffle
// SHUFFLE PRINT
for (int i= 0; i < Total_cards; i++)
    printf("cards[%d] = %d\n", i, cards[i]);
// SHUFFLE PRINT

// Before Shuffle
shuffle(cards, Total_cards);

// SHUFFLE PRINT
for (int i= 0; i < Total_cards; i++)
    printf("cards[%d] = %d\n", i, cards[i]);
// SHUFFLE PRINT

printf(" ------RULES-------\n");
printf("-------------------\n");
printf("9 POINTS = NATURAL WINS\n");
printf("6-7-8 STAND \n");
printf("0-1-2-3-4-5 DRAW\n");
printf("THE NEAREST TO 9 OR 9 WINS\n");
printf("Tie situation may occur\n");
printf("Any command from keyboard will end the program\n");
printf("------------------------\n");
printf("-----------------------\n");
printf("First Card to the player = [%d]\n", cards[cardnumber]);
player_points = player_points + cards[cardnumber];

cardnumber = cardnumber +1 ;

printf("Players Current point= [%d]\n\n", player_points);
printf("Second Card to the banker = [%d]\n", cards[cardnumber]);
banker_points = banker_points + cards[cardnumber];

cardnumber = cardnumber +1 ;

printf("Bankers Current point= [%d]\n\n", banker_points);
printf("Third Card to the player = [%d]\n", cards[cardnumber]);
player_points = (player_points + cards[cardnumber]) %10;

cardnumber = cardnumber +1 ;

printf("Players Current point= [%d]\n\n", player_points);
printf("Fourth Card to the banker = [%d]\n", cards[cardnumber]);
banker_points = (banker_points + cards[cardnumber]) %10;
printf("Bankers Current point= [%d]\n\n", banker_points);

cardnumber = cardnumber +1 ;

if (banker_points == player_points ==9 )
{
        printf("Natural Tie with 9!\n");
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d - %d,%d -Tie\n",cards[0], cards[2], cards[1], cards[3]);
        cin.get();
        return 0;

}
if (banker_points == 9)
{
        printf("Banker Natural Wins with 9!\n");
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d - %d,%d - Banker\n",cards[0], cards[2], cards[1], cards[3]);
        cin.get();
        return 0;
}

if  (player_points == 9)
{
    printf("Player Natural Wins with 9!\n");
    printf("PHand - Bhand - Outcome\n");
    printf("%d ,%d - %d,%d - Player\n",cards[0], cards[2], cards[1], cards[3]);
    cin.get();
    return 0;
}

if (player_points <= 5)
{
    printf("Player has 5 or less points, DRAW!\n");
    printf("Player draws [%d]\n",cards[cardnumber]);
    player_points = (player_points + cards[cardnumber]) %10;

    cardnumber = cardnumber +1 ;
    drawp = true;
    printf("Players Current point= [%d]\n", player_points);
}
if (banker_points <= 5 )
{
    printf("Banker has 5 or less points, DRAW!\n");
    printf("Banker draws [%d]\n",cards[cardnumber]);
    banker_points = (banker_points + cards[cardnumber]) %10;
    drawb = true;
    cardnumber = cardnumber +1 ;
    printf("Bankers Current point= [%d]\n", banker_points);
}

if (player_points > banker_points )
{
    printf("player wins\n");

     if(drawp && drawb == true )
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d, %d - %d, %d, %d - Player\n",cards[0], cards[2], cards[4], cards[1], cards[3], cards[5]);
        cin.get();
        return 0;
    }
    if(drawb == true)
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d - %d,%d, %d - Player\n",cards[0], cards[2], cards[1], cards[3],cards[cardnumber]);
        cin.get();
        return 0;
    }

    if(drawp == true)
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d, %d - %d, %d - Player\n",cards[0], cards[2], cards[4], cards[1], cards[3]);
        cin.get();
        return 0;
    }
    if(drawp == false)
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d - %d,%d - Player\n",cards[0], cards[2], cards[1], cards[3]);
        cin.get();
        return 0;
    }


    return 0;
}

if(banker_points > player_points)
{
    printf("Banker Wins\n");
    if(drawp && drawb == true )
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d, %d - %d, %d, %d - Banker\n",cards[0], cards[2], cards[4], cards[1], cards[3], cards[5]);
        cin.get();
        return 0;
    }
    if(drawb == true)
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d - %d,%d, %d - Banker\n",cards[0], cards[2], cards[1], cards[3],cards[cardnumber]);
        cin.get();
        return 0;
    }
    if(drawp == true)
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d, %d - %d, %d - Banker\n",cards[0], cards[2], cards[4], cards[1], cards[3]);
        cin.get();
        return 0;
    }
    if(drawp == false)
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d - %d,%d - Banker\n",cards[0], cards[2], cards[1], cards[3]);
        cin.get();
        return 0;
    }

    return 0;
}

if( banker_points == player_points)
{
    printf("Tie\n");


    if(drawp && drawb == true )
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d, %d - %d, %d, %d - Tie\n",cards[0], cards[2], cards[4], cards[1], cards[3], cards[5]);
        cin.get();
        return 0;
    }
    if(drawb == true)
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d - %d,%d, %d - Tie\n",cards[0], cards[2], cards[1], cards[3],cards[cardnumber]);
        cin.get();
        return 0;
    }
    if(drawp == true)
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d, %d - %d, %d - Tie\n",cards[0], cards[2], cards[4], cards[1], cards[3]);
        cin.get();
        return 0;
    }
    if(drawp == false)
    {
        printf("PHand - Bhand - Outcome\n");
        printf("%d ,%d - %d,%d - Tie\n",cards[0], cards[2], cards[1], cards[3]);
        cin.get();
        return 0;
    }

}
return 0;
}

void shuffle(int array[], int length)
{
    srand (time(NULL));
    for (int i =0; i < length; i++)
    {
        int swap_index = rand() % length;
        int temp = array [i];
        array [i] = array [swap_index];
        array[swap_index] = temp;

    }
}
