## [C++ Class Template Specialization](https://www.hackerrank.com/challenges/cpp-class-template-specialization/problem)

**Domain:** C++  
**Subdomain:** Other Concepts  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are given a <em>main</em> function which reads the enumeration values for two different types as input, then prints out the corresponding  <a href="http://en.cppreference.com/w/cpp/language/enum">enumeration</a> names. Write a class template that can provide the names of the enumeration values for both types. If the enumeration value is not valid, then print <code>unknown</code>.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains , the number of test cases. <br>
Each of the  subsequent lines contains two space-separated integers. The first integer is a color value, , and the second integer is a fruit value, .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>  </li>
<li>  </li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>The locked stub code in your editor prints  lines containing the <em>color</em> name and the <em>fruit</em> name corresponding to the input enumeration index.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>2
1 0
3 3
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>green apple
unknown unknown
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Since , there are two lines of output.   </p>

<ol>
<li>The two input index values,  and , correspond to <em>green</em> in the color enumeration and <em>apple</em> in the fruit enumeration. Thus, we print <code>green apple</code>.</li>
<li>The two input values,  and , are outside of the range of our enums. Thus, we print <code>unknown unknown</code>.</li>
</ol></div></div></div>
