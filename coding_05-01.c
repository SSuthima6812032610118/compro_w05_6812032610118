#include <stdio.h>   // เรียกใช้ไลบรารีมาตรฐานสำหรับการแสดงผลทางหน้าจอ

int main() {    //เริ่มต้นฟังก์ชันหลักของโปรแกรม
    char firstname;      // ประกาศตัวแปร firstname เป็นตัวอักษร ใช้ตัวพิมพ์ใหญ่ตัวแรกของชื่อเล่น
    int age;             // ประกาศตัวแปร age เป็นจำนวนเต็ม แทนอายุ
    float weight;        // ประกาศตัวแปร weight เป็นเลขทศนิยม แทนน้ำหนัก

  // แสดงผลตัวแปรทั้งหมดในบรรทัดแรก
    printf("(FirstletterName [spacebar] Age [spacebar] weight): ");
    scanf("%c %d %f", firstname,&age, &weight);
   // แสดงผลแบบประโยคในบรรทัดที่สอง
    printf("student %c is %d yearsold.\n ", firstname, age);
    printf("His weight is %.f kg. \n", weight);

    return 0;// คืนค่า 0 เพื่อแสดงว่าโปรแกรมทำงานสำเร็จ

}