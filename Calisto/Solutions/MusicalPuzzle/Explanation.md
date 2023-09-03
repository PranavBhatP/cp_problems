#Musical Puzzle

In this solution, I have iterated from the index 0 to n-1. I have prepared a string from 2 adjacent characters and basically just checked whether the same combination has been seen before. I used a vector (a dynamic-allocation array in simple words) to keep a list of all the string pairs that have been seen. If the given string pair does not exist in that vector, then it is added into it. At the end, the size of the vector is returned as the final answer as it contains all the unique string pairs.

## Alternative Solution (Not Implemented due to lack of knowledge of DSA):

We can create a list (using any data structure in C++) which consists of all the pairs of adjacent letters. After this we can initialise a HashSet using this list and get its length.
