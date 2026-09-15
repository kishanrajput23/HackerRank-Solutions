## [Alternating Characters ](https://www.hackerrank.com/challenges/alternating-characters/problem)

**Domain:** Algorithms  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are given a string containing characters  and  only.  Your task is to change it into a string such that there are no matching adjacent characters. To do this, you are allowed to delete zero or more characters in the string.  </p>

<p>Your task is to find the minimum number of required deletions.</p>

<p><strong>Example</strong> <br>
  </p>

<p>Remove an  at positions  and  to make  in  deletions.</p>

<p><strong>Function Description</strong></p>

<p>Complete the <em>alternatingCharacters</em> function in the editor below.  </p>

<p>alternatingCharacters has the following parameter(s):</p>

<ul>
<li><em>string s</em>: a string  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the minimum number of deletions required</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer , the number of queries. <br>
The next  lines each contain a string  to analyze.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li></li>
<li>Each string  will consist only of characters  and .</li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>3
4
0
0
4
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The characters marked red are the ones that can be deleted so that the string does not have matching adjacent characters.</p>

<p><img src="https://s3.amazonaws.com/hr-assets/0/1502450721-a0a2e9b5bd-alternatingCharacter2.png" alt="image" title=""></p></div></div></div>
