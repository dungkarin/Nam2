#include <stdio.h>
#include <conio.h>
#include <math.h>
 
#define eps 0.0001
 
float tinh_ham(float x)
{
    // thay doi ham so o day:
    return x * x * x -8;
}
 
float tinh_dao_ham(float x)
{
    // thay doi dao ham o day:
    return 3 * x * x ;
}
 
int main()
{
    float x, y = 0;
    printf("\nNhap x = ");
    scanf("%f", &x);
     
    do {
        y = x;
        float t = tinh_ham(y) / tinh_dao_ham(y);
        x = y - t;
        printf("\n%.3f\t%.3f", x, t);
    }
    while (fabs(x - y) > eps);
     
    printf("\n\nNghiem cua pt la: %f", y);
    return 0;
}
