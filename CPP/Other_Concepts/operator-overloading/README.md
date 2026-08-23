## [Operator Overloading](https://www.hackerrank.com/challenges/operator-overloading/problem)

**Domain:** C++  
**Subdomain:** Other Concepts  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Classes define new types in C++. Types in C++ not only interact by means of constructions and assignments but also via operators. For example:</p>

<pre><code>int a=2, b=1, c;
c = b + a;
</code></pre>

<p>The result of variable <em>c</em> will be 3. <br>
Similarly, classes can also perform operations using <a href="https://msdn.microsoft.com/en-us/library/5tk49fh2.aspx">operator overloading</a>. Operators are overloaded by means of operator functions, which are regular functions with special names. Their name begins with the operator keyword followed by the operator sign that is overloaded. The syntax is:</p>

<pre>type operator sign (parameters) { /*... body ...*/ }
</pre>

<p>You are given a main() function which takes a set of inputs to create two matrices and prints the result of their addition. You need to write the class <em>Matrix</em> which has a member <em>a</em> of type <em>vector&lt;vector&lt;int&gt; &gt;</em>. You also need to write a member function to overload the operator <strong>+</strong>. The function's job will be to add two objects of <em>Matrix</em> type and return the resultant <em>Matrix</em>.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>First line will contain the number of test cases . For each test case, there are three lines of input.</p>

<p>The first line of each test case will contain two integers  and  which denote the number of the <em>rows</em> and <em>columns</em> respectively of the two matrices that will follow on the next two lines. These next two lines will each contain  elements describing the two matrices in row-wise format i.e. first  elements belong to the first row,next  elements belong to the second row and so on.</p>

<p><strong>Constraints</strong> <br>
 <br>
 <br>
 <br>
 , where  is the element in the  row and  column of the matrix.</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>The code provided in the editor will use your class  and overloaded operator function to add the two matrices and give the output.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>1
2 2
2 2 2 2
1 2 3 4
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>3 4 
5 6
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The sum of first matrix and the second matrix is the matrix given in the output.</p></div></div></div>
