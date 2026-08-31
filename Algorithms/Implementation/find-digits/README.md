## [Find Digits](https://www.hackerrank.com/challenges/find-digits/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>An integer  is a <em>divisor</em> of an integer  if the remainder of .  </p>

<p>Given an integer, for each digit that makes up the integer determine whether it is a divisor.  Count the number of divisors occurring within the integer.  </p>

<p><strong>Example</strong> <br>
  </p>

<p>Check whether ,  and  are divisors of .  All 3 numbers divide evenly into  so return .  </p>

<p>  </p>

<p>Check whether , , and  are divisors of .  All 3 numbers divide evenly into  so return .  </p>

<p>  </p>

<p>Check whether  and  are divisors of .   is, but  is not.  Return .  </p>

<p><strong>Function Description</strong></p>

<p>Complete the <em>findDigits</em> function in the editor below.   </p>

<p>findDigits has the following parameter(s):</p>

<ul>
<li><em>int n</em>: the value to analyze  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the number of digits in  that are divisors of   </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line is an integer, , the number of test cases. <br>
The  subsequent lines each contain an integer, .  </p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p> <br>
</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>2
12
1012
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>2
3
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The number  is broken into two digits,  and . When  is divided by either of those two digits, the remainder is  so they are both divisors.</p>

<p>The number  is broken into four digits, , , , and .  is evenly divisible by its digits , , and , but it is <em>not</em> divisible by  as division by zero is undefined.</p></div></div></div>
