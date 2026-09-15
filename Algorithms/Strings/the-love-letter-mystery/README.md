## [The Love-Letter Mystery](https://www.hackerrank.com/challenges/the-love-letter-mystery/problem)

**Domain:** Algorithms  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>James found a love letter that his friend Harry has written to his girlfriend. James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into <a href="https://en.wikipedia.org/wiki/Palindrome">palindromes</a>.   </p>

<p>To do this, he follows two rules:  </p>

<ol>
<li>He can only reduce the value of a letter by , i.e. he can change <em>d</em> to <em>c</em>, but he cannot change <em>c</em> to <em>d</em> or <em>d</em> to <em>b</em>.  </li>
<li>The letter  may not be reduced any further.  </li>
</ol>

<p>Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations required to convert a given string into a palindrome.</p>

<p><strong>Example</strong> <br>
   </p>

<p>The following two operations are performed:  <em>cd<strong>e</strong></em> → <em>cd<strong>d</strong></em> → <em>cdc</em>.  Return .</p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>theLoveLetterMystery</em> function in the editor below.  </p>

<p>theLoveLetterMystery has the following parameter(s):  </p>

<ul>
<li><em>string s</em>: the text of the letter   </li>
</ul>

<p><strong>Returns</strong>   </p>

<ul>
<li><em>int:</em> the minimum number of operations  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer , the number of queries. <br>
The next  lines will each contain a string .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p> <br>
 | s |  <br>
All strings are composed of lower case English letters, <em>ascii[a-z]</em>, with no spaces.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre>STDIN   Function
-----   --------
4       q = 4
abc     query 1 = 'abc'
abcba
abcd
cba
</pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>2
0
4
2
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><ol>
<li>For the first query, <em>ab<strong>c</strong> → ab<strong>b</strong> → aba</em>.</li>
<li>For the second query, <em>abcba</em> is already a palindromic string.</li>
<li>For the third query, <em>abc<strong>d</strong> → abc<strong>c</strong> → abc<strong>b</strong> → ab<strong>c</strong>a → abba</em>.</li>
<li>For the fourth query, <em><strong>c</strong>ba → <strong>b</strong>ba → aba</em>.  </li>
</ol></div></div></div>
