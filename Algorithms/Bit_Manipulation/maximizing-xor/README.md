## [Maximizing XOR](https://www.hackerrank.com/challenges/maximizing-xor/problem)

**Domain:** Algorithms  
**Subdomain:** Bit Manipulation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Given two integers,  and , find the maximal value of  <a href="http://en.wikipedia.org/wiki/Bitwise_operation#XOR">xor</a> , written , where  and  satisfy the following condition:</p>

<p>  </p>

<p>For example, if  and , then <br>
 <br>
 <br>
  </p>

<p>Our maximum value is .  </p>

<p><strong>Function Description</strong></p>

<p>Complete the <em>maximizingXor</em> function in the editor below.  It must return an integer representing the maximum value calculated.  </p>

<p>maximizingXor has the following parameter(s):</p>

<ul>
<li><em>l</em>: an integer, the lower bound, inclusive  </li>
<li><em>r</em>: an integer, the upper bound, inclusive  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains the integer . <br>
The second line contains the integer .    </p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p><sup>3</sup>  </p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Return the maximal value of the xor operations for all permutations of the integers from  to , inclusive.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>10</span>
<span>15</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>7</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Here  and . Testing all pairs:   </p>

<p> <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
 <br>
  </p>

<p>Two pairs, <em>(10, 13)</em> and <em>(11, 12)</em> have the xor value <em>7</em>, and this is maximal. </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>11</span>
<span>100</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>127</span>
</pre></div>
</div></div></div>
