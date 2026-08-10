## [Structs](https://www.hackerrank.com/challenges/c-tutorial-struct/problem)

**Domain:** C++  
**Subdomain:** Classes  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p><em>struct</em> is a way to combine multiple fields to represent a composite data structure, which further lays the foundation for Object Oriented Programming. For example, we can store details related to a student in a struct consisting of his <em>age (int), first_name (string), last_name (string) and standard (int)</em>. <br>
<br>
<em>struct</em> can be represented as</p>

<pre><code>struct NewType {
    type1 value1;
    type2 value2;
    .
    .
    .
    typeN valueN;
};
</code></pre>

<p>You have to create a struct, named <em>Student</em>, representing the student's details, as mentioned above, and store the data of a student.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>Input will consist of four lines. <br>
The first line will contain an integer, representing <em>age</em>. <br>
The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the <em>first_name</em> of a student. <br>
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the <em>last_name</em> of a student. <br>
The fourth line will contain an integer, representing the <em>standard</em> of student.  </p>

<p><em>Note:</em> The number of characters in <em>first_name</em> and <em>last_name</em> will not exceed 50.</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Output will be of a single line, consisting of <em>age</em>, <em>first_name</em>, <em>last_name</em> and <em>standard</em>, each separated by one white space.  </p>

<p><em>P.S.:</em> I/O will be handled by HackerRank.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>15
john
carmack
10
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>15 john carmack 10
</code></pre></div></div></div>
