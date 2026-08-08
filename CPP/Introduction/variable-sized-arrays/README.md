## [Variable Sized Arrays](https://www.hackerrank.com/challenges/variable-sized-arrays/problem)

**Domain:** C++  
**Subdomain:** Introduction  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Consider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the <em>Explanation</em> section below for a diagram.</p>

<p>Given , you must answer  queries. Each query is in the format <code>i j</code>, where  denotes an index in array  and  denotes an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.</p>

<p>Click <a href="http://www.cplusplus.com/reference/vector/vector/">here</a> to know more about how to create variable sized arrays in C++.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  (the number of queries). <br>
Each line  of the  subsequent lines contains a space-separated sequence in the format <code>k a[i]<sub>0</sub> a[i]<sub>1</sub> … a[i]<sub>k-1</sub></code> describing the -element array located at . <br>
Each of the  subsequent lines contains two space-separated integers describing the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
<li></li>
<li></li>
<li></li>
<li> </li>
<li>All indices in this challenge are zero-based.</li>
<li>All the given numbers are non negative and are not greater than </li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For each pair of  and  values (i.e., for each query), print a single integer that denotes the element located at index  of the array referenced by . There should be a total of  lines of output.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>5
9
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The diagram below depicts our assembled Sample Input:</p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/14507/1476906485-2c93045320-variable-length-arrays.png" alt="variable-length-arrays.png" title=""></p>

<p>We perform the following  queries:</p>

<ol>
<li>Find the array located at index , which corresponds to . We must print the value at index  of this array which, as you can see, is .</li>
<li>Find the array located at index , which corresponds to . We must print the value at index  of this array which, as you can see, is .</li>
</ol></div></div></div>
