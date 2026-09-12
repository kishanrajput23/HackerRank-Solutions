## [Sales by Match](https://www.hackerrank.com/challenges/sock-merchant/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.</p>

<p><strong>Example</strong> <br>
 <br>
   </p>

<p>There is one pair of color  and one of color .  There are three odd socks left, one of each color.  The number of pairs is .  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>sockMerchant</em> function in the editor below.     </p>

<p>sockMerchant has the following parameter(s):  </p>

<ul>
<li><em>int n:</em> the number of socks in the pile   </li>
<li><em>int ar[n]:</em> the colors of each sock   </li>
</ul>

<p><strong>Returns</strong>   </p>

<ul>
<li><em>int:</em> the number of pairs   </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer , the number of socks represented in . <br>
The second line contains  space-separated integers, , the colors of the socks in the pile.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li> where </li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>STDIN                       Function
-----                       --------
9                           n = 9
10 20 20 10 10 30 50 10 20  ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>3
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p><img src="https://s3.amazonaws.com/hr-challenge-images/25168/1474122392-c7b9097430-sock.png" alt="sock.png" title=""></p>

<p>There are three pairs of socks.</p></div></div></div>
