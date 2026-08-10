## [Classes and Objects](https://www.hackerrank.com/challenges/classes-objects/problem)

**Domain:** C++  
**Subdomain:** Classes  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A <em>class</em> defines a blueprint for an object. We use the same syntax to declare objects of a class as we use to declare variables of other basic types. For example:</p>

<pre><code>Box box1;          // Declares variable box1 of type Box
Box box2;          // Declare variable box2 of type Box
</code></pre>

<p>Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the  exams given during this semester.</p>

<p>Create a class named  with the following specifications:</p>

<ul>
<li>An instance variable named  to hold a student's  exam scores.</li>
<li>A <em>void input()</em> function that reads  integers and saves them to .</li>
<li>An <em>int calculateTotalScore()</em> function that returns the sum of the student's scores.</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>Most of the input is handled for you by the locked code in the editor.</p>

<p>In the <code>void Student::input()</code> function, you must read  scores from stdin and save them to your  instance variable.</p>

<p><strong>Constraints</strong> <br>
 <br>
</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>In the <code>int Student::calculateTotalScore()</code> function, you must return the student's total grade (the sum of the values in ).    </p>

<p>The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><p>The first line contains , the number of students in Kristen's class. The  subsequent lines contain each student's  exam grades for this semester.  </p>

<pre><code>3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>1
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Kristen's grades are on the first line of grades. Only  student scored higher than her.</p></div></div></div>
