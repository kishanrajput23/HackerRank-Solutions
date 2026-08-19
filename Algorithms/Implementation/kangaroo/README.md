## [Number Line Jumps](https://www.hackerrank.com/challenges/kangaroo/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity). </p>

<ul>
<li>The first kangaroo starts at location  and moves at a rate of  meters per jump. </li>
<li>The second kangaroo starts at location  and moves at a rate of  meters per jump.</li>
</ul>

<p>You have to figure out a way to get both kangaroos at the same location at the same time  as part of the show.  If it is possible, return <code>YES</code>, otherwise return <code>NO</code>.  </p>

<p><strong>Example</strong> <br>
 <br>
 <br>
 <br>
   </p>

<p>After one jump, they are both at , (, ), so the answer is <code>YES</code>.</p>

<p><strong>Function Description</strong></p>

<p>Complete the function <em>kangaroo</em> in the editor below.    </p>

<p>kangaroo has the following parameter(s):  </p>

<ul>
<li><em>int x1, int v1</em>: starting position and jump distance for kangaroo 1</li>
<li><em>int x2, int v2</em>: starting position and jump distance for kangaroo 2   </li>
</ul>

<p><strong>Returns</strong>   </p>

<ul>
<li><em>string:</em> either <code>YES</code> or <code>NO</code></li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>A single line of four space-separated integers denoting the respective values of , , , and .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>  </li>
<li>  </li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>0 3 4 2</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>YES</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The two kangaroos jump through the following sequence of locations:</p>

<p><img src="https://s3.amazonaws.com/hr-assets/0/1516005283-e74e76ff0c-kangaroo.png" alt="image" title=""></p>

<p>From the image, it is clear that the kangaroos meet at the same location (number  on the number line) after same number of jumps ( jumps), and we print <code>YES</code>.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>0 2 5 3</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>NO</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The second kangaroo has a starting location that is ahead (further to the right) of the first kangaroo's starting location (i.e., ). Because the second kangaroo moves at a faster rate (meaning ) <em>and</em> is already ahead of the first kangaroo, the first kangaroo will never be able to catch up. Thus, we print <em>NO</em>. </p></div></div></div>
