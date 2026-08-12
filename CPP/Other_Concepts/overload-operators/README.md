## [Overload Operators](https://www.hackerrank.com/challenges/overload-operators/problem)

**Domain:** C++  
**Subdomain:** Other Concepts  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are given a class - <em>Complex</em>.</p>

<pre><code>class Complex
{
public:
    int a,b;
};
</code></pre>

<p>Operators are overloaded by means of operator functions, which are regular functions with special names. Their name begins with the operator keyword followed by the operator sign that is overloaded. The syntax is:</p>

<pre><code>type operator sign (parameters) { /*... body ...*/ }
</code></pre>

<p>You need to overload operators <code>+</code> and <code>&lt;&lt;</code> for the <em>Complex</em> class. </p>

<p>The operator <code>+</code> should add complex numbers according to the rules of complex addition:   </p>

<pre><code>(a+ib)+(c+id) = (a+c) + i(b+d)  
</code></pre>

<p>Overload the stream insertion operator <code>&lt;&lt;</code> to add "" to the stream:  </p>

<pre><code>cout&lt;&lt;c&lt;&lt;endl;
</code></pre>

<p>The above statement should print "" followed by a newline where  and .</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The overloaded operator <code>+</code> should receive two complex numbers ( and ) as parameters. It must return a single complex number.  </p>

<p>The overloaded operator <code>&lt;&lt;</code> should add "" to the stream where  is the real part and  is the imaginary part of the complex number which is then passed as a parameter to the overloaded operator.</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>As per the problem statement, for the output, print "" followed by a newline where  and .</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>3+i4
5+i6
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>8+i10
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Given output after performing required operations (overloading + operator) is <em>8+i10</em>. </p></div></div></div>
