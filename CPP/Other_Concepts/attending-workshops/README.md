## [Attending Workshops](https://www.hackerrank.com/challenges/attending-workshops/problem)

**Domain:** C++  
**Subdomain:** Other Concepts  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A student signed up for  workshops and wants to attend the maximum number of workshops where no two workshops overlap. You must do the following:</p>

<p>Implement  <a href="http://www.cplusplus.com/doc/tutorial/structures/">structures</a>: </p>

<ol>
<li><p><em>struct Workshop</em> having the following members:</p>

<ul><li>The workshop's start time.</li>
<li>The workshop's duration.</li>
<li>The workshop's end time.</li></ul></li>
<li><p><em>struct Available_Workshops</em> having the following members:</p>

<ul><li>An integer,  (the number of workshops the student signed up for).</li>
<li>An array of type <em>Workshop</em> array having size .</li></ul></li>
</ol>

<p>Implement  <a href="http://www.cplusplus.com/doc/tutorial/functions/">functions</a>:</p>

<ol>
<li><p><em>Available_Workshops* initialize (int start_time[], int duration[], int n)</em>  <br> 
Creates an <em>Available_Workshops</em> object and initializes its elements using the elements in the  and  parameters (both are of size ). Here,  and  are the respective start time and duration for the  workshop. This function must return a pointer to an <em>Available_Workshops</em> object.</p></li>
<li><p><em>int CalculateMaxWorkshops(Available_Workshops* ptr)</em> <br> 
Returns the maximum number of workshops the student can attend—without overlap. The next workshop cannot be attended until the previous workshop ends.</p></li>
</ol>

<p><strong>Note:</strong> An array of unknown size () should be declared as follows:</p>

<pre><code>DataType* arrayName = new DataType[n];
</code></pre></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>Input from stdin is handled by the locked code in the editor; you simply need to write your functions to meet the specifications of the problem statement above.</p>

<p><strong>Constraints</strong>   </p>

<ul>
<li>   </li>
<li>  </li>
<li></li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Output to stdout is handled for you.</p>

<p>Your <em>initialize</em> function must return a pointer to an <em>Available_Workshops</em> object. <br>
Your <em>CalculateMaxWorkshops</em> function must return maximum number of non-overlapping workshops the student can attend.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>6
1 3 0 5 5 8
1 1 6 2 4 1
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><p><em>CalculateMaxWorkshops</em> should return .</p></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The first line denotes , the number of workshops. <br>
The next line contains  space-separated integers where the  integer is the  workshop's start time. <br>
The next line contains  space-separated integers where the  integer is the  workshop's duration.    </p>

<p>The student can attend the workshops  and  without overlap, so <em>CalculateMaxWorkshops</em> returns  to <em>main</em> (which then prints  to stdout).</p></div></div></div>
