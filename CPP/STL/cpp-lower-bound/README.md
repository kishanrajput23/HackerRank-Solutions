## [Lower Bound-STL](https://www.hackerrank.com/challenges/cpp-lower-bound/problem)

**Domain:** C++  
**Subdomain:** STL  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are given  integers in sorted order. Also, you are given  queries. In each query, you will be given an integer and you have to tell whether that integer is present in the array. If so, you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present.</p>

<p>Lower bound is a function that can be used with a sorted vector. Learn how to use lower bound to solve this problem by <a href="http://www.cplusplus.com/reference/algorithm/lower_bound/">clicking here</a>.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line of the input contains the number of integers . The next line contains  integers in sorted order. The next line contains , the number of queries. Then  lines follow each containing a single integer .<br></p>

<p>Note: If the same number is present multiple times, you have to print the first index at which it occurs. Also, the input is such that you always have an answer for each query.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li><br></li>
<li>,where  is  element in the array.<br></li>
<li><br></li>
<li><br></li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For each query you have to print "Yes" (without the quotes) if the number is present and at which index(1-based) it is present separated by a space.<br></p>

<p>If the number is not present you have to print "No" (without the quotes) followed by the index of the next smallest number just greater than that number.<br></p>

<p>You have to output each query in a new line.<br></p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code> 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code> Yes 1
 No 5
 Yes 6
 Yes 8
</code></pre></div></div></div>
