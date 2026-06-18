#include <stdio.h>

char b[9] = {'1','2','3','4','5','6','7','8','9'};

void display()
{
    printf("\n%c|%c|%c\n", b[0], b[1], b[2]);
    printf("-+-+-\n");
    printf("%c|%c|%c\n", b[3], b[4], b[5]);
    printf("-+-+-\n");
    printf("%c|%c|%c\n\n", b[6], b[7], b[8]);
}

int win()
{
    int w[8][3] = {
        {0,1,2},{3,4,5},{6,7,8},
        {0,3,6},{1,4,7},{2,5,8},
        {0,4,8},{2,4,6}
    };

    for(int i=0; i<8; i++)
        if(b[w[i][0]] == b[w[i][1]] &&
           b[w[i][1]] == b[w[i][2]])
            return 1;

    return 0;
}

int main()
{
    int pos, player = 1, moves = 0;

    while(moves < 9)
    {
        display();

        printf("Player %d (%c) Enter Position: ",
               player,
               player == 1 ? 'X' : 'O');

        scanf("%d", &pos);

        if(pos < 1 || pos > 9 ||
           b[pos-1] == 'X' ||
           b[pos-1] == 'O')
        {
            printf("Invalid Move!\n");
            continue;
        }

        b[pos-1] = (player == 1) ? 'X' : 'O';
        moves++;

        if(win())
        {
            display();
            printf("Player %d Wins!\n", player);
            return 0;
        }

        player = 3 - player;   // Toggle between 1 and 2
    }

    display();
    printf("Match Draw!\n");

    return 0;
}