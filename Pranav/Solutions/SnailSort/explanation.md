# Snail sort

1. So the logic to this probelm runs on two lines, using iterations to run thorugh the code,and solving the problem, and using the pop function to delete whatever elements.

2. For Eg in the example below

[1,2,3]
[4,5,6]
[7,8,9]

Note: All the code is encased in a while loop so that we check whether the snail_map can be further iterated or not.

So in the above example,we first iterate through row 1. We append each element of the row 1 and once that is done we pop the enitre row 1.

The array is now like;
[4,5,6]
[7,8,9]

final_map  is now like [1,2,3]

now we iterate through the last element of each row in the remaining array. These are 6 and 9. At the same time we pop each of them.

[4,5]
[7,8]

final_map is like: [1,2,3,6,9]

Now we iterate in reverse order though the last row in the remaining array and pop it at last

[4,5]

now the only thing left is to iterate through the the first columan of the remaining array in reverse order. Since this is 3x3 array, this step isnt best visualised here, since there is only one element in the first row of the remaining array. This is also popped.

[5]

Now the for loop repeats again and the first step in the loop runs. The snail_map list is not officialy empty, and the code breaks out of the while loop. 

Final_Map = [1,2,3,6,9,8,7,4,5]

### This is the solution enjoy!!