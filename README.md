# lab3
To compile lab 3 part A:
make
To execute lab 3 part A:
./main

Part B:
For 1000 elements, the time required for "sort" is 0.000917s, while the time required for "insertion sort" is 0.041049s.
For 10000 elements, the time required for "sort" is 0.011412s, while the time required for "insertion sort" is 4.33937s.
For 100000 elements, the time required for "sort" is 0.157498s while the time required for "insertion sort" is 345.642s.
Meanwhile, for 1000000 elements, it takes 1.42836s to complete sorting using "sort" function, but it takes a very long time to complete the sorting using insertion sort. I have waited for more than 2 hours and it hasn't been done yet, and I don't plan to wait any longer.

From those result, here is my conclusion:
We know that for sort function, the runtime is O(n log n) and for insertion sort is  O(n^2). It means that when the number of elements to be sorted is small enough, the runtime of insertion sort is still not too long, and it is still acceptable to use insertion sort.
But for a big data like what we tested in this lab, the time required to complete the sorting using "sort" function is much less than the time required to complete sorting using "insertion sort" function, because the runtime of insertion sort will increase sharply(with a faster rate) as the number of the elements increases, while in sort function, the runtime increases with a slower rate as the number of elements increases. It concludes that it is more efficient to use sort function rather than insertion sort function when we have a big data.
