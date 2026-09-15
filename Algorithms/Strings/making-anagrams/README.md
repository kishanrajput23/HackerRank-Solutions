## [Making Anagrams](https://www.hackerrank.com/challenges/making-anagrams/problem)

**Domain:** Algorithms  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency. For example, <code>bacdc</code> and <code>dcbac</code> are anagrams, but <code>bacdc</code> and <code>dcbad</code> are not.</p>

<p>Alice is taking a cryptography class and finding <em>anagrams</em> to be very useful. She decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. Can you help her find this number? </p>

<p>Given two strings,  and , that may not be of the same length, determine the minimum number of character deletions required to make  and  anagrams. Any characters can be deleted from either of the strings. </p>

<p><strong>Example</strong>. <br>
 <br>
     </p>

<p>The only characters that match are the 's so we have to remove  from  and  from  for a total of  deletions.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>makingAnagrams</em> function in the editor below.    </p>

<p>makingAnagrams has the following parameter(s):  </p>

<ul>
<li><em>string s1:</em> a string  </li>
<li><em>string s2:</em> a string   </li>
</ul>

<p><strong>Returns</strong>   </p>

<ul>
<li><em>int:</em> the minimum number of deletions needed   </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains a single string, . <br>
The second line contains a single string, .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>It is guaranteed that  and  consist of lowercase English letters, ascii[a-z].</li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>cde
abc
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>4
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Delete the following characters from our two strings to turn them into anagrams:</p>

<ol>
<li>Remove <code>d</code> and <code>e</code> from <code>cde</code> to get <code>c</code>.</li>
<li>Remove <code>a</code> and <code>b</code> from <code>abc</code> to get <code>c</code>.</li>
</ol>

<p> characters have to be deleted to make both strings anagrams.</p></div></div></div>
