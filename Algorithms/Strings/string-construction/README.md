## [String Construction ](https://www.hackerrank.com/challenges/string-construction/problem)

**Domain:** Algorithms  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Amanda has a string of lowercase letters that she wants to copy to a new string.  She can perform the following operations with the given costs. She can perform them any number of times to construct a new string :</p>

<ul>
<li>Append a character to the end of string  at a cost of  dollar. </li>
<li>Choose any <a href="https://en.wikipedia.org/wiki/Substring">substring</a> of  and append it to the end of  at no charge.</li>
</ul>

<p>Given  strings , find and print the <em>minimum</em> cost of copying each  to  on a new line.</p>

<p>For example, given a string , it can be copied for  dollars.  Start by copying ,  and  individually at a cost of  dollar per character.  String  at this time.  Copy  to the end of  at no cost to complete the copy.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>stringConstruction</em> function in the editor below.  It should return the minimum cost of copying a string.  </p>

<p>stringConstruction has the following parameter(s):  </p>

<ul>
<li><em>s</em>: a string  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains a single integer , the number of strings. <br>
Each of the next  lines contains a single string, .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>  </li>
</ul>

<p><strong>Subtasks</strong></p>

<ul>
<li> for  of the maximum score.</li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For each string  print the minimum cost of constructing a new string  on a new line.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>2
abcd
abab
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>4
2
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p><em>Query 0:</em> We start with  and .</p>

<ol>
<li>Append character <strong>''</strong> to  at a cost of  dollar, . </li>
<li>Append character <strong>''</strong> to  at a cost of  dollar, . </li>
<li>Append character <strong>''</strong> to  at a cost of  dollar, . </li>
<li>Append character <strong>''</strong> to  at a cost of  dollar, . </li>
</ol>

<p>Because the total cost of all operations is  dollars, we print  on a new line.</p>

<p><em>Query 1:</em> We start with  and .</p>

<ol>
<li>Append character <strong>''</strong> to  at a cost of  dollar, . </li>
<li>Append character <strong>''</strong> to  at a cost of  dollar, . </li>
<li>Append substring  to  at no cost, . </li>
</ol>

<p>Because the total cost of all operations is  dollars, we print  on a new line.</p>

<p><strong>Note</strong></p>

<p>A substring of a string  is another string  that occurs "in"  <a href="https://en.wikipedia.org/wiki/Substring">(Wikipedia)</a>. For example, the substrings of the string "" are "", "" ,"", "", "", and "".</p></div></div></div>
