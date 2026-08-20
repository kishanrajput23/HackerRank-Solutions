## [C++ Class Templates](https://www.hackerrank.com/challenges/c-class-templates/problem)

**Domain:** C++  
**Subdomain:** Other Concepts  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A class template provides a specification for generating classes based on parameters. <em>Class templates</em> are generally used to implement containers. A class template is instantiated by passing a given set of types to it as template arguments. Here is an example of a class, MyTemplate, that can store one element of any type and that has just one member function <em>divideBy2</em>, which divides its value by 2. </p>

<pre>template &lt;class T&gt;
class MyTemplate {
T element;
public:
MyTemplate (T arg) {element=arg;}
T divideBy2 () {return element/2;}
};
</pre>

<p>It is also possible to define a different implementation of a template for a specific type. This is called <em>Template Specialization</em>. For the template given above, we find that a different implementation for type <em>char</em> will be more useful, so we write a function <em>printElement</em> to print the <em>char</em> element:</p>

<pre>// class template specialization:
template &lt;&gt;
class MyTemplate &lt;char&gt; {
char element;
public:
MyTemplate (char arg) {element=arg;}
char printElement ()
{
return element;
}
};
</pre>

<p>You are given a main() function which takes a set of inputs. The type of input governs the kind of operation to be performed, i.e. concatenation for <em>strings</em> and addition for <em>int</em> or <em>float</em>. You need to write the class template  <em>AddElements</em> which has a function <em>add()</em> for giving the sum of <em>int</em> or <em>float</em> elements. You also need to write a template specialization for the type <em>string</em> with a function <em>concatenate()</em> to concatenate the second string to the first string.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer .
Input will consist of  lines where  is the number given in the first line of the input followed by  lines.</p>

<p>Each of the next  line contains the type of the elements provided and depending on the type, either two strings or two integers or two floating point numbers will be given. The type will be one of <em>int</em>, <em>float</em> or <em>string</em> types only. Out of the following two elements, you have to concatenate or add the second element to the first element.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p> <br>
, where  is any float value <br>
, where value<sub>int</sub> is any int value <br>
, where  is the length of any string  </p>

<p><strong>The time limit for this challenge is 4 seconds.</strong></p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>The code provided in the code editor will use your class template to add/append elements and give the output.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>3
string John Doe
int 1 2
float 4.0 1.5
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>JohnDoe
3
5.5
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>"Doe" when appended with "John" gives "JohnDoe". 
2 added to 1 gives 3, and 1.5 added to 4.0 gives 5.5.</p></div></div></div>
