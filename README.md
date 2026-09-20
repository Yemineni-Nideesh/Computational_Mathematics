# Numerical Methods and Math in C

Small C programs where I turn ideas from calculus, coordinate geometry, and linear algebra into working code. Each program is short, uses only `<stdio.h>` and `<math.h>`, and is meant to help me understand the math and how numbers behave on a computer.

**Author:** Yemineni Nideesh, B.Tech CSE, IIT Bhubaneswar (2025–2029)

## Programs

| File | What it does |
|---|---|
| `reimann_semicircle_area_calculator.c` | Estimates the area under f(x) = √(1 − x²) between two points in [−1, 1], using left and right Riemann sums with 1000 rectangles. |
| `reimann_x_2_area_calaculator.c` | Estimates the area under f(x) = x² between two points, using the same left/right Riemann sums. |
| `angle_between_lines.c` | Takes two lines as pairs of endpoints, prints their slopes, and gives the acute angle between them in radians. Vertical lines are handled as special cases. |
| `derivative_from_first_principle.c` | Approximates the derivative of 10x⁴ + 2x³ + x + 1 at a point using (f(x+h) − f(x)) / h with h = 0.000001. |
| `euler_constant_approximation_taylor_series.c` | Approximates e by summing 1/0! + 1/1! + … + 1/n!. |
| `matrix_multiplier.c` | Multiplies a 2×3 matrix by a 3×2 matrix with nested loops and prints the 2×2 result. |

## What I practiced

- Turning a formula (Riemann sum, difference quotient, Taylor series) into a loop.
- Handling edge cases: vertical lines have no finite slope, so they need their own branch.
- Choosing data types carefully. Factorials grow fast, and `int` overflows quickly.
- Working with nested arrays and loops for matrix multiplication.

## Known limitations

I'm listing these on purpose, because knowing where a method breaks is part of understanding it.

- **Riemann sums:** the left and right sums only bracket the true area when the function is monotonic on the interval. For x², that holds when both endpoints are on the same side of 0. For the semicircle, it fails when the interval crosses x = 0, where the function peaks. In those cases the two values are estimates, not strict bounds. The sums also use `float`, so rounding error builds up over 1000 additions.
- **Derivative:** this is a forward-difference approximation, not an exact derivative. A very small h also causes floating-point cancellation errors. Compare against the exact answer, 40x³ + 6x² + 1.
- **Euler's number:** the sum reaches 6 decimal places from about n = 10, and the program works for n up to 33 (at n = 34 the factorial wraps to 0 and the result is `inf`). Factorials are stored as `int`, which overflows above 12!, so beyond n = 12 the extra digits are contaminated by overflow error. Switching the factorial to `double` would remove both problems.
- **Angle between lines:** it compares floats with `==` and assumes each line's two points are distinct.
- **Matrix multiplication:** the matrices are hardcoded, not read from user input.

## Build and run

```bash
gcc angle_between_lines.c -o angle -lm
./angle
```

## Roadmap

- Data structures from my 3rd-semester lab: linked lists, stacks, queues, binary search trees.
- Small statistics programs alongside my Probability and Statistics course.
- Fix the limitations above (`double` precision, factorial overflow, matrix input).
