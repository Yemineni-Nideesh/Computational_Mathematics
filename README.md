# Computational Mathematics & Algorithmic Foundations
### Independent Explorations in Numerical Analysis, Coordinate Systems, and Matrix Spaces
**Author:** Yemineni Nideesh  
**Institution:** Indian Institute of Technology (IIT) Bhubaneswar  
**Language:** Pure C (`<stdio.h>`, `<math.h>`)

---

## 📌 Project Overview
This repository contains a curated collection of C programs developed to bridge the gap between computational logic and core mathematical concepts like Calculus, Linear Algebra, and Coordinate Geometry. 

Instead of standard software engineering tasks, these scripts focus on numerical methods, boundary value estimations, handling spatial geometric singularities, and multi-dimensional space operations. These represent practical models of mapping mathematical equations into structured, stable, and deterministic code.

---

## 📂 Repository Contents & File Directory

### 1. Bounded Area Numerical Integration
* **`riemann_semicircle.c`**: Performs numerical definite integration under a semicircular boundary curve (\(f(x) = \sqrt{1-x^2}\)) over a user-defined interval within the domain \([-1, 1]\). Deploys left-hand and right-hand Riemann sums to calculate explicit maximum and minimum area parameters, tracking mathematical error thresholds.
* **`riemann_parabola.c`**: Evaluates definite integral bounds under a parabolic curve (f(x) = x²). Computes discrete rectifying rectangular subdivisions over 1000 iterative steps to squeeze a continuous integration space into a measurable floating-point threshold.

### 2. Geometry & Differential Calculators
* **`line_intersection.c`**: Automates multi-point spatial coordinate analytics to compute slope gradients and acute angular intersections across Euclidean planes. Integrates custom safety structures for vertical lines (a=c or e=g) using the `INFINITY` constant from `<math.h>` to completely prevent division-by-zero runtime crashes.
* **`derivative.c`**: Calculates first-principle mathematical limits (\(\lim_{h \to 0} \frac{f(x+h)-f(x)}{h}\)) for high-degree polynomial functions (10x⁴ + 2x³ + x + 1). Utilizes an ultra-fine limit discretization step size (h = 0.000001) to evaluate true continuous slopes.

### 3. Approximation Theory & Linear Spaces
* **`euler_approximation.c`**: Approximates the transcendental constant value of Euler's number (e) to 6 decimal places. Evaluates an infinite Taylor series expansion (\(1 + \frac{1}{1!} + \frac{1}{2!} + \dots\)) using dynamic storage loops linked to an iterative factorial calculation engine.
* **`matrix_multiplication.c`**: Executes linear space calculations by deploying multidimensional arrays (2 × 3 and 3 × 2 matrices) processed through nested iteration tracks to calculate standard dot-product matrix transformations.

---

## 🧠 Key Quantitative & Technical Takeaways

* **Singularity Safeguards**: Designed custom exception-handling frameworks to address vertical lines and infinite slopes (m = ∞) gracefully, preventing computational undefined states.
* **Discrete Error Bounding**: Leveraged parallel calculation tracks (Left vs. Right Riemann methods) to systematically establish explicit upper and lower bounds around a continuous curve.
* **Floating-Point Precision Tracking**: Managed constraints regarding array scaling and data-type selection (`double` arrays vs. `int` return definitions) during complex factorial loops.

---

## 🚀 Ongoing Roadmap
* Integrate upcoming structural C scripts from my 3rd Semester **Data Structures Laboratory** (Linked lists, Stacks, Queues, Binary Search Trees).
* Deploy statistical tracking tools using concepts from ongoing **Probability and Statistics** coursework.
