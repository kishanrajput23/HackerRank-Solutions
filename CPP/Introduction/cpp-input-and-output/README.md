## [Input and Output](https://www.hackerrank.com/challenges/cpp-input-and-output/problem)

**Domain:** C++  
**Subdomain:** Introduction  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p><strong>Objective</strong> <br>
In this challenge, we practice reading input from stdin and printing output to stdout. </p>

<hr>

<p>In C++, you can read a single whitespace-separated token of input using <a href="http://www.cplusplus.com/cin">cin</a>, and print output to stdout using <a href="http://www.cplusplus.com/printf">cout</a>. For example, let's say we declare the following variables:</p>

<div><pre><span></span><span>string</span> <span>s</span><span>;</span>
<span>int</span> <span>n</span><span>;</span>
</pre></div>


<p>and we want to use <em>cin</em> to read the input "High 5" from stdin. We can do this with the following code:</p>

<div><pre><span></span><span>cin</span> <span>&gt;&gt;</span> <span>s</span> <span>&gt;&gt;</span> <span>n</span><span>;</span>
</pre></div>


<p>This reads the first word ("High") from stdin and saves it as string , then reads the second word ("") from stdin and saves it as integer . If we want to print these values to stdout, separated by a space, we write the following code:</p>

<div><pre><span></span><span>cout</span> <span>&lt;&lt;</span> <span>s</span> <span>&lt;&lt;</span> <span>" "</span> <span>&lt;&lt;</span> <span>n</span> <span>&lt;&lt;</span> <span>endl</span><span>;</span>
</pre></div>


<p>This code prints the contents of string , a single space (), then the integer . We end our line of output with a newline using <a href="http://www.cplusplus.com/endl">endl</a>. This results in the following output:</p>

<pre><code>High 5
</code></pre>

<p><strong>Task</strong> <br>
Read  numbers from stdin and print their sum to stdout.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>One line that contains  space-separated integers: , , and .  </p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li> </li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Print the sum of the three numbers on a single line.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>1 2 7
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>10
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The sum of the three numbers is .</p></div></div></div>
