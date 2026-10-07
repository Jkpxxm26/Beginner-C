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
#define ID 101 //นิยามค่าคงที่ เก็บไว้ที่ID (ชื่อต้องเป็นตัวพิมพ์ใหญ่ทั้งหมด) ID <-- 101

int main()
{
    const battery_max = 100; // Memory constant (เปลี่ยนค่าไม่ได้)

    printf("Name: %s", "Prem"); //Literal constant
    printf("ID = %d", ID);
    printf("Max: %d", battery_max);
}