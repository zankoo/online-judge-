#include <stdio.h>
#include <string.h>

void A_to_mol(char a)
{
    if (a=='a'||a=='A') printf(".-");
    if (a=='b'||a=='B') printf("-...");
    if (a=='c'||a=='C') printf("-.-.");
    if (a=='d'||a=='D') printf("-..");
    if (a=='e'||a=='E') printf(".");
    if (a=='f'||a=='F') printf("..-.");
    if (a=='g'||a=='G') printf("--.");
    if (a=='h'||a=='H') printf("....");
    if (a=='i'||a=='I') printf("..");
    if (a=='j'||a=='J') printf(".---");
    if (a=='k'||a=='K') printf("-.-");
    if (a=='l'||a=='L') printf(".-..");
    if (a=='m'||a=='M') printf("--");
    if (a=='n'||a=='N') printf("-.");
    if (a=='o'||a=='O') printf("---");
    if (a=='p'||a=='P') printf(".--.");
    if (a=='q'||a=='Q') printf("--.-");
    if (a=='r'||a=='R') printf(".-.");
    if (a=='s'||a=='S') printf("...");
    if (a=='t'||a=='T') printf("-");
    if (a=='u'||a=='U') printf("..-");
    if (a=='v'||a=='V') printf("...-");
    if (a=='w'||a=='W') printf(".--");
    if (a=='x'||a=='X') printf("-..-");
    if (a=='y'||a=='Y') printf("-.--");
    if (a=='z'||a=='Z') printf("--..");
    if (a=='0') printf(".----");
    if (a=='1') printf("..---");
    if (a=='2') printf("...--");
    if (a=='3') printf("....-");
    if (a=='4') printf(".....");
    if (a=='5') printf("-....");
    if (a=='6') printf("--...");
    if (a=='7') printf("---..");
    if (a=='8') printf("----.");
    if (a=='9') printf("-----");
}

int main(void)
{
    char input[101];
    while (gets(input) != NULL)
    {
        int count = strlen(input);
        for(int i = 0; i < count-1; i++)
        {
            A_to_mol(input[i]);
            printf("===");
        }
        A_to_mol(input[count-1]);
        printf("\n");
    }
    return 0;
}
