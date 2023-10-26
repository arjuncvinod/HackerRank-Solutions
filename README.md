# Here is my HackerRank Solutions

>The repository contains the solutions to various HackerRank problems.Organize the solutions so they are easy to navigate and understand. Each solution includes a reference to the problem statement and is well-documented to explain the logic and approach.

### 1.Angry Professor


  - [Problem](https://www.hackerrank.com/challenges/angry-professor/problem?isFullScreen=true)
  - [Solution](/AngryProfessor.js)
  - Explanation: 
  This function, named `angryProfessor`, is designed to determine whether a professor will cancel a class or not based on the attendance of students. Let's break down how it works:

```javascript
function angryProfessor(k, a) {
```

The function is defined with two parameters: `k` and `a`. 
- `k` is an integer representing the minimum number of students required for the professor to conduct the class.
- `a` is an array of integers where each element represents the arrival time of a student. If `a[i]` is less than or equal to 0, it means the student arrived on time or early. If `a[i]` is greater than 0, it means the student arrived late.

```javascript
  let at = 0;
```

A variable `at` is initialized to 0. This variable will be used to count the number of students who arrived on time or early.

```javascript
  for (let i = 0; i < a.length; i++) {
    if (a[i] <= 0) at++;
  }
```

A `for` loop is used to iterate through the `a` array. For each student arrival time, it checks if `a[i]` is less than or equal to 0. If this condition is true, it means the student arrived on time or early, so the `at` counter is incremented.

```javascript
  if (at >= k) {
    return "NO";
  } else {
    return "YES";
  }
```

After counting the students who arrived on time or early, the function checks if the value of `at` is greater than or equal to `k`. If there are `k` or more students who arrived on time or early, the professor will not cancel the class, so the function returns the string "NO." Otherwise, if there are fewer than `k` students who arrived on time or early, the professor will cancel the class, and the function returns the string "YES."

In summary, this function takes in the minimum required attendance (`k`) and an array of student arrival times (`a`) and determines whether the professor will cancel the class ("YES") or conduct it ("NO") based on the number of students who arrived on time or early.
  
### 2.Bon Appetit

  - [Problem](https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=true)
  - [Solution](/BonAppetit.c)
  - Explanation: 
    The `bonAppetit` function calculates how much money one person should pay for a meal, taking into account that they want to split the bill with their friends. The function takes four parameters:

1. `bill_count`: An integer representing the number of items on the bill.
2. `bill`: A pointer to an array of integers, where each element of the array represents the cost of a particular item on the bill.
3. `k`: An integer representing the 0-based index of the item that one person did not consume or wants to exclude from their share.
4. `b`: An integer representing the amount of money that the person contributed initially.

Here's an explanation of what the function does:

1. It initializes an integer variable `s` to 0. This variable will be used to keep track of the total cost of the items that the person did consume.

2. The function then enters a `for` loop, iterating through the items on the bill from index 0 to `bill_count - 1`.

3. Inside the loop, it checks if the current item's index `i` is equal to the index `k`, which represents the item the person did not consume. If `i` is equal to `k`, it uses the `continue` statement to skip that item and proceeds to the next iteration of the loop.

4. For all other items (i.e., items not at index `k`), it adds their cost to the variable `s`. This is effectively calculating the total cost of the items that the person did consume.

5. After the loop, it checks if half of the total cost (`s/2`) is equal to the initial contribution `b`. If they are equal, it means that the person has contributed the correct amount for their share of the bill, and it prints "Bon Appetit" to indicate that everything is okay.

6. If `s/2` is not equal to `b`, it means the person contributed too much or too little. In this case, it calculates the difference between what they should have paid and what they initially contributed, which is `b - (s/2)`, and prints this value. This value could be positive or negative, indicating whether the person overpaid or underpaid, respectively.

So, in summary, the function helps determine whether a person's initial contribution to a shared meal bill is correct and provides feedback accordingly.

### 3.Cats And Mouse

  - [Problem](https://www.hackerrank.com/challenges/cat-and-mouse/problem?isFullScreen=true)
  - [Solution](/CatsAndMouse.c)
  - Explanation: 
1. `abs(z-x)` calculates the absolute difference between the position of Cat A (at `x`) and the position of the mouse (at `z`).
2. `abs(z-y)` calculates the absolute difference between the position of Cat B (at `y`) and the position of the mouse (at `z`).

The function then compares these absolute differences to determine which cat will catch the mouse first, or if the mouse escapes:

- If `abs(z-x) < abs(z-y)`, it means Cat A is closer to the mouse than Cat B, and the function returns the string "Cat A." Cat A catches the mouse first.

- If `abs(z-x) == abs(z-y)`, it means both Cat A and Cat B are equidistant from the mouse. In this case, the function returns the string "Mouse C." The mouse escapes because it's in the middle.

- If neither of the above conditions is met, it means `abs(z-y) < abs(z-x)`, which indicates that Cat B is closer to the mouse than Cat A. In this case, the function returns the string "Cat B." Cat B catches the mouse first.

So, the function essentially determines which of the two cats will catch the mouse first based on their positions and returns the appropriate string.


### 4.Compare The Triplets

  - [Problem](https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true)
  - [Solution](/CompareTheTriplets.c)
  - Explanation: 
 `compareTriplets`function compare two sets of integer values and determine the number of elements that are greater in one set compared to the other. The function takes as input two arrays, `a` and `b`, each of which represents a set of values. It also takes two integers, `a_count` and `b_count`, which specify the number of elements in each array. Finally, it takes a pointer to an integer, `result_count`, which will be used to store the number of elements in the result array.

Here's how the function works:

1. It initializes two variables, `alice` and `bob`, to zero. These two variables will be used to keep track of the number of elements that are greater in `a` and `b`, respectively.

2. It then enters a `for` loop that iterates over the elements in the arrays `a` and `b`. The loop uses an index variable `i` to access each element in both arrays.

3. Inside the loop, it compares the elements at the same index in the `a` and `b` arrays:
   - If `a[i]` is greater than `b[i]`, it means that Alice's score is incremented by 1 because the element in array `a` is greater.
   - If `b[i]` is greater than `a[i`, it means that Bob's score is incremented by 1 because the element in array `b` is greater.
   - If the elements are equal, nothing happens.

4. After the loop has finished, the function sets `*result_count` to 2. This is because the result array will always have two elements: Alice's score and Bob's score.

5. It then creates a static integer array `c` of size 2. The use of the `static` keyword here ensures that the array retains its value between function calls, making it safe to return a pointer to this array.

6. The function stores the values of `alice` and `bob` in the `c` array. `c[0]` stores Alice's score, and `c[1]` stores Bob's score.

7. Finally, it returns a pointer to the `c` array, which contains the scores for Alice and Bob. The caller of the function can use this pointer to access the results.

In summary, this function takes two arrays, compares their elements, and calculates the scores for Alice and Bob based on the comparisons. It then returns a pointer to an array containing these scores.

### 5.Diagonal Difference

  - [Problem](https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true)
  - [Solution](/DiagonalDifference.c)
  - Explanation: 
 The `diagonalDifference` function calculates the absolute difference between the sums of two types of diagonals in a 2D array, typically representing a square matrix. Let's break down the function step by step:

```c
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
```

This function takes three parameters:
- `arr_rows`: An integer representing the number of rows in the 2D array.
- `arr_columns`: An integer representing the number of columns in the 2D array.
- `arr`: A pointer to a pointer to an integer, representing the 2D array itself.

```c
int pdsum = 0, sdsum = 0, diff = 0;
```

Three integer variables are declared:
- `pdsum`: This variable will be used to store the sum of elements on the primary diagonal.
- `sdsum`: This variable will be used to store the sum of elements on the secondary diagonal.
- `diff`: This variable will store the absolute difference between the sums of the two diagonals.

```c
for (int i = 0; i < arr_columns; i++) {
    sdsum += arr[i][arr_columns - i - 1];
}
```

The function then enters a loop that iterates through the columns of the 2D array. Inside the loop, it calculates the sum of elements on the secondary diagonal. The secondary diagonal is formed by elements at positions `[0][n-1]`, `[1][n-2]`, `[2][n-3]`, and so on. It calculates the sum by accessing the array elements at positions `[i][arr_columns - i - 1]` and adding them to the `sdsum` variable.

```c
for (int i = 0; i < arr_columns; i++) {
    pdsum += arr[i][i];
}
```

Next, there's another loop that iterates through the columns, and it calculates the sum of elements on the primary diagonal. The primary diagonal consists of elements at positions `[0][0]`, `[1][1]`, `[2][2]`, and so on. It calculates the sum by accessing the array elements at positions `[i][i]` and adding them to the `pdsum` variable.

```c
diff = abs(pdsum - sdsum);
```

After calculating the sums of both diagonals, it calculates the absolute difference between the sums and stores it in the `diff` variable.

Finally, the function returns the absolute difference as its result.

In summary, this function takes a square 2D array and calculates the absolute difference between the sums of its primary and secondary diagonals. It's often used in programming challenges related to matrix manipulation.

### 6.Divisible Sum Pairs

  - [Problem](https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true)
  - [Solution](/DivisibleSumPairs.js)
  - Explanation: 

  The`divisibleSumPairs` function takes three parameters:

1. `n` - An integer, which represents the length of the array `ar`.
2. `k` - An integer, which is the divisor you want to check for divisibility.
3. `ar` - An array of integers.

The purpose of this function is to count pairs of elements from the `ar` array such that the sum of the elements in each pair is divisible by `k`. Let's break down how it works:

1. It initializes a variable `count` to 0. This variable will be used to keep track of the count of pairs that meet the divisibility condition.

2. The function uses two nested `for` loops to iterate through all possible pairs of elements in the `ar` array. The outer loop iterates over elements with index `i` from 0 to `n - 1`, and the inner loop iterates over elements with index `j` from 0 to `n - 1`.

3. In each iteration of the loops, it checks whether `i` is less than `j` to ensure that it doesn't count the same pair twice. It's interested in unique pairs, so it avoids counting pairs with the same elements in reverse order (e.g., if it has already counted the pair (ar[i], ar[j]), it won't count the pair (ar[j], ar[i])).

4. Inside the conditional statement, it calculates the sum of the elements at indices `i` and `j` in the `ar` array using `ar[i] + ar[j]`. It then checks if this sum is divisible by `k` using the modulo operator (`%`). If the sum is divisible by `k` (i.e., the remainder is 0), it increments the `count` variable by 1.

5. After both loops have finished iterating over all pairs of elements, the function returns the final value of the `count` variable, which represents the count of pairs in the `ar` array for which the sum of elements is divisible by `k`.

In summary, this function counts pairs of elements in an array such that the sum of the elements in each pair is divisible by a given integer `k`. It uses nested loops to compare all possible pairs and increments a counter when a valid pair is found.

### 7.Find The Median

  - [Problem](https://www.hackerrank.com/challenges/find-the-median/problem?isFullScreen=true)
  - [Solution](/FindTheMedian.js)
  - Explanation: 
    The`findMedian` function find and return the median value of an array of numbers. The median is the middle value of a dataset when it is ordered. Here's a step-by-step explanation of how the function works:

1. `function findMedian(arr)`: This line defines a function named `findMedian`, which takes one argument, `arr`, representing an array of numbers.

2. `let len = arr.length;`: This line calculates the length of the input array `arr` and stores it in the variable `len`. The length of an array represents the number of elements in that array.

3. `arr.sort();`: This line sorts the elements of the input array `arr` in ascending order. This is a crucial step for finding the median because it ensures that the elements are in the correct order for determining the middle value.

4. `let med = Math.floor(len / 2);`: Here, the code calculates the index of the middle element. It divides the length of the array `len` by 2 and then uses `Math.floor()` to round down to the nearest integer. This ensures that if the array has an even number of elements, you will get the lower of the two middle values, which is the correct approach for calculating the median.

5. `return arr[med];`: Finally, the function returns the value at the index `med` in the sorted array `arr`. This value is the median of the input array because, after sorting and determining the middle index, it corresponds to the median value.

### 8.Flipping Bits

  - [Problem](https://www.hackerrank.com/challenges/flipping-bits/problem?isFullScreen=true)
  - [Solution](/FlippingBits.c)
  - Explanation: 
    The function `flippingBits` takes a single argument `n`, which is a long integer, and it returns the result of flipping all the bits in the binary representation of `n`. Let's break down how it works:

1. `4294967295` is a 32-bit unsigned integer with all its bits set to 1. In binary, it looks like this: `11111111111111111111111111111111`.

2. `n` is also a long integer, and it is expected to be a 32-bit value, but it can be of any size. When you subtract `n` from `4294967295`, it effectively inverts all the bits in `n`. This is done using bitwise negation.

   - Bitwise negation (complement) of a binary number flips all its bits from 0 to 1 and from 1 to 0. For example, if `n` is `10101010` in binary, then bitwise negation of `n` will be `01010101`.

3. The function returns the result of this operation, which will be a long integer with all the bits in `n` flipped.

This function can be used to "flip" the bits of a binary number, effectively changing all 0s to 1s and all 1s to 0s, assuming that the input `n` is a 32-bit integer. It's important to note that if `n` is not a 32-bit integer, the function might not produce the desired result, as it relies on a fixed value of `4294967295` which corresponds to a 32-bit integer.

### 9.Migratory Birds

  - [Problem](https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true)
  - [Solution](/MigratoryBirds.js)
  - Explanation: 
  This `migratoryBirds(arr)`function find and return the most common type of bird based on an array of bird sightings. It uses a counting approach to determine which bird type appears most frequently in the array. Here's a step-by-step explanation of how it works:

1. `let sorted = arr.sort();`: The function starts by sorting the input array `arr`. This sorts the elements in `arr` in lexicographic (alphabetical) order. Note that this will not work correctly if the bird types are not represented by numbers or simple strings. If the bird types are represented by complex objects or need more sophisticated comparisons, you may need to provide a custom comparison function to the `sort` method.

2. `let ans = sorted[0];`: The `ans` variable is initialized with the first element of the sorted array. This initial value assumes that the first element is the most common bird type. The function will update this value if it finds a bird type with a higher occurrence count.

3. `let maxOccur = 1, counter = 0;`: `maxOccur` is initialized to 1, and `counter` is initialized to 0. `maxOccur` will keep track of the maximum occurrence count, and `counter` will help count the occurrences of the current bird type.

4. The function then enters a `for` loop that iterates over the sorted array. It starts at the first element (index 0) and goes through each element in the array.

5. `counter = sorted[i] === sorted[i - 1] ? counter + 1 : 0;`: In this line, the code checks if the current bird type (`sorted[i]`) is the same as the previous bird type (`sorted[i - 1]`). If they are the same, `counter` is incremented by 1 to keep track of the consecutive occurrences of the same bird type. If they are not the same, `counter` is reset to 0.

6. `if (counter > maxOccur) { ans = sorted[i]; maxOccur = counter; }`: This conditional statement checks if the `counter` is greater than the current maximum occurrence count (`maxOccur`). If it is, it updates `ans` with the current bird type (`sorted[i]`) and updates `maxOccur` to the new maximum occurrence count.

7. The loop continues, and if a bird type with a higher occurrence count is found, `ans` and `maxOccur` are updated. This process continues until the end of the sorted array is reached.

8. Finally, the function returns `ans`, which should now hold the bird type with the highest occurrence count in the input array `arr`.

The purpose of this function is to determine the most common bird type in a given array of sightings and return that bird type.


### 10.Strange Advertising

  - [Problem](https://www.hackerrank.com/challenges/strange-advertising/problem?isFullScreen=true)
  - [Solution](/StrangeAdvertising.js)
  - Explanation: 
    The`viralAdvertising(n)` function calculates the number of people who "like" a product or service through a viral advertising campaign, given a certain number of days `n`. The function simulates how advertising spreads through a network of people, with each person exposed to the product or service sharing it with others.

Here's a step-by-step explanation of the function:

1. `let rec = 5, like = 0;`: This line initializes two variables, `rec` and `like`. 
   - `rec` is the number of people who see the ad on the first day (in this case, 5 people).
   - `like` is the running total of people who "like" the ad.

2. `for (let i = 0; i < n; i++) {`: This line starts a loop that iterates for `n` days. It simulates the advertising campaign for `n` days.

3. `like += Math.floor(rec / 2);`: Inside the loop, this line updates the `like` variable. It calculates how many people "like" the ad on the current day and adds it to the running total `like`.
   - `rec / 2` represents the number of people who see the ad and decide to "like" it. `Math.floor` is used to round down to the nearest whole number because you can't have a fraction of a person "liking" something.

4. `rec = Math.floor(rec / 2) * 3;`: This line updates the `rec` variable for the next day. It calculates how many people will be exposed to the ad on the following day. 
   - `rec / 2` represents the number of people who saw the ad on the current day and shared it with others (assuming each person shares it with exactly 2 others, which is why it's divided by 2).
   - Multiplying by 3 simulates the idea that each person who saw the ad on the current day shared it with 3 new people on the next day. 

5. The loop continues for `n` days, updating `like` and `rec` each day.

6. Finally, after the loop has completed, the function returns the total number of people who "liked" the ad, which is stored in the `like` variable.

In summary, the function models a viral advertising campaign by tracking how many people like the ad each day and how many new people are exposed to the ad through sharing. It returns the cumulative number of people who liked the ad over the specified number of days `n`.