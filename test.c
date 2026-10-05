#include <stdio.h>
// (format string , list of data)
// int main() {
//     printf("Student Data\n");
//     printf("FirstName = %s \nLastName = %s", "Kong", "5555"); //Kong and 5555 is List of data. (%s is format string รับค่าString)
//     printf("Age = %d", 30); // 30 is List of data. (%s is format string รับตัวเลขจำนวนเต็ม)
//     printf("Gender = %c", 'M'); // %c is character
//     printf("GPAX = %f", 3.75); 
//     return 0;
// }

int m = 1;
int x = 2;

int testCode(int x){
    int result = x * 10;
    return result;
}

int testCode1(int m){
    int result = 31 - m;
    return result;
}

int main(){
    int result = testCode(x) + testCode1(m);
    printf("Result is %d", result);
}
