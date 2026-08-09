## [StringStream](https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem)

**Domain:** C++  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>In this challenge, we work with <em>string streams</em>.</p>

<p><em>stringstream</em> is a stream class to operate on strings. It implements input/output operations on memory (string) based streams. <em>stringstream</em> can be helpful in different type of parsing. The following operators/functions are commonly used here</p>

<ul>
<li><em>Operator &gt;&gt;</em> Extracts formatted data.</li>
<li><em>Operator &lt;&lt;</em> Inserts formatted data.</li>
<li><em>Method str()</em> Gets the contents of underlying string device object.</li>
<li><em>Method str(string)</em> Sets the contents of underlying string device object.  </li>
</ul>

<p>Its header file is <em>sstream</em>.  </p>

<p>One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56").</p>

<pre><code>stringstream ss("23,4,56");
char ch;
int a, b, c;
ss &gt;&gt; a &gt;&gt; ch &gt;&gt; b &gt;&gt; ch &gt;&gt; c;  // a = 23, b = 4, c = 56
</code></pre>

<p>Here  is a storage area for the discarded commas.  </p>

<p>If the <code>&gt;&gt;</code> operator returns a value, that is a true value for a conditional.  Failure to return a value is false.</p>

<p>Given a string of comma delimited integers, return a vector of integers.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>parseInts</em> function in the editor below.  </p>

<p><em>parseInts</em> has the following parameters:  </p>

<ul>
<li><em>string str:</em> a string of comma separated integers  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>vector&lt;int&gt;:</em>  a vector of the parsed integers. </li>
</ul>

<p><strong>Note</strong> You can learn to push elements onto a vector by solving the first problem in the STL chapter.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>There is one line of  integers separated by commas.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p>The length of  is less than .</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>23,4,56
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>23
4
56
</code></pre></div></div></div>
