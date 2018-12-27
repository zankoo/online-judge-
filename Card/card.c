#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

#define CARD_NUM 54

typedef struct
{
    int suit;
    int number;
} card;

void initcardlist(card *cardList[])
{
    int cardCount = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 14; j++)
        {
            card *theCard = (card *)malloc(sizeof(card));
            theCard->suit = i;
            theCard->number = j;
            cardList[cardCount] = theCard;
            cardCount++;
        }
    }
}

int main(int argc, char const *argv[])
{
    card *cardList[CARD_NUM];
    initcardlist(cardList);
    for (int i = 0; i < 52; i++)
    {
        printf("%d %d\n", cardList[i]->suit, cardList[i]->number);
    }
    for (int i = 0; i < 52; i++)
    {
        free(cardList[i]);
    }
    return 0;
}
