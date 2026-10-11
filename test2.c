#include <stdio.h>

int main()
{
    // nested loop
    int start, end;

    printf("Input start : ");
    scanf("%d", &start);
    printf("Input end : ");
    scanf("%d", &end);
    
    if (start < end)
    {
        for (int i = start; i <= end; i++)
        {
            printf("----------------Table %d---------------------\n", i);
            for (int j = 1; j <= 12; j++)
            {
                printf("%d x %d\n",i, j, i * j);
            }
            
        }
    } 
    
    else if (start > end)
    {
        for (int i = start; i <= end; i--)
        {
            printf("----------------Table %d---------------------\n", i);
            for (int j = 1; j <= 12; j++)
            {
                printf("%d x %d\n",i, j, i * j);
            }
            
        }
    } //-------------ยังไม่เสร็จ เงื่อนไข2
    
        

    printf("End!");
    return 0;

    // for (int i = 1; i <= 2; i++)
    // {
    //     printf("%d\n", i);
    //     for (int j = 1; j <= 3; j++)
    //     {
    //         printf("%d\n", j);
    //     }
        
    // }
    

    // int number;
    // do
    // {
    //     printf("Input num : ");
    //     scanf("%d", &number);

    //     for (int i = 1; i <= 12; i++)
    //     {
    //         printf("Answer is %d\n", number * i);
    //     }
    //     printf("That is a answer of %d!\n", number);
        
    // } while (true);
    

    // int numbers, total = 0, i = 1;
    // do
    // {
    //     printf("Input%d : ", i);
    //     scanf("%d", &numbers);

    //     total += numbers;
    //     printf("Total all is %d\n", total);
    //     i++;
    // } while (true);
    

    // int number, total = 0;
    // for (int i = 1; i <= 5; i++)
    // {
    //     printf("Input%d : ", i);
    //     scanf("%d", &number);
    //     total += number;
    // }

    // printf("Total all is %d", total);

    // return 0;
}

// int main()
// {
//     // int count = 10;

    // while loop จะลูปก็ต่อเมื่อเงื่อนไขเป็นจริง ถ้าเงื่อนไขเป็นเท็จก็จะไม่ทำ/ออกจากลูป
    // while (count >= 1)
    // {
    //     printf("Hello World! %d\n", count);
    //     count--;
    // }
    
    // ถ้าเป็น do while loop ต่อให้เงื่อนไขจะเป็นจริงหรือจะเป็นเท็จ ก็จะทำสิ่งที่อยู่ในลูปขั้นต่ำ 1ครั้ง [ถ้าเงื่อนไขเป็นเท็จก็จะทำในลูป1ครั้ง และหยุดทำงาน]
//     do
//     {
//         printf("Num is %d\n", count);

//     } while (count < 10);

//     printf("End!");

// }

// int main()
// {

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Hello C %d\n", i);
//     }
    
// }

// int main()
// {
//     int a;
//     char text[10] = "";
    
//     printf("Numbers : ");
//     scanf("%d", &a);

//     if (a >= 1 && a < 10)
//     {
//         if (a == 5)
//         {
//             a = a + a;
//         }

//         else if (a == 7)
//         {
//             a = 67;
//         }
//     }

//     else if (a >= 10 && a < 100)
//     {
//         if (a == 55)
//         {
//             a = a + 45;
//         }
//     } else{
//       a = 0;
//     }

//     printf("%d", a);
    
    
// }

// int main()
// {
//     for (int n = 0; n < 10; n++)
//     {
//         printf("%d\n", n);
//         if (n == 5)
//         {
//             break;
//             // continue;
//         }
        
//     }

//     printf("End!");
    
// }