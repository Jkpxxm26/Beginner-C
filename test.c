#include <stdio.h>
#include <stdbool.h>
// 1.(format string , list of data)
// int main() {
//     printf("Student Data\n");
//     printf("FirstName = %s \nLastName = %s", "Kong", "5555"); //Kong and 5555 is List of data. (%s is format string รับค่าString)
//     printf("Age = %d", 30); // 30 is List of data. (%s is format string รับตัวเลขจำนวนเต็ม)
//     printf("Gender = %c", 'M'); // %c is character
//     printf("GPAX = %f", 3.75); 
//     return 0;
// }

// 2.(การประกาศตัวแปร)
// int main()
// {
//     // (1)ชนิดข้อมูล ชื่อตัวแปร = ค่าเริ่มต้น
//     int num = 10;
//     float float_num = 1.5;
//     char text = 'P';
//     char text_box[10] = "Prem";

//     // (2) ชนิดข้อมูล ตัวแปร [เตรียมสร้างพื้นที่ไว้เก็บข้อมูล แต่ยังไม่มีข้อมูล]
//     int Num1, Num2;
//     int Num;
//     float Float;


//     return 0;
// }

// int main()
// {
//     //Student data
//     char name1[10] = "Prem", gender = 'M';
//     int age = 25;
//     float gpax = 3.75;
//     bool status = true;

//     age = 30; //เปลี่ยนค่าของตัวแปร
//     gpax = 4.00;


//     //Output
//     printf("%c \n", name1);
//     printf("%d \n", age );
//     printf("%c \n", gender );
//     printf("GPAX :%3.f\n", gpax );
//     printf("Status :%d\n", status ); //bool มี2สถานะ True:1 , False:0
//     return 0;
// }

// 3.ค่าคงที่
// #define ID 101 //นิยามค่าคงที่ เก็บไว้ที่ID (ชื่อต้องเป็นตัวพิมพ์ใหญ่ทั้งหมด) ID <-- 101

// int main()
// {
//     const battery_max = 100; // Memory constant (เปลี่ยนค่าไม่ได้)

//     printf("Name: %s", "Prem"); //Literal constant
//     printf("ID = %d", ID);
//     printf("Max: %d", battery_max);
// }

// 4.Input
// int main()
// {
//     //data
//     char name[10], gender;
//     int age;
//     float gpa;

//     //input
//     printf("Input name = ");
//     scanf("%s", &name);
//     printf("Input age = ");
//     scanf("%d", &age);
//     printf("Input gender = ");
//     scanf(" %c", &gender);
//     printf("Input gpa = ");
//     scanf(" %f", &gpa);


//     //output
//     printf("--------------------------\n");
//     printf("Your name is %s\n", name);
//     printf("Your age is %d\n", age);
//     printf("Your gender is %c\n", gender);
//     printf("Your gender is %.2f\n", gpa);
//     return 0;
// }

// 5.Operater and Operand
// int main()
// {
//     int num1, num2;

//     printf("Input num1 : ");
//     scanf("%d", &num1);
//     printf("Input num2 : ");
//     scanf("%d", &num2);
//     printf("------------------\n");
//     printf("%d + %d = %d", num1, num2, num1 + num2);
//     return 0;
// }


// int main()
// {
//     int a, b;
//     a = 10;
//     b = 20;

//     printf("Answer is %d\n", a);
//     printf("Prefix is %d\n", ++a);
//     printf("Current is %d\n", a);
//     printf("----------------------\n");
//     printf("Answer is %d\n", b);
//     printf("Prefix is %d\n", b++);
//     printf("Current is %d\n", b);
//     return 0;
// }

// int main()
// {
//     int x = 10;
//     int y = 1;
//     x = x+10;

//     printf("Before is %d\n", x);
//     printf("---------------------\n");
//     printf("Result is %d\n", x += y);
//     printf("---------------------\n");
//     printf("Result is %d\n", x -= y);
//     printf("---------------------\n");
//     printf("Result is %d\n", x *= 2);
//     printf("---------------------\n");
//     printf("Result is %d\n", x /= 2);
//     printf("---------------------\n");
//     printf("Result is %d\n", x %= 2);
//     printf("---------------------\n");
//     return 0;

// () --> ++,-- --> *,/,% --> +,- --> <,<=,>,>= --> +=,-=,*=,/=,%/

// }

int main()
{
    int score, grade;
    float num, gpa;

    num = 2.5;

    printf("Input your score : ");
    scanf("%d", &score);
    printf("-----------------------------\n");

    
    if (score >= 80 && score <= 100)
    {
        printf("Grade A+\n");
        grade = 4;
    }

    else if (score >= 75 && score < 80)
    {
        printf("Grade A\n");
        grade = 3.5;
    }
    
    else if (score >= 60 && score < 75)
    {
        printf("Grade B+\n");
        grade = 3;
    }

    else if (score >= 50 && score < 60)
    {
        printf("Grade B\n");
        grade = 2.5;
    }

    else
    {
        printf("You failed!\n");
    }

    printf("-----------------------------\n");
    printf("Gpa : %.2f", (grade * num + score) / 5.5);

    return 0;
    
}