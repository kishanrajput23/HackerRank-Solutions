## [Smart Number](https://www.hackerrank.com/challenges/smart-number/problem)

**Domain:** Algorithms  
**Subdomain:** Debugging  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>In this challenge, the task is to debug the existing code to successfully execute all provided test files.</p>

<hr>

<p>A number is called a <em>smart</em> number if it has an odd number of factors. Given some numbers, find whether they are smart numbers or not.</p>

<p>Debug the given function <code>is_smart_number</code> to correctly check if a given number is a smart number. </p>

<p><strong>Note:</strong> You can modify only <em>one</em> line in the given code and you cannot add or remove any new lines.</p>

<p><em>To restore the original code, click on the icon to the right of the language selector.</em></p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line of the input contains , the number of test cases. <br>
The next  lines contain one integer each.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>   </li>
<li>, where  is the  integer.  </li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>The output should consist of  lines. In the  line print <em>YES</em> if the  integer has an odd number of factors, else print <em>NO</em>.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>4
1
2
7
169
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>YES
NO
NO
YES
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The factors of 1 are just 1 itself.So the answer is YES.
 The factors of 2 are 1 and 2.It has even number of factors.The answer is NO.
 The factors of 7 are 1 and 7.It has even number of factors.The answer is NO.
 The factors of 169 are 1,13 and 169.It has odd number of factors.The answer is YES.</p></div></div></div>
