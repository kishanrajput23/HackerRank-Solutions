## [Virtual Functions](https://www.hackerrank.com/challenges/virtual-functions/problem)

**Domain:** C++  
**Subdomain:** Classes  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>This problem is to get you familiar with virtual functions. Create three classes <em>Person, Professor</em> and <em>Student</em>. The class <em>Person</em> should have data members name and age. The classes <em>Professor</em> and <em>Student</em> should inherit from the class <em>Person</em>.</p>

<p>The class <em>Professor</em> should have two integer members: <em>publications</em> and cur_id. There will be two member functions: <em>getdata</em> and <em>putdata</em>. The function <em>getdata</em> should get the input from the user: the <em>name, age</em> and <em>publications</em> of the professor. The function <em>putdata</em> should print the <em>name, age, publications</em> and the cur_id of the professor.</p>

<p>The class <em>Student</em> should have two data members: <em>marks</em>, which is an array of size  and cur_id. It has two member functions: <em>getdata</em> and <em>putdata</em>. The function <em>getdata</em> should get the input from the user: the <em>name, age</em>, and the <em>marks</em> of the student in  subjects. The function <em>putdata</em> should print the <em>name, age</em>, <em>sum</em> of the marks and the cur_id of the student.</p>

<p>For each object being created of the <em>Professor</em> or the <em>Student</em> class, sequential id's should be assigned to them starting from .</p>

<p>Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.</p>

<p><strong>Note:</strong> Expand the main function to look at how the input is being handled.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line of input contains the number of objects that are being created.
If the first line of input for each object is , it means that the object being created is of the <em>Professor</em> class, you will have to input the <em>name, age</em> and <em>publications</em> of the professor.</p>

<p>If the first line of input for each object is , it means that the object is of the <em>Student</em> class, you will have to input the <em>name, age</em> and the <em>marks</em> of the student in  subjects.</p>

<p><strong>Constraints</strong>  </p>

<p>, where  is the length of the name. <br>
 <br>
 <br>
, where marks is the marks of the student in each subject.</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>There are two types of output depending on the object. </p>

<p>If the object is of type <em>Professor</em>, print the space separated <em>name, age, publications</em> and <em>id</em> on a new line.</p>

<p>If the object is of the <em>Student</em> class, print the space separated <em>name, age</em>, the <em>sum of the marks</em> in  subjects and <em>id</em> on a new line.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>4
1
Walter 56 99
2
Jesse 18 50 48 97 76 34 98
2
Pinkman 22 10 12 0 18 45 50
1
White 58 87
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>Walter 56 99 1
Jesse 18 403 1
Pinkman 22 135 2
White 58 87 2
</code></pre></div></div></div>
