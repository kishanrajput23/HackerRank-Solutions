## [Append and Delete](https://www.hackerrank.com/challenges/append-and-delete/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You have two strings of lowercase English letters. You can perform two types of operations on the first string:</p>

<ol>
<li><em>Append</em> a lowercase English letter to the end of the string.</li>
<li><em>Delete</em> the last character of the string. Performing this operation on an empty string results in an empty string.</li>
</ol>

<p>Given an integer, , and two strings,  and , determine whether or not you can convert  to  by performing <em>exactly</em>  of the above operations on . If it's possible, print <code>Yes</code>.  Otherwise, print <code>No</code>.</p>

<p><strong>Example</strong>. 
 <br>
 <br>
  </p>

<p>To convert  to , we first delete all of the characters in  moves.  Next we add each of the characters of  in order.  On the  move, you will have the matching string.  Return <code>Yes</code>.  </p>

<p>If there were more moves available, they could have been eliminated by performing multiple deletions on an empty string.  If there were fewer than  moves, we would not have succeeded in creating the new string.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>appendAndDelete</em> function in the editor below.  It should return a string, either <code>Yes</code> or <code>No</code>.  </p>

<p>appendAndDelete has the following parameter(s):  </p>

<ul>
<li><em>string s</em>: the initial string  </li>
<li><em>string t</em>: the desired string  </li>
<li><em>int k</em>: the exact number of operations that must be performed  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>string:</em> either <code>Yes</code> or <code>No</code></li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains a string , the initial string. <br>
The second line contains a string , the desired final string. <br>
The third line contains an integer , the number of operations.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
<li></li>
<li> and  consist of lowercase English letters, .</li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>hackerhappy</span>
<span>hackerrank</span>
<span>9</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>Yes</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>We perform  delete operations to reduce string  to <code>hacker</code>. Next, we perform  append operations (i.e., <code>r</code>, <code>a</code>, <code>n</code>, and <code>k</code>), to get <code>hackerrank</code>. Because we were able to convert  to  by performing exactly  operations, we return <code>Yes</code>.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>aba</span>
<span>aba</span>
<span>7</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>Yes</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>We perform  delete operations to reduce string  to the empty string.  Recall that though the string will be empty after  deletions, we can still perform a delete operation on an empty string to get the empty string. Next, we perform  append operations (i.e., <code>a</code>, <code>b</code>, and <code>a</code>). Because we were able to convert  to  by performing exactly  operations, we return <code>Yes</code>.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 2</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>ashley</span>
<span>ash</span>
<span>2</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 2</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>No</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 2</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>To convert <code>ashley</code> to <code>ash</code> a minimum of  steps are needed. Hence we print <code>No</code> as answer. </p></div></div></div>
