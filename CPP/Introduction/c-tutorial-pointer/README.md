## [Pointer](https://www.hackerrank.com/challenges/c-tutorial-pointer/problem)

**Domain:** C++  
**Subdomain:** Introduction  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A <a href="http://en.wikipedia.org/wiki/Pointer_%28computer_programming%29">pointer</a> in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership. <br>
<br>
In order to access the memory address of a variable, , prepend it with  sign. For example, <code>&amp;val</code> returns the memory address of . <br>
<br>
This memory address is assigned to a pointer and can be shared among functions. For example,  assigns the memory address of  to pointer . To access the content of the memory pointed to, prepend the variable name with a <code>*</code>. For example, <code>*p</code> will return the value stored in  and any modification to it will be performed on .</p>

<pre><code>void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &amp;a);
    increment(&amp;a);
    printf("%d", a);
    return 0;
}  
</code></pre>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>update</em> function in the editor below.  </p>

<p><em>update</em> has the following parameters:  </p>

<ul>
<li><em>int *a:</em> an integer  </li>
<li><em>int *b:</em> an integer  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><p>The function is declared with a <code>void</code> return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.  </p></li>
<li><p></p></li>
<li></li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>Input will contain two integers,  and , separated by a newline.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>4
5
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>9
1
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
</ul></div></div></div>
