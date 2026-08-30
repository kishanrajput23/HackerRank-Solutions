## [Angry Professor](https://www.hackerrank.com/challenges/angry-professor/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A Discrete Mathematics professor has a class of students. Frustrated with their lack of discipline, the professor decides to cancel class if fewer than some number of students are present when class starts.  Arrival times go from on time () to arrived late ().</p>

<p>Given the arrival time of each student and a threshhold number of attendees, determine if the class is cancelled.  </p>

<p><strong>Example</strong>  </p>

<p> <br>
 <br>
  </p>

<p>The first  students arrived on.  The last  were late.  The threshold is  students, so class will go on.  Return <code>YES</code>.   </p>

<p><strong>Note:</strong> Non-positive arrival times () indicate the student arrived early or on time; positive arrival times () indicate the student arrived  minutes late.  </p>

<p><strong>Function Description</strong></p>

<p>Complete the <em>angryProfessor</em> function in the editor below.  It must return <code>YES</code> if class is cancelled, or <code>NO</code> otherwise.  </p>

<p>angryProfessor has the following parameter(s):  </p>

<ul>
<li><em>int k</em>: the threshold number of students  </li>
<li><em>int a[n]</em>: the arrival times of the  students</li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>string:</em>  either <code>YES</code> or <code>NO</code></li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line of input contains , the number of test cases. </p>

<p>Each test case consists of two lines.  </p>

<p>The first line has two space-separated integers,  and , the number of students (size of ) and the cancellation threshold. <br>
The second line contains  space-separated integers () that describe the arrival times for each student.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>  </li>
<li>  </li>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>2
4 3
-1 -3 4 2
4 2
0 -1 2 1
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>YES
NO
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>For the first test case, . The professor wants at least  students in attendance, but only  have arrived on time ( and ) so the class is cancelled.</p>

<p>For the second test case, . The professor wants at least  students in attendance, and there are  who arrived on time ( and ).  The class is <em>not</em> cancelled.</p></div></div></div>
