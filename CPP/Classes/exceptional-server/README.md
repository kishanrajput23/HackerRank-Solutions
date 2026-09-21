## [Exceptional Server](https://www.hackerrank.com/challenges/exceptional-server/problem)

**Domain:** C++  
**Subdomain:** Classes  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>In this challenge, you are required to handle error messages while working with small computational server that performs complex calculations. <br>
It has a function that takes  large numbers as its input and returns a numeric result. Unfortunately, there are various exceptions that may occur during execution.</p>

<p>Complete the code in your editor so that it prints appropriate error messages, should anything go wrong. The expected behavior is defined as follows:</p>

<ul>
<li>If the <em>compute</em> function runs fine with the given arguments, then print the result of the function call.  </li>
<li>If it fails to allocate the memory that it needs, print <code>Not enough memory</code>.  </li>
<li>If any other standard C++ exception occurs, print <code>Exception: S</code> where  is the exception's error message.  </li>
<li>If any non-standard exception occurs, print <code>Other Exception</code>.</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer, , the number of test cases. <br>
Each of the  subsequent lines describes a test case as  space-separated integers,  and , respectively.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p> <br>
</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For each test case, print a single line containing whichever message described in the <em>Problem Statement</em> above is appropriate. After all messages have been printed, the locked stub code in your editor prints the server load.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>2
-8 5
1435434255433 5
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>Exception: A is negative
Not enough memory
2
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p> is negative, hence 'Exception: A is negative' is thrown. 
Since the second input is too large, 'not enough memory' is displayed.
 is the server load.</p></div></div></div>
