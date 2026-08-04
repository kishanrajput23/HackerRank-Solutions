## [Conditional Statements](https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem)

**Domain:** C++  
**Subdomain:** Introduction  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p><em>if</em> and <em>else</em> are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:</p>

<ol>
<li><p><em>if:</em> This executes the body of bracketed code starting with  if  evaluates to <em>true</em>.</p>

<pre><code>if (condition) {
    statement1;
    ...
}
</code></pre></li>
<li><p><em>if - else:</em> This executes the body of bracketed code starting with  if  evaluates to <em>true</em>, or it executes the body of code starting with  if  evaluates to <em>false</em>. Note that only <em>one</em> of the bracketed code sections will ever be executed.</p>

<pre><code>if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}
</code></pre></li>
<li><p><em>if - else if - else:</em> In this structure, dependent statements are chained together and the  for each statement is only checked if all prior conditions in the chain evaluated to <em>false</em>. Once a  evaluates to <em>true</em>, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each  in the chain evaluates to false, then the body of bracketed code in the <em>else</em> block at the end is executed.</p>

<pre><code>if(first condition) {
    ...
}
else if(second condition) {
    ...
}
.
.
.
else if((n-1)'th condition) {
    ....
}
else {
    ...
}
</code></pre></li>
</ol>

<hr>

<p>Given a positive integer , do the following:</p>

<ul>
<li>If , print the lowercase English word corresponding to the number (e.g., <code>one</code> for , <code>two</code> for , etc.).</li>
<li>If , print <code>Greater than 9</code>.</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>A single integer, .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>If , then print the lowercase English word corresponding to the number (e.g., <code>one</code> for , <code>two</code> for , etc.); otherwise, print <code>Greater than 9</code>.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span>5</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>five</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p><code>five</code> is the English word for the number .</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span>8</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>eight</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p><code>eight</code> is the English word for the number .</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 2</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span>44</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 2</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>Greater than 9</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 2</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p> is greater than , so we print <code>Greater than 9</code>.</p></div></div></div>
