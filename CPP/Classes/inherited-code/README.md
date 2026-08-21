## [Inherited Code](https://www.hackerrank.com/challenges/inherited-code/problem)

**Domain:** C++  
**Subdomain:** Classes  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You inherited a piece of code that performs username validation for your company's website. The existing function works reasonably well, but it throws an exception when the username is too short. Upon review, you realize that nobody ever defined the exception. </p>

<p>The inherited code is provided for you in the locked section of your editor. Complete the code so that, when an exception is thrown, it prints <code>Too short: n</code> (where  is the length of the given username). </p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer, , the number of test cases. <br>
Each of the  subsequent lines describes a test case as a single username string, .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>  </li>
<li>The username consists only of uppercase and lowercase letters.</li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>You are not responsible for directly printing anything to stdout. If your code is correct, the locked stub code in your editor will print either <code>Valid</code> (if the username is valid), <code>Invalid</code> (if the username is invalid), or <code>Too short: n</code> (where  is the length of the too-short username) on a new line for each test case.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>3
Peter
Me
Arxwwz
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>Valid
Too short: 2
Invalid
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Username <code>Me</code> is too short because it only contains  characters, so your exception prints . <br>
All other validation is handled by the locked code in your editor.</p></div></div></div>
