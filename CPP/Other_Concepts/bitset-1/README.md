## [Bit Array](https://www.hackerrank.com/challenges/bitset-1/problem)

**Domain:** C++  
**Subdomain:** Other Concepts  
**Difficulty:** Hard  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are given four integers: , , , . You will use them in order to create the sequence  with the following pseudo-code.</p>

<pre><code>a[0] = S (modulo 2^31)
for i = 1 to N-1
    a[i] = a[i-1]*P+Q (modulo 2^31) 
</code></pre>

<p>Your task is to calculate the number of distinct integers in the sequence .</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>Four space separated integers on a single line, , , , and  respectively.</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>A single integer that denotes the number of distinct integers in the sequence .</p>

<p><strong>Constraints</strong>  </p>

<p><br>
<br></p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>3 1 1 1
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>3
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p></p>

<p>Hence, there are  different integers in the sequence.</p></div></div></div>
