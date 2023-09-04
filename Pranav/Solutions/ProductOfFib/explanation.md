#Explanation to ProductOfFib

Definitions in this article:
    i. Fibonacci product : A number which is a product of two consecutive fibonacci numbers in a series.

1. So basically the first step is to generate a fibonacci series of number. Don't use brute force for this, because it result in excessive runtime.
2. Use a principle of number theory. How are you able to do this? You should use the square root operation, to try and round off the number and generate a fib series with as many least number in the final list.
3. So here we use a while loop to add on the fibonacci series list. As we keep on adding to the list, we encounter a situation where the next number may be greater than the square root of the number which must be evaluated to be a  fibonacci product or not.
4. Here comes the role of number theory principle. Using this we can greatly shorten the length of the list. Lets say we have 49 to be evaluated as a fibonacci product, now rather than generating all fibonacii number upto 49, generate it only until we reach the a set where the product < 49.
5. Example we get sqrt(49) == 7, so  we can find cases till 6*8 only, which limits the length.