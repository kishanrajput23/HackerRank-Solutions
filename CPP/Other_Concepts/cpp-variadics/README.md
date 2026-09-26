## [C++ Variadics](https://www.hackerrank.com/challenges/cpp-variadics/problem)

**Domain:** C++  
**Subdomain:** Other Concepts  
**Difficulty:** Hard  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A template parameter pack is a template parameter that accepts zero or more template arguments (non-types, types, or templates). To read more about parameter pack, <a href="http://en.cppreference.com/w/cpp/language/parameter_pack">click here</a>.</p>

<p>Create a template function named <em>reversed_binary_value</em>. It must take an arbitrary number of <em>bool</em> values as template parameters. These booleans represent binary digits in reverse order. Your function must return an integer corresponding to the binary value of the digits represented by the booleans. For example:  <em>reversed_binary_value&lt;0,0,1&gt;()</em> should return .</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer, , the number of test cases.
Each of the  subsequent lines contains a test case. A test case is described as  space-separated integers,  and , respectively.</p>

<ul>
<li> is the value to compare against.</li>
<li> represents the range to compare:  to .</li>
</ul></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li></li>
<li>The number of template parameters passed to <em>reversed_binary_value</em> will be .</li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Each line of output contains  binary characters (i.e., 's and 's). Each character represents one value in the range. The <em>first</em> character corresponds to the <em>first</em> value in the range. The <em>last</em> character corresponds to the <em>last</em> value in the range. The character is  if the value in the range matches ; otherwise, the character is .</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>2
65 1
10 0
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>0100000000000000000000000000000000000000000000000000000000000000
0000000000100000000000000000000000000000000000000000000000000000
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The second character on the first line is a , because the second value in the range  is  and  is .</p>

<p>The eleventh character on the second line is a , because the eleventh value in the range  is  and  is .</p>

<p>All other characters are zero, because the corresponding values in the range do not match .</p></div></div></div>
