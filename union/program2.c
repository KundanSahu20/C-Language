#include<stdio.h>
#include<conio.h>

union product
{
    int pcode;
    int qty;
    float price;
};

void main()
{
    union product p;
    int size;
    p.pcode=102;
    p.qty=5;
    p.price=35.50;
    printf("Address of p = %u",&p);
    printf("\nProduct Code=%d",p.pcode);
    printf("\nProduct Quantity=%d",p.qty);
    printf("\nProduct Price=%f",p.price);
    size=sizeof(p);
    printf("\nTotal memory occupied by union variable in byte is %d",size);
    getch();

}
