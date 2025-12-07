#include <stdio.h>
int main()
{
    // question 1
    int long long num;
    printf("please enter the no. whose square you have to find out_");
    scanf("%llu", &num);
    printf("your square is_ %llu", num * num);

    // question 2 (not in pdf)
    float height;
    float width;
    float area;

    printf("please enter the height_");
    scanf("%f", &height);
    printf("please enter the width_");
    scanf("%f", &width);
    area = ((height * width) / 2);
    printf("your area of the triangle is_ %f\n", area);
    // question 3
    printf("Vineet  MegaMart welcomes you!\n");
    float pencil_price;
    int pencil_quantity;
    float pen_price;
    int pen_quantity;
    float eraser_price;
    int eraser_quantity;
    float total_price;
    printf("please enter the price of one pencil_");
    scanf("%f", &pencil_price);
    printf("please enter the quantity of pencils_");
    scanf("%d", &pencil_quantity);
    printf("please enter the price of one pen_");
    scanf("%f", &pen_price);
    printf("please enter the quantity of pens_");
    scanf("%d", &pen_quantity);
    printf("please enter the price of one eraser_");
    scanf("%f", &eraser_price);
    printf("please enter the quantity of erasers_");
    scanf("%d", &eraser_quantity);
    total_price = (pen_quantity * pen_price) + (pencil_quantity * pencil_price) + (eraser_price * eraser_quantity);
    printf("the total price is_ %f\n", total_price);
    printf("gst applied is 18%%\n");
    float gst_price = total_price * 0.18;
    printf("the gst amount is_ %f\n", gst_price);
    printf("the final amount to be paid is_ %f\n", total_price + gst_price);
    printf("thank you for shopping with us!\n");

    // question 4
    float principal;
    float rate;
    float time;
    printf("please enter the principal amount_");
    scanf("%f", &principal);
    printf("please enter the rate of interest_");
    scanf("%f", &rate);
    printf("please enter the time in years_");
    scanf("%f", &time);
    float simple_interest = (principal * rate * time) / 100;
    printf("the simple interest is_ %f\n", simple_interest);

    // question 5
    const float pi = 3.14;
    float radius;
    printf("please enter the radius of the circle_");
    scanf("%f", &radius);
    float area_circle = pi * radius * radius;
    printf("the area of the circle is_ %f\n", area_circle);
    float circumference = 2 * pi * radius;
    printf("the circumference of the circle is_ %f\n", circumference);

    return 0;
}