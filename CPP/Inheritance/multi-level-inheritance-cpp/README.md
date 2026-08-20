## [Multi Level Inheritance ](https://www.hackerrank.com/challenges/multi-level-inheritance-cpp/problem)

**Domain:** C++  
**Subdomain:** Inheritance  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p><em>This challenge is an extension of a previous challenge named Inheritance-Introduction. We highly recommend solving Inheritance-Introduction before solving this problem.</em></p>

<p>In the previous problem, we learned about inheritance and how can a derived class object use the member functions of the base class.</p>

<p>In this challenge, we explore multi-level inheritance. Suppose, we have a class A which is the base class and we have a class B which is derived from class A and we have a class C which is derived from class B, we can access the functions of both class A and class B by creating an object for class C. Hence, this mechanism is called <em>multi-level inheritance</em>. (B inherits A and C inherits B.)</p>

<p>Create a class called <em>Equilateral</em> which inherits from <em>Isosceles</em> and should have a function such that the output is as given below.</p></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>I am an equilateral triangle
I am an isosceles triangle
I am a triangle
</code></pre></div></div></div>
