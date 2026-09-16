## [Gemstones](https://www.hackerrank.com/challenges/gem-stones/problem)

**Domain:** Algorithms  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>There is a collection of rocks where each rock has various minerals embeded in it.  Each type of mineral is designated by a lowercase letter in the range . There may be multiple occurrences of a mineral in a rock. A mineral is called a <em>gemstone</em> if it occurs at least once in each of the rocks in the collection.</p>

<p>Given a list of minerals embedded in each of the rocks, display the number of types of gemstones in the collection.</p>

<p><strong>Example</strong> <br>
  </p>

<p>The minerals  and  appear in each rock, so there are  gemstones.</p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>gemstones</em> function in the editor below.    </p>

<p>gemstones has the following parameter(s):  </p>

<ul>
<li><em>string arr[n]:</em> an array of strings   </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the number of gemstones found </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line consists of an integer , the size of . <br>
Each of the next  lines contains a string  where each letter represents an occurence of a mineral in the current rock.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p> <br>
 | arr[i] |  <br>
Each composition  consists of only lower-case Latin letters ('a'-'z').  </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>STDIN       Function
-----       --------
3           arr[] size n = 3
abcdde      arr = ['abcdde', 'baccd', 'eeabg']
baccd
eeabg
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>2
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Only  and  occur in every rock.</p></div></div></div>
