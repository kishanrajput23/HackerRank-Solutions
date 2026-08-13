## [Mini-Max Sum](https://www.hackerrank.com/challenges/mini-max-sum/problem)

**Domain:** Algorithms  
**Subdomain:** Warmup  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.  </p>

<p><strong>Example</strong> <br>
</p>

<p>The minimum sum is  and the maximum sum is .  The function prints</p>

<pre><code>16 24
</code></pre>

<p><strong>Function Description</strong>  </p>

<p>Complete the  function with the following parameter(s):</p>

<ul>
<li>: an array of  integers  </li>
</ul>

<p><strong>Print</strong>   </p>

<p>Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.No value should be returned. </p>

<p><strong>Note</strong> For some languages, like C, C++, and Java, the sums may require that you use a long integer due to their size.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>A single line of five space-separated integers.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p>  </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>1 2 3 4 5
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>10 14
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The numbers are , , , , and . Calculate the following sums using four of the five integers:</p>

<ol>
<li>Sum everything except , the sum is .</li>
<li>Sum everything except , the sum is .</li>
<li>Sum everything except , the sum is .</li>
<li>Sum everything except , the sum is .</li>
<li>Sum everything except , the sum is .</li>
</ol>

<p><strong>Hints:</strong> Beware of integer overflow! Use a 64-bit integer to store the sums.</p>

<hr>

<p>Need help to get started? Try the <a href="https://www.hackerrank.com/challenges/solve-me-first">Solve Me First</a> problem.</p></div></div></div>
