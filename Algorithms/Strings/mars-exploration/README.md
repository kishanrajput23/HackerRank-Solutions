## [Mars Exploration](https://www.hackerrank.com/challenges/mars-exploration/problem)

**Domain:** Algorithms  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A space explorer's ship crashed on Mars! They send a series of <code>SOS</code> messages to Earth for help. </p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/16032/1453204202-9e3fd295bb-NASA_Mars_Rover.jpg" title="NASA_Mars_Rover.jpg"></p>

<p>Letters in some of the <code>SOS</code> messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, , determine how many letters of the <code>SOS</code> message have been changed by radiation.</p>

<p><strong>Example</strong>  </p>

<p>  </p>

<p>The original message was <code>SOSSOS</code>.  Two of the message's characters were changed in transit.  </p>

<p><strong>Function Description</strong></p>

<p>Complete the <em>marsExploration</em> function in the editor below.  </p>

<p>marsExploration has the following parameter(s):</p>

<ul>
<li><em>string s:</em> the string as received on Earth  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the number of letters changed during transmission  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>There is one line of input: a single string, . </p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
<li> will contain only uppercase English letters, ascii[A-Z].</li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>SOSSPSSQSSOR</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>3</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p> = <strong>SOSSPSSQSSOR</strong>, and signal length . They sent  <code>SOS</code> messages (i.e.: ).</p>

<pre>Expected signal: SOSSOSSOSSOS
Recieved signal: SOSSPSSQSSOR
Difference:          X  X   X
</pre></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>SOSSOT</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>1</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p> = <strong>SOSSOT</strong>, and signal length . They sent  <code>SOS</code> messages (i.e.: ).</p>

<pre>Expected Signal: SOSSOS     
Received Signal: SOSSOT
Difference:           X
</pre></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 2</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>SOSSOSSOS</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 2</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>0</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 2</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Since no character is altered, return 0.</p></div></div></div>
