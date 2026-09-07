## [HackerRank in a String!](https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem)

**Domain:** Algorithms  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>We say that a string contains the word <code>hackerrank</code> if a <a href="https://en.wikipedia.org/wiki/Subsequence">subsequence</a> of its characters spell the word <code>hackerrank</code>.  Remeber that a subsequence maintains the order of characters selected from a sequence.   </p>

<p>More formally, let  be the respective indices of <code>h</code>, <code>a</code>, <code>c</code>, <code>k</code>, <code>e</code>, <code>r</code>, <code>r</code>, <code>a</code>, <code>n</code>, <code>k</code> in string . If  is true, then  contains <code>hackerrank</code>.</p>

<p>For each query, print <code>YES</code> on a new line if the string contains <code>hackerrank</code>, otherwise, print <code>NO</code>.  </p>

<p><strong>Example</strong> <br>
  </p>

<p>This contains a subsequence of all of the characters in the proper order.  Answer <code>YES</code>  </p>

<p>  </p>

<p>This is missing the second 'r'.  Answer <code>NO</code>.  </p>

<p>  </p>

<p>There is no 'c' after the first occurrence of an 'a', so answer <code>NO</code>.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>hackerrankInString</em> function in the editor below.   </p>

<p>hackerrankInString has the following parameter(s):  </p>

<ul>
<li><em>string s:</em> a string   </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>string:</em> <code>YES</code> or <code>NO</code></li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer , the number of queries. <br>
Each of the next  lines contains a single query string .  </p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>2</span>
<span>hereiamstackerrank</span>
<span>hackerworld</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>YES</span>
<span>NO</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>We perform the following  queries:</p>

<ol>
<li> <br>
The characters of <code>hackerrank</code> are bolded in the string above. Because the string contains all the characters in <code>hackerrank</code> in the same exact order as they appear in <code>hackerrank</code>, we return <code>YES</code>.</li>
<li> does not contain the last three characters of <code>hackerrank</code>, so we return <code>NO</code>.</li>
</ol></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>2</span>
<span>hhaacckkekraraannk</span>
<span>rhbaasdndfsdskgbfefdbrsdfhuyatrjtcrtyytktjjt</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>YES</span>
<span>NO</span>
</pre></div>
</div></div></div>
