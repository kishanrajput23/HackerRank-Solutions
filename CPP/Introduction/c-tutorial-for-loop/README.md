## [For Loop](https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem)

**Domain:** C++  
**Subdomain:** Introduction  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A <em>for</em> loop is a programming language statement which allows code to be repeatedly executed.  </p>

<p>The syntax is</p>

<pre><code>for ( &lt;expression_1&gt; ; &lt;expression_2&gt; ; &lt;expression_3&gt; )
    &lt;statement&gt;
</code></pre>

<ul>
<li><em>expression_1</em> is used for intializing variables which are generally used for controlling the terminating flag for the loop.</li>
<li><em>expression_2</em> is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.</li>
<li><em>expression_3</em> is generally used to update the flags/variables.</li>
</ul>

<p>A sample loop is</p>

<pre><code>for(int i = 0; i &lt; 10; i++) {
    ...
}
</code></pre>

<p>In this challenge, you will use a for loop to increment a variable through a range.  </p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>You will be given two positive integers,  and  (), separated by a newline.</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For each integer  in the inclusive interval :</p>

<ul>
<li>If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.</li>
<li>Else if  and it is an even number, then print "even".</li>
<li>Else if  and it is an odd number, then print "odd".</li>
</ul>

<p><strong>Note:</strong>  </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>8
11
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>eight
nine
even
odd
</code></pre></div></div></div>
