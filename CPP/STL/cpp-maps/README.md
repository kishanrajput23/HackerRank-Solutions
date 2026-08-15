## [Maps-STL](https://www.hackerrank.com/challenges/cpp-maps/problem)

**Domain:** C++  
**Subdomain:** STL  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Maps are a part of the C++ STL.Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.The mainly used member functions of maps are:</p>

<ul>
<li><p><em>Map Template:</em></p>

<pre><code>std::map &lt;key_type, data_type&gt;
</code></pre></li>
<li><p><em>Declaration:</em></p>

<pre><code>map&lt;string,int&gt;m; //Creates a map m where key_type is of type string and data_type is of type int.
</code></pre></li>
<li><p><em>Size:</em></p>

<pre><code>int length=m.size(); //Gives the size of the map.
</code></pre></li>
<li><p><em>Insert:</em></p>

<pre><code>m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.
</code></pre></li>
<li><p><em>Erasing an element:</em></p>

<pre><code>m.erase(val); //Erases the pair from the map where the key_type is val.
</code></pre></li>
<li><p><em>Finding an element:</em></p>

<pre><code>map&lt;string,int&gt;::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
Ex: map&lt;string,int&gt;::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().
</code></pre></li>
<li><p><em>Accessing the value stored in the key:</em></p>

<pre><code>To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr-&gt;second we can access the value.
</code></pre></li>
</ul>

<p>To know more about maps <a href="http://www.cplusplus.com/reference/map/map/">click Here</a>.</p>

<p>You are appointed as the assistant to a  teacher in a school and  she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has  queries:</p>

<p> :Add the marks  to the student whose name is .</p>

<p>: Erase the marks of the students whose name is .</p>

<p>: Print the marks of the students whose name is .  (If  didn't get any marks print .)</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line of the input contains  where  is the number of queries. The next  lines contain  query each.The first integer,  of each query is the type of the query.If  query is of type , it consists of one string and an integer  and  where  is the name of the student and  is the marks of the student.If query is of type  or ,it consists of a single string  where  is the name of the student. </p>

<p><strong>Constraints</strong></p>

<p></p>

<p></p>

<p></p>

<p></p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For queries of type  print the marks of the given student.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>30
20
0
</code></pre></div></div></div>
