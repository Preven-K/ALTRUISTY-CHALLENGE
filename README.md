## This Challenge contains 5 Questions each are very challenging and creative.

# ***QUESTION 1*** 
Ratan is a crazy rich person. And he is blessed with luck, so he always made the best profit possible with the shares he bought. 
That means he bought a share at a low price and sold it at a high price to maximize his profit. 
Now you are an income tax officer and you need to calculate the profit he made with the given values of stock prices each day. 
You have to calculate only the maximum profit Ratan earned.

Note that: Ratan never goes into loss.

Example 1:
Price = [ 1, 6, 2 ]
Ratan buys it on the first day and sells it on the second. Example 2:
Price = [ 9, 8, 6 ] 
The Price always went down, Ratan never bought it.
Input Format:
First line with an integer n, denoting the number of days with the value of the stack
Next n days, telling the price of the stock on that very day.

Output Format:
Maximum profit done by Ratan in a single line.

Constraints:
Number of days <=10^8

Sample Input for Custom Testing

Sample Input: 7, [ 1, 9, 2, 11, 1, 9, 2 ]
Sample Output:  10
Explanation: The maximum profit possible is when Ratan buys it in 1 rupee and sells it in 11.


# ***QUESTION 2*** 

Frogs are sitting on the x-axis of the plane. The x-axis is represented by a given string. * represents a frog and | represents a stone.
The string consists of only the above-mentioned characters. You are given a start index array and end index array, 
and calculate the number of frogs between the two stones including the endpoint.
Note – Array is 1 indexed

Example:
 s = ” |**|*| ”  
start Index = [ 1, 1 ]
end Index = [ 5, 6 ]
For the first pair of indices (1,5), the substrings are “|**|*”. There are 2 stars between a pair of bars. 
For the second pair of indices (1,6), the substring is  “|**|*|” and there are 2+1=3 stars in between the bars. 
Both of the answers are returned to the array [2,3].

Constraints

1 <= n <= 1051 <= Start Index[i] <= end Index[i]Each Character of s is either  ” * ”  or  ” | “
Input Format for Custom testing
First line contains a string S the next line contains an integer n, the no.of elements in startIndex. 
Each line i of the n subsequent lines contains an integer of the start index. the next line contains an integer n, 
the no. of elements in end Index. Each line i of the n subsequent lines contains an integer of the end index  

Sample Input for Custom Testing
Sample Case 0
*|*|  → s = ” *|*| ”
1 → startindex[] size=1
1 → startindex= 1
1 → endindex[] size=1
3 → endindex=3
Sample output: 0
Explanation: The substring from index =1 to index=3 is “*|*”. there is no consecutive pair of bars in this string.


# ***QUESTION 3*** 

You are given an array, You have to choose a contiguous subarray of length ‘k’, and 
find the minimum of that segment, return the maximum of those minimums.

Sample Input:
1 →  Length of segment x =1
5 →  size of space n = 5
1 → space = [ 1,2,3,1,2]
2 
3 
1 
2 
Sample Output: 3
Explanation: The subarrays of size x = 1 are [1],[2],[3],[1], and [2],Because each subarray only contains 1 element, 
each value is minimal with respect to the subarray it is in. The maximum of these values is 3. Therefore, the answer is 3.


# ***QUESTION 4*** 

At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). 
The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. 
The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.

Example 1:

7  -> Value of N[r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is separated by new line.
Output :

r -> [r,g,b,b,g,y,y]  -> “r” colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above:

r: 1 balloon
g: 2 balloons
b:  2 balloons
y : 2 balloons
Hence , r is only the balloon which is odd in number.
Example 2:
Input:

10 -> Value of N[a,b,b,b,c,c,c,a,f,c] -> B[], elements B[0] to B[N-1] where input each element is separated by new line.
Output :
b-> ‘b’ colour balloon is present odd number of times in the bunch.

Explanation:
From the input array above:

a: 2 balloons
b: 3 balloons 
c: 4 balloons 
f: 1 balloons 
Here, both ‘b’ and ‘f’ have odd number of balloons. But ‘b’ colour balloon occurs first.
Hence , b is the output.

Input Format for testing
The candidate has to write the code to accept: 2 input 

First input: Accept value for number of N(Positive integer number).Second Input : Accept N number of character values (B[]), 
where each value is separated by a new line.

Output format for testing
The output should be a single literal (Check the output in example 1 and example 2)

Constraints:

3<=N<=50
B[i]={{a-z} or {A-Z}}


# ***QUESTION 5*** 

Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, 
appearing for running test in track for 3 rounds. You need to record their oxygen level after every round. 
After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and 
select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.

Display the most fit trainee (or trainees) and the highest average oxygen level.

Note:

The oxygen value entered should not be accepted if it is not in the range between 1 and 100.If the calculated 
maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as 
“All trainees are unfit.Average Oxygen Values should be rounded.

Example 1:
INPUT VALUES
95
92
95
92
90
92
90
92
90

OUTPUT VALUES
Trainee Number : 1
Trainee Number : 3

Note:
Input should be 9 integer values representing oxygen levels entered in order as

Round 1

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 2

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 3

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Output must be in given format as in above example. For any wrong input final output should display “INVALID INPUT”
