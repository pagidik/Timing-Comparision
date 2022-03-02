# Pow function Vs Multiplication.

The square of two number can be calculated using 2 methods. 
	1. Multiplying two numbers.
	2. Using pow function.
To test which of these two methods is faster, we can calculate the time taken for each operation and determine the computational time. 

To make the operation measurable I have iterated the operation over a large number 99999999 times.

On comparison, the multiplication operation is at least 2 times as fast the pow function. The time varies depending on the size of the input number. No matter how big the input number was the results was that the multiplication is at least twice as fast as pow function. So there is no justification to use pow function for squaring two numbers. 

Pow function is justified only when we want to calculate the higher powers which is more than power of 8. The computation cost for power of 7 is almost equal for both operations. Or, if we want to compute non integral powers, we can use this function. 
