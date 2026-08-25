## [Divisible Sum Pairs](https://www.hackerrank.com/challenges/divisible-sum-pairs/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Given an array of integers and a positive integer , determine the number of  pairs where  and  +  is divisible by .  </p>

<p><strong>Example</strong>  </p>

<p> <br>
   </p>

<p>Three pairs meet the criteria:   and .  </p>

<p><strong>Function Description</strong></p>

<p>Complete the <em>divisibleSumPairs</em> function in the editor below.   </p>

<p>divisibleSumPairs has the following parameter(s):  </p>

<ul>
<li><em>int n:</em> the length of array   </li>
<li><em>int ar[n]:</em> an array of integers  </li>
<li><em>int k:</em> the integer divisor   </li>
</ul>

<p><strong>Returns</strong> <br>
-   <em>int:</em> the number of pairs  </p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains  space-separated integers,  and . <br>
The second line contains  space-separated integers, each a value of .  </p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>STDIN           Function
-----           --------
6 3             n = 6, k = 3
1 3 2 6 1 2     ar = [1, 3, 2, 6, 1, 2]
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code> 5
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Here are the  valid pairs when : </p>

<ul>
<li>   </li>
<li>   </li>
<li>   </li>
<li>   </li>
<li>   </li>
</ul></div></div></div>
