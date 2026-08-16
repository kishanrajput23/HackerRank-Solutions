## [Inheritance Introduction](https://www.hackerrank.com/challenges/inheritance-introduction/problem)

**Domain:** C++  
**Subdomain:** Inheritance  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>One of the important topics of Object Oriented Programming is Inheritance. Inheritance allows us to define a class in terms of another class, which allows us in the reusability of the code.Check out the code below:</p>

<pre><code>class Triangle{
    public:
        void triangle(){
            cout&lt;&lt;"I am a triangle\n";
        }
};
</code></pre>

<p>The class Triangle has a function called triangle(). Now we create a class derived from the base class Triangle called Isosceles.</p>

<pre><code>class Isosceles : public Triangle{
    public:
        void isosceles(){
            cout&lt;&lt;"I am an isosceles triangle\n";
        }
};
</code></pre>

<p>Now we can create a derived class object and use it to access the functions of the base class.</p>

<pre><code>int main(){
    Isosceles isc;
    isc.isosceles();
    isc.triangle();
    return 0;
}
</code></pre>

<p>This code will print:</p>

<pre><code>I am an isosceles triangle
I am a triangle
</code></pre>

<p>Now write a function in Isosceles class such that the output is as given below.</p></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>I am an isosceles triangle
In an isosceles triangle two sides are equal
I am a triangle
</code></pre></div></div></div>
