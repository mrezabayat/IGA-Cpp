# IGA-Cpp
In this project I am coding the isogeometric analysis tought in "Isogeometric Analysis: Toward Integration of CAD and FEA" book.

## Important Notes
### Chapter 2
- A knot vector in one dimension is a **non-decreasing** set of coordinates in the parameter space.
- Size of knot vector should be *n + p + 1* where
  - *p* is polynomial order
  - *n* is the number of basis functions used to construct the B-spline curve
- Elements in FEM are equivalent to "Knot Span" in IGA
- A knot vector is said to be **open** if its first and last knot values appear *p + 1* times.
- In one dimension, basis functions formed from open knot vectors are interpolatory at the **ends** of the parameter space interval and at the **corners** of patches in multiple dimensions, but they are not, in general, interpolatory at interior knots.
- In *Open Knot Vectors* in multiple dimensions the boundary of a B-spline object with *d* parametric dimensions is itself a B-spline object of dimension *d − 1*. 
