## [Repeated String](https://www.hackerrank.com/challenges/repeated-string/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>There is a string, , of lowercase English letters that is repeated infinitely many times.  Given an integer, , find and print the number of letter <code>a</code>'s in the first  letters of the infinite string.</p>

<p><strong>Example</strong> <br>
 <br>
  </p>

<p>The substring we consider is , the first  characters of the infinite string.  There are  occurrences of <code>a</code> in the substring.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>repeatedString</em> function in the editor below.  </p>

<p>repeatedString has the following parameter(s):  </p>

<ul>
<li><em>s:</em> a string to repeat  </li>
<li><em>n:</em> the number of characters to consider  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the frequency of <code>a</code> in the substring  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains a single string, . <br>
The second line contains an integer, .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
<li>For  of the test cases, .</li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><p><strong>Sample Input 0</strong></p>

<pre><code>aba
10
</code></pre>

<p><strong>Sample Output 0</strong></p>

<pre><code>7
</code></pre>

<p><strong>Explanation 0</strong> <br>
The first  letters of the infinite string are <code>abaabaabaa</code>. Because there are  <code>a</code>'s, we return .</p>

<p><strong>Sample Input 1</strong></p>

<pre><code>a
1000000000000
</code></pre>

<p><strong>Sample Output 1</strong></p>

<pre><code>1000000000000
</code></pre>

<p><strong>Explanation 1</strong> <br>
Because all of the first  letters of the infinite string are <code>a</code>, we return . </p></div></div></div>
