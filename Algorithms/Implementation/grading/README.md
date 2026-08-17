## [Grading Students](https://www.hackerrank.com/challenges/grading/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>HackerLand University has the following grading policy:</p>

<ul>
<li>Every student receives a  in the inclusive range from  to .</li>
<li>Any  less than  is a failing grade. </li>
</ul>

<p>Sam is a professor at the university and likes to round each student's  according to these rules:</p>

<ul>
<li>If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .</li>
<li>If the value of  is less than , no rounding occurs as the result will still be a failing grade.</li>
</ul>

<p><strong>Examples</strong></p>

<ul>
<li> round to  (85 - 84 is less than 3)  </li>
<li> do not round (result is less than 38)  </li>
<li> do not round (60 - 57 is 3 or higher)   </li>
</ul>

<p>Given the initial value of  for each of Sam's  students, write code to automate the rounding process.   </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the function  with the following parameter(s):  </p>

<ul>
<li>: the grades before rounding  </li>
</ul>

<p><strong>Returns</strong></p>

<ul>
<li>: the grades after rounding</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains a single integer, , the number of students. <br>
Each line  of the  subsequent lines contains a single integer, .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>4</span>
<span>73</span>
<span>67</span>
<span>38</span>
<span>33</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>75</span>
<span>67</span>
<span>40</span>
<span>33</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p><img src="https://s3.amazonaws.com/hr-challenge-images/0/1484768684-54439977a1-curving2.png" alt="image" title=""></p>

<ol>
<li>Student  received a , and the next multiple of  from  is . Since , the student's grade is rounded to .</li>
<li>Student  received a , and the next multiple of  from  is . Since , the grade will not be modified and the student's final grade is .</li>
<li>Student  received a , and the next multiple of  from  is . Since , the student's grade will be rounded to .</li>
<li>Student  received a grade below , so the grade will not be modified and the student's final grade is .</li>
</ol></div></div></div>
