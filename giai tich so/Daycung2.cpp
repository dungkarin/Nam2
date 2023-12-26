// Su dung phuong phap day cung tinh nghiem gan dung
 
#include <stdio.h>
#include <conio.h>
#include <math.h>
 
#define eps 0.0001
 
float f(float x)
{
        // Thay doi ham so o day:
    return x * x * x -8;
}
 
int main()
{
    float x, a, b;
    printf("\nNhap khoang nghiem a, b: ");
    scanf("%f%f", &a, &b);
     
    x = a - (b - a) * f(a) / (f(b) - f(a));
    if (f(x) * f(a) < 0) {
        do {
            b = x;
            x = a - ((b - a) * f(a) / (f(b) - f(a)));
            printf("\n%f\t%f\t%f\t%f", a, b, x, f(x));
        }
        while (fabs(x - b) > eps);
    }
     
    else {
        do {
            a = x;
            x = a - ((b - a) * f(a) / (f(b) - f(a)));
            printf("\n%f\t%f\t%f\t%f", a, b, x, f(x));
        }
        while (fabs(x - a) > eps);
    }
     
    printf("\nNghiem cua phuong trinh x = %f ", x);
    return 0;
}
