# Binary Cafe

In this question, I basically applied the concept that if there are more coins than the maximum value of coins spendable on the desserts, then it goes without saying that there would be 2^k possible choices through simple combinatorics.

On the other hand, if there are less coins spendable than the maximum amount which can be spent on the desserts, then we would only be able to fill up n+1 choices. This is done through detecting the position of the MSB bit in comparison to a shifted '1' bit by k times. 


I hope that solution made sense to whoever is reading this.

