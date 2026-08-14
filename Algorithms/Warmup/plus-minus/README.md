## [Plus Minus](https://www.hackerrank.com/challenges/plus-minus/problem)

**Domain:** Algorithms  
**Subdomain:** Warmup  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Given an array of integers, calculate the ratios of its elements that are , , and . Print the decimal value of each fraction on a new line with 6 places after the decimal.</p>

<p><strong>Note:</strong> This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.</p>

<p><strong>Example</strong> <br>
  </p>

<p>There are  elements: two positive, two negative and one zero.  Their ratios are ,  and .  Results are printed as:  </p>

<pre><code>0.400000
0.400000
0.200000
</code></pre>

<p><strong>Function Description</strong></p>

<p>Complete the  function with the following parameter(s):</p>

<ul>
<li>: an array of integers</li>
</ul>

<p><strong>Print</strong> <br>
    Print the ratios of positive, negative and  zero values in the array.  Each value should be printed on a separate line with  digits after the decimal.  The function should not return a value.  </p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer, , the size of the array. <br>
The second line contains  space-separated integers that describe .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p> <br>
  </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>0.500000
0.333333
0.166667
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>There are  positive numbers,  negative numbers, and  zero in the array. <br>
The proportions of occurrence are positive:  , negative:   and zeros:  .  </p></div></div></div>
