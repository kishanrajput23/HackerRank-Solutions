## [Cpp exception handling](https://www.hackerrank.com/challenges/cpp-exception-handling/problem)

**Domain:** C++  
**Subdomain:** Debugging  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>In this challenge, the task is to debug the existing code to successfully execute all provided test files.</p>

<hr>

<p>You are required to extend the existing code so that it handles <a href="http://www.cplusplus.com/reference/stdexcept/invalid_argument/">std::invalid_argument</a> exception properly. More specifically, you have to extend the implementation of <code>process_input</code> function. It takes integer  as an argument and has to work as follows:</p>

<ol>
<li>It calls function <code>largest_proper_divisor(n)</code>.</li>
<li>If this call returns a value without raising an exception, it should print in a single line <code>result=d</code> where  is the returned value.</li>
<li>Otherwise, if the call raises a <code>std::invalid_argument</code> exception, it has to print in a single line the string representation of the raised exception, i.e. its message.</li>
<li>Finally, no matter if the exception is raised or not, it should print in a single line <code>returning control flow to caller</code> after any other previously printed output.</li>
</ol>

<p>To keep the code quality high, you are advised to have exactly one line printing <code>returning control flow to caller</code> in the body of <code>process_input</code> function.</p>

<p>Your function will be tested against several cases by the locked template code.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The input is read by the provided locked code template. In the only line of the input, there is a single integer , which is going to be the argument passed to function <code>process_input</code>.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>The output should be produced by function <code>process_input</code> as described in the statement.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span>0</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>largest proper divisor is not defined for n=0</span>
<span>returning control flow to caller</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>In the first sample, , so the call <code>largest_proper_divisor(0)</code> raises an exception. In this case, the function <code>process_input</code> prints two lines. In the first of them it prints the string representation of the raised exception, and in the second line it prints <code>returning control flow to caller</code>.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span>9</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>result=3</span>
<span>returning control flow to caller</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>In the first sample, , so the call <code>largest_proper_divisor(9)</code> doesn't raise an exception and returns value . In this case, the function <code>process_input</code> prints two lines. In the first of them it prints <code>result=3</code> because the returned value by <code>largest_proper_divisor(9)</code> is , and in the second line it prints <code>returning control flow to caller</code>.</p></div></div></div>
