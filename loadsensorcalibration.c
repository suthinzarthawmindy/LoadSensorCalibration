#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    // arrays
    double x[10] = {1,2,3,4,5,6,7,8,9,10}; //input
    double y[10] = {0.3,1.2,2.4,2.9,4.3,5.8,6.1,6.9,8.6,9.2}; //input

    int N = sizeof(x)/sizeof(x[0]);

    double sum_x = 0;
    double sum_y = 0;
    double square_x = 0;
    double sum_xy = 0;
/*Step1 & 2*/
    for(int i = 0; i < N; i++){
        sum_x += x[i]; //summation of x
        sum_y += y[i]; //summation of y
        square_x = square_x + (x[i] * x[i]); // summation of square of x
        sum_xy += x[i] + y[i]; //summation of xy
    }
/*step 3*/
    double m = ((N*sum_xy) - (sum_x * sum_y)) / ((N*square_x) - (sum_x*sum_x)); //calculation of m slope
/*step 4*/
    double c = (sum_y - (m*sum_x)) / N; //calculation of c intercept

    //mean
    double mean_x = sum_x/N;
    double Y = (m*mean_x) + c;

    printf("m: %f\n", m);
    printf("c: %f\n", c);
    //calculate x=56kg
    double x_val=56;
    double y_val= m *x_val+c;

    printf("Y = %0.3fx + %0.3f\n", m, c);

    printf("Y = %0.3f\n", Y);

    printf("sensor resistance when 56kg applied is %0.3f\n",y_val);
    return 0;
}
