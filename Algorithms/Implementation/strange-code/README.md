## [Strange Counter](https://www.hackerrank.com/challenges/strange-code/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>There is a <em>strange counter</em>. At the first second, it displays the number . Each second, the number displayed by decrements by  until it reaches . In next second, the timer resets to  and continues counting down. The diagram below shows the counter values for each time  in the first three cycles:</p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/22185/1469447349-bae87a5071-strange1.png" title="strange(1).png"></p>

<p>Find and print the value displayed by the counter at time .  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>strangeCounter</em> function in the editor below.  </p>

<p>strangeCounter has the following parameter(s):  </p>

<ul>
<li><em>int t:</em> an integer   </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the value displayed at time   </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>A single integer, the value of .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
</ul>

<p><strong>Subtask</strong></p>

<ul>
<li> for  of the maximum score.</li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>4
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>6
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Time  marks the beginning of the second cycle.  It is double the number displayed at the beginning of the first cycle:. This is shown in the diagram in the problem statement.</p></div></div></div>
