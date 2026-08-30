## [Utopian Tree](https://www.hackerrank.com/challenges/utopian-tree/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>The Utopian Tree goes through <em>2</em> cycles of growth every year. Each spring, it <em>doubles</em> in height. Each summer, its height increases by <em>1</em> meter.</p>

<p>A Utopian Tree sapling with a height of <em>1</em> meter is planted at the onset of spring. How tall will the tree be after  growth cycles?</p>

<p>For example, if the number of growth cycles is , the calculations are as follows:</p>

<pre><code>Period  Height
0          1
1          2
2          3
3          6
4          7
5          14
</code></pre>

<p><strong>Function Description</strong></p>

<p>Complete the <em>utopianTree</em> function in the editor below.   </p>

<p>utopianTree has the following parameter(s):</p>

<ul>
<li><em>int n</em>:  the number of growth cycles to simulate  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the height of the tree after the given number of cycles  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer, , the number of test cases. <br>
 subsequent lines each contain an integer, , the number of cycles for that test case.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p> <br>
</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>3
0
1
4
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>1
2
7
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>There are <em>3</em> test cases.</p>

<p>In the first case (), the initial height () of the tree remains unchanged.</p>

<p>In the second case (), the tree doubles in height and is  meters tall after the spring cycle.</p>

<p>In the third case (), the tree doubles its height in spring (, ), then grows a meter in summer (, ), then doubles after the next spring (, ), and grows another meter after summer (, ). Thus, at the end of 4 cycles, its height is  meters.</p></div></div></div>
