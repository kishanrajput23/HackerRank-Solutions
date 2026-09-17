## [Two Strings](https://www.hackerrank.com/challenges/two-strings/problem)

**Domain:** Algorithms  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Given two strings, determine if they share a common substring.  A substring may be as small as one character.  </p>

<p><strong>Example</strong> <br>
 <br>
  </p>

<p>These share the common substring .  </p>

<p> <br>
  </p>

<p>These do not share a substring.  </p>

<p><strong>Function Description</strong></p>

<p>Complete the function <em>twoStrings</em> in the editor below.    </p>

<p>twoStrings has the following parameter(s):  </p>

<ul>
<li><em>string s1:</em>  a string</li>
<li><em>string s2:</em>  another string    </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>string:</em> either <code>YES</code> or <code>NO</code></li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains a single integer , the number of test cases.     </p>

<p>The following  pairs of lines are as follows:</p>

<ul>
<li>The first line contains string .</li>
<li>The second line contains string .</li>
</ul></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li> and  consist of characters in the range ascii[a-z].</li>
<li></li>
<li></li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For each pair of strings, return <code>YES</code> or <code>NO</code>.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>2
hello
world
hi
world
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>YES
NO
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>We have  pairs to check:</p>

<ol>
<li>, . The substrings  and  are common to both strings.  </li>
<li>, .  and  share no common substrings.</li>
</ol></div></div></div>
