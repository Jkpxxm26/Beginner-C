#include <stdio.h>

int main()
{
    // array
    // int score[5] = {}; //กำหนดขนาดพื้นที่ข้อมูล
    // int score1[10] = {1,2,3,4,5}; // อีก5ช่องว่างของข้อมูลที่เหลือจะมีค่าเริ่มต้นคือ 0
    int score2[] = {10,20,30,40}; // array แบบไม่กำหนดขนาด
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", score2[i]);
        if (score2[i] == score2[3])
        {
            score2[4] = 50;
            printf("---------------------\n");
        }
    }
    printf("%d\n", score2[4]);
    
    
    // char wow[] = {'a', 'e', 'i', 'o', 'u'};


    // putchar(ส่งออกตัวอักษร) , getchar(รับข้อมูลตัวอักษร)
    // char confirm;
    // printf("Do you want to exit program(Y/N): ");
    // confirm = getchar();
    // putchar(confirm);

    // puts(ส่งค่าstring) , gets(รับstring)
    // char name[20];
    // printf("Input your name : ");
    // gets(name);
    // puts(name);

    return 0;
}