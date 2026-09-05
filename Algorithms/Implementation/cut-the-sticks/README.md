## [Cut the sticks](https://www.hackerrank.com/challenges/cut-the-sticks/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are given a number of sticks of varying lengths.  You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left.  At each iteration you will determine the length of the shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length.  When all the remaining sticks are the same length, they cannot be shortened so discard them.</p>

<p>Given the lengths of  sticks, print the number of sticks that are left before each iteration until there are none left.</p>

<p><strong>Example</strong> <br>
   </p>

<p>The shortest stick length is , so cut that length from the longer two and discard the pieces of length .  Now the lengths are .  Again, the shortest stick is of length , so cut that amount from the longer stick and discard those pieces.  There is only one stick left, , so discard that stick.  The number of sticks at each iteration are .  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>cutTheSticks</em> function in the editor below.  It should return an array of integers representing the number of sticks before each cut operation is performed.  </p>

<p>cutTheSticks has the following parameter(s):  </p>

<ul>
<li><em>int arr[n]:</em> the lengths of each stick  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int[]:</em>  the number of sticks after each iteration  </li>
</ul>

<p><strong>Input Format</strong>  </p>

<p>The first line contains a single integer , the size of . <br>
The next line contains  space-separated integers, each an , where each value represents the length of the  stick.  </p>

<p><strong>Constraints</strong>  </p>

<ul>
<li></li>
<li></li>
</ul>

<p><strong>Sample Input 0</strong></p>

<pre><code>STDIN           Function
-----           --------
6               arr[] size n = 6
5 4 4 2 2 8     arr = [5, 4, 4, 2, 2, 8]
</code></pre>

<p><strong>Sample Output 0</strong></p>

<pre><code>6
4
2
1
</code></pre>

<p><strong>Explanation 0</strong></p>

<div><pre><span></span>sticks-length        length-of-cut   sticks-cut
5 4 4 2 2 8             2               6
3 2 2 _ _ 6             2               4
1 _ _ _ _ 4             1               2
_ _ _ _ _ 3             3               1
_ _ _ _ _ _           DONE            DONE
</pre></div>


<p><strong>Sample Input 1</strong></p>

<pre><code>8
1 2 3 4 3 3 2 1
</code></pre>

<p><strong>Sample Output 1</strong></p>

<pre><code>8
6
4
1
</code></pre>

<p><strong>Explanation 1</strong></p>

<div><pre><span></span>sticks-length         length-of-cut   sticks-cut
1 2 3 4 3 3 2 1         1               8
_ 1 2 3 2 2 1 _         1               6
_ _ 1 2 1 1 _ _         1               4
_ _ _ 1 _ _ _ _         1               1
_ _ _ _ _ _ _ _       DONE            DONE
</pre></div>
</div></div></div>
