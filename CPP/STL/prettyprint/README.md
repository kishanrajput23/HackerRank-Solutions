## [Print Pretty](https://www.hackerrank.com/challenges/prettyprint/problem)

**Domain:** C++  
**Subdomain:** STL  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Given a text file with many lines of numbers to format and print, for each row of  space-separated doubles, format and print the numbers using the specifications in the <em>Output Format</em> section below.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer, , the number of test cases. <br>
Each of the  subsequent lines describes a test case as  space-separated floating-point numbers: , , and , respectively.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>Each number will fit into a double.</li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For each test case, print  lines containing the formatted , , and , respectively. Each , , and  must be formatted as follows:</p>

<ol>
<li>: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  prefix) in lower case letters.</li>
<li>: Print it to a scale of  decimal places, preceded by a  or  sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.</li>
<li>: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.</li>
</ol></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>1  
100.345 2006.008 2331.41592653498
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>0x64             
_______+2006.01  
2.331415927E+03
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>For the first line of output,  (in reverse, ). <br>
The second and third lines of output are formatted as described in the <em>Output Format</em> section.</p></div></div></div>
