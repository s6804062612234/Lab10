#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
    int BookID; 
    char BookTitle[50]; 
    } ComputerBook; 
void DisplayData(struct Books CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(ComputerBook); // ส่งข้อมูลไปยังฟังก์ชัน DisplayData 
    return 0; 
} 
    void DisplayData(struct Books CBook){ 
    printf("Book ID : %d \n",CBook.BookID); 
    printf("Book Title : %s \n",CBook.BookTitle); 
} 


// ทดสอบรันโปรแกรมและเขียนผลลัพท์พร้อมอธิบายโปรแกรม
// void DisplayData(struct Books CBook) คือ ฟังก์ชันที่จะปริ้น BookID กับ BookTitle ของ ComputerBook
// พารามิเตอร์ที่รับเข้ามา รับค่า ComputerBook
