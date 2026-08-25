## [Diagonal Difference](https://www.hackerrank.com/challenges/diagonal-difference/problem)

**Domain:** Algorithms  
**Subdomain:** Warmup  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Given a square matrix, calculate the absolute difference between the sums of its diagonals.  </p>

<p>For example, the square matrix  is shown below:  </p>

<pre><code>1 2 3
4 5 6
9 8 9  
</code></pre>

<ul>
<li>The left-to-right diagonal = .    </li>
<li>The right-to-left diagonal = .    </li>
</ul>

<p>Their absolute difference is .  </p>

<p><strong>Function description</strong></p>

<p>Complete the  function with the following parameter:  </p>

<ul>
<li>: a 2-D array of integers </li>
</ul>

<p><strong>Return</strong>  </p>

<ul>
<li>: the absolute difference in sums along the diagonals  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains a single integer, ,  the number of rows and columns in the square matrix . <br>
Each of the next  lines describes a row, , and consists of  space-separated integers .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>STDIN      Function
-----      --------
3           arr[][] sizes n = 3, m = 3
11 2 4     arr = [[11, 2, 4], [4, 5, 6], [10, 8, -12]]
4 5 6
10 8 -12
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>15
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The primary diagonal is:  </p>

<pre><code>11
   5
     -12
</code></pre>

<p>Sum across the primary diagonal: . </p>

<p>The secondary diagonal is:  </p>

<pre><code>     4
   5
10
</code></pre>

<p>Sum across the secondary diagonal:  <br>
Difference: </p>

<p><strong>Note:</strong> |x| is the <a href="https://www.mathsisfun.com/numbers/absolute-value.html">absolute value</a> of x.</p></div></div></div>
