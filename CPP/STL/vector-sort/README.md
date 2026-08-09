## [Vector-Sort](https://www.hackerrank.com/challenges/vector-sort/problem)

**Domain:** C++  
**Subdomain:** STL  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are given  integers.Sort the  integers and print the sorted order.<br>
Store the  integers in a vector.Vectors are sequence containers representing arrays that can change in size.</p>

<ul>
<li><p><em>Declaration:</em></p>

<pre><code>vector&lt;int&gt;v; (creates an empty vector of integers)
</code></pre></li>
<li><p><em>Size:</em></p>

<pre><code>int size=v.size();
</code></pre></li>
<li><p><em>Pushing an integer into a vector:</em></p>

<pre><code>v.push_back(x);(where x is an integer.The size increases by 1 after this.)
</code></pre></li>
<li><p><em>Popping the last element from the vector:</em></p>

<pre><code>v.pop_back(); (After this the size decreases by 1)
</code></pre></li>
<li><p><em>Sorting a vector:</em></p>

<pre><code>sort(v.begin(),v.end()); (Will sort all the elements in the vector)
</code></pre></li>
</ul>

<p>To know more about vectors, <a href="http://www.cplusplus.com/reference/vector/vector/">Click Here</a></p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line of the input contains  where  is the number of integers. The next line contains  integers.<br>
<strong>Constraints</strong><br>
<br>
, where  is the  integer in the vector.</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Print the integers in the sorted order one by one in a single line followed by a space.<br></p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>5
1 6 10 8 4
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>1 4 6 8 10
</code></pre></div></div></div>
