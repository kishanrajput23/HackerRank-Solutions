## [Strings](https://www.hackerrank.com/challenges/c-tutorial-strings/problem)

**Domain:** C++  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called <em>string</em>. Some of its widely used features are the following:</p>

<ul>
<li><p><em>Declaration:</em></p>

<pre><code>string a = "abc";
</code></pre></li>
<li><p><em>Size:</em> </p>

<pre><code>int len = a.size();
</code></pre></li>
<li><p><em>Concatenate two strings:</em></p>

<pre><code>string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
</code></pre></li>
<li><p><em>Accessing  element:</em></p>

<pre><code>string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
</code></pre></li>
</ul>

<p><em>P.S.:</em> We will use <em>cin/cout</em> to read/write a string.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>In the first line print two space-separated integers, representing the length of  and  respectively. <br>
In the second line print the string produced by concatenating  and  (). <br>
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>abcd
ef
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>4 2
abcdef
ebcd af
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><ul>
<li> <em>"abcd"</em></li>
<li> <em>"ef"</em></li>
<li></li>
<li></li>
<li> <em>"abcdef"</em></li>
<li> <em>"ebcd"</em></li>
<li> <em>"af"</em></li>
</ul></div></div></div>
