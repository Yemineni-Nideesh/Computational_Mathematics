#include <stdio.h>
#include <math.h>

int main() {
float a, b, c, d;
printf("Enter your first line end points:\n");
scanf("(%f,%f) and (%f,%f)", &a, &b, &c, &d);

// Check if the first line is vertical
float m;
if (a == c) {
m = INFINITY; // Using float infinity from math.h 
printf("Slope of your first line is\ninf\n");
} else {
m = ((b - d) / (a - c));
printf("Slope of your first line is\n%f\n", m);
}

float e, f, g, h;
printf("\nEnter your second line end points:\n");
scanf(" (%f,%f) and (%f,%f)", &e, &f, &g, &h);

// Check if the second line is vertical
float n;
if (e == g) {
n = INFINITY;
printf("Slope of your second line is\ninf\n");
} else {
n = ((f - h) / (e - g));
printf("Slope of your second line is\n%f\n", n);
}

// When one of the slopes is infinite (vertical)
if ((a == c && f == h) || (e == g && b == d)) {
// One is perfectly vertical, the other is perfectly horizontal
printf("\nThe lines are perpendicular to each other.\n");
return 0;
} else if (a == c && e == g) {
// Both are vertical (parallel lines)
printf("\nThe acute angle (in radians) between your lines is\n0.000000\n");
return 0;
} else if (a == c) {
// Only line 1 is vertical: angle is |pi/2 - atan(n)|
float angle = fabsf((M_PI / 2.0) - atan(n));
printf("\nThe acute angle (in radians) between your lines is\n%f\n", angle);
return 0;
} else if (e == g) {
// Only line 2 is vertical: angle is |pi/2 - atan(m)|
float angle = fabsf((M_PI / 2.0) - atan(m));
printf("\nThe acute angle (in radians) between your lines is\n%f\n", angle);
return 0;
}

// Standard calculation if neither line is vertical
if (1 + m * n == 0) {
printf("\nThe lines are perpendicular to each other.\n");
return 0;
}

float i = fabsf((m - n) / (1 + m * n));
printf("\nThe acute angle (in radians) between your lines is\n%f\n", atan(i));

return 0;

}