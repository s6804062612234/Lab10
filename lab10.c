#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook; 
void DisplayData(struct Books *CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(&ComputerBook);    // ส่งตำแหน่งที่อยู่ข้อมูลไปยังฟังก์ชัน DisplayData 
    return 0; 
} 
void DisplayData(struct Books *CBook){ 
    printf("Book ID : %d \n",(*CBook).BookID); 
    printf("Book Title : %s \n",CBook->BookTitle); 
} 



// ทดสอบรันโปรแกรมและเขียนผลลัพท์พร้อมอธิบายโปรแกรม
// (*CBook).BookID คือ ไปที่ Address ของค่าที่รับเข้ามาแล้วไปที่ field BookID
// CBook->BookTitle คือ เหมือนกับ (*CBook).BookID แค่เป็นวิธีที่ทำให้อ่านง่ายขึ้น
