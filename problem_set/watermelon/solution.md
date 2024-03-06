# Watermelon
## Description
In this problem it is explained that they want to divide a watermelon into two parts,  
it is not obligatory to the parts to be equal, they just want each one to weight an even number of kilos.  
We will receive the total number of kilos and we need to print "YES" if we can divide it into two even number of kilos and "NO" otherwise.  
## Solution
We just need to know that if we divide an even number into two parts it will give us another even number,  
and if we divide an odd number it will give us another odd number,  
however, we must bear in mind that this even number must be greater than two, because \frac{2}{2} = 1 and 1 is not an even number.  
So the condition must be something like:
~~~ logic
// ...
    if weight > 2 and weight is even
        print("YES")
    else
        print("NO")
// ...
~~~
