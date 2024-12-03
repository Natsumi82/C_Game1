

#include  <stdio.h>
#include <conio.h>
#include <time.h>  
#include <stdlib.h>

int main() {
    srand((unsigned int)time(NULL));
    while (1) {
        //プレイヤーが丁（偶数）か半（奇数）かを入力する
        int player_number;
        do
        {
            printf("「丁（偶数）か半（奇数）か入力してください。」（[0]丁 [1]半）\n");

            // 文字を入力して数値に変換する
            player_number = _getch() - '0';
        } while ((player_number != 0) && (player_number != 1));

        // 入力結果を出力する
        printf("in:%d\n", player_number);
        if (player_number % 2 == 0) {
            printf("あなた「丁（偶数）を選択！」\n");
        }
        else
            printf("あなた「半（奇数）を選択！」\n");

        int dice1 = 1 + rand() % 6;
        int dice2 = 1 + rand() % 6;


        printf("AI「%d %dの", dice1, dice2);
        if ((dice1 + dice2) % 2 == 0) {
            printf("丁(偶数)！」\n");
        }
        else {
            printf("半(奇数)！」\n");
        }
        if ((dice1 + dice2) % 2 == player_number)
            printf("ＡＩ「あなたの勝ちです！」\n");
        else
            printf("ＡＩ「あなたの負けです！」\n");
        printf("\n");


    }

        return 0;
    }


