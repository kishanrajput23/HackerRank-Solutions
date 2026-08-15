## [Sets-STL](https://www.hackerrank.com/challenges/cpp-sets/problem)

**Domain:** C++  
**Subdomain:** STL  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order. Here are some of the frequently used member functions of sets:</p>

<ul>
<li><p><em>Declaration:</em></p>

<pre><code>set&lt;int&gt;s; //Creates a set of integers.
</code></pre></li>
<li><p><em>Size:</em></p>

<pre><code>int length=s.size(); //Gives the size of the set.
</code></pre></li>
<li><p><em>Insert:</em></p>

<pre><code>s.insert(x); //Inserts an integer x into the set s.
</code></pre></li>
<li><p><em>Erasing an element:</em></p>

<pre><code>s.erase(val); //Erases an integer val from the set s.
</code></pre></li>
<li><p><em>Finding an element:</em></p>

<pre><code>set&lt;int&gt;::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
Ex: set&lt;int&gt;::iterator itr=s.find(100); //If 100 is not present then it==s.end().
</code></pre>

<p>To know more about sets <a href="http://www.cplusplus.com/reference/set/set/">click Here</a>.  Coming to the problem, you will be given  queries. Each query is of one of the following three types:<br><br>
   :  Add an element  to the set.<br>
   :  Delete an element  from the set. (If the number  is not present in the set, then do nothing).<br>
   : If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).<br></p></li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line of the input contains  where  is the number of queries. The next  lines contain  query each. Each query consists of two integers  and  where  is the type of the query and  is an integer.<br></p>

<p><strong>Constraints</strong><br>
<br>
<br>
<br></p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For queries of type  print "Yes"(without quotes) if the number  is present in the set and if the number is not present, then print "No"(without quotes).<br>
Each query of type  should be printed in a new line.<br></p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>Yes
No
No
</code></pre></div></div></div>
