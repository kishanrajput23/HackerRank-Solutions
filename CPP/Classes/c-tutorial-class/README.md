## [Class](https://www.hackerrank.com/challenges/c-tutorial-class/problem)

**Domain:** C++  
**Subdomain:** Classes  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Classes in C++ are user defined types declared with keyword class that has data and functions . Although classes and structures have the same type of functionality, there are some basic differences. The data members of a class are private by default and the members of a structure are public by default. Along with storing multiple data in a common block, it also assigns some functions (known as methods) to manipulate/access them. It serves as the building block of Object Oriented Programming.  </p>

<p>It also has access specifiers, which restrict the access of member elements. The primarily used ones are the following:</p>

<ul>
<li><em>public:</em> Public members (variables, methods) can be accessed from anywhere the code is visible.</li>
<li><em>private:</em> Private members can be accessed only by other member functions, and it can not be accessed outside of class.</li>
</ul>

<p>Class can be represented in the form of</p>

<pre><code>class ClassName {
    access_specifier1:
        type1 val1;
        type2 val2;
        ret_type1 method1(type_arg1 arg1, type_arg2 arg2,...)
        ...
    access_specifier2:
        type3 val3;
        type4 val4;
        ret_type2 method2(type_arg3 arg3, type_arg4 arg4,...)
        ...
};
</code></pre>

<p>It's a common practice to make all variables private, and set/get them using public methods. For example:</p>

<pre><code>class SampleClass {
    private:
        int val;
    public:
        void set(int a) {
            val = a;
        }
        int get() {
            return val;
        }
};
</code></pre>

<hr>

<p>We can store details related to a student in a class consisting of his <em>age (int), first_name (string), last_name (string) and standard (int)</em>. <br>
<br>
You have to create a class, named <em>Student</em>, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:</p>

<ul>
<li><em>get_age</em>, <em>set_age</em></li>
<li><em>get_first_name</em>, <em>set_first_name</em></li>
<li><em>get_last_name</em>, <em>set_last_name</em></li>
<li><em>get_standard</em>, <em>set_standard</em></li>
</ul>

<p>Also, you have to create another method <em>to_string()</em> which returns the string consisting of the above elements, separated by a comma(<em>,</em>). You can refer to <em>stringstream</em> for this.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>Input will consist of four lines. <br>
The first line will contain an integer, representing the <em>age</em>.
The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the <em>first_name</em> of a student. <br>
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the <em>last_name</em> of a student. <br>
The fourth line will contain an integer, representing the <em>standard</em> of student.</p>

<p><em>Note:</em> The number of characters in <em>first_name</em> and <em>last_name</em> will not exceed 50.</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>The code provided by HackerRank will use your class members to set and then get the elements of the <em>Student</em> class.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>15
john
carmack
10
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>15
carmack, john
10

15,john,carmack,10
</code></pre></div></div></div>
