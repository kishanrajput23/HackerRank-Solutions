## [Deque-STL](https://www.hackerrank.com/challenges/deque-stl/problem)

**Domain:** C++  
**Subdomain:** STL  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Double ended queue or Deque(part of C++ STL) are sequence containers with dynamic sizes that can be expanded or contracted on both ends (either its front or its back). The member functions of deque that are mainly used are:</p>

<ul>
<li><p><em>Deque Template:</em></p>

<pre><code>std::deque&lt;value_type&gt;
</code></pre></li>
<li><p><em>Declaration:</em></p>

<pre><code>deque&lt;int&gt; mydeque; //Creates a double ended queue of deque of int type
</code></pre></li>
<li><p><em>Size</em></p>

<pre><code>int length = mydeque.size(); //Gives the size of the deque
</code></pre></li>
<li><p><em>Push</em></p>

<pre><code>mydeque.push_back(1); //Pushes element at the end
mydeque.push_front(2); //Pushes element at the beginning
</code></pre></li>
<li><p><em>Pop</em></p>

<pre><code>mydeque.pop_back(); //Pops element from the end
mydeque.pop_front(); //Pops element from the beginning
</code></pre></li>
<li><p><em>Empty</em></p>

<pre><code>mydeque.empty() //Returns a boolean value which tells whether the deque is empty or not
</code></pre></li>
</ul>

<p>To know more about deque, <a href="http://www.cplusplus.com/reference/deque/deque/">click here</a></p>

<p>Given a set of arrays of size  and an integer , you have to find the maximum integer for each and every contiguous subarray of size  for each of the given arrays.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>First line of input will contain the number of test cases <em>T</em>. For each test case, you will be given the size of array <em>N</em> and the size of subarray to be used <em>K</em>. This will be followed by the elements of the array <em>A<sub>i</sub></em>.</p>

<p><strong>Constraints</strong> <br>
 <br>
 <br>
 <br>
 , where  is the  element in the array .  </p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>For each of the contiguous subarrays of size  of each array, you have to print the maximum integer.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>2
5 2
3 4 6 3 4
7 4
3 4 5 8 1 4 10
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>4 6 6 4
8 8 8 10
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>For the first case, the contiguous subarrays of size 2 are {3,4},{4,6},{6,3} and {3,4}. The 4 maximum elements of subarray of size 2 are:  4 6 6 4. <br> <br>
For the second case,the contiguous subarrays of size 4 are {3,4,5,8},{4,5,8,1},{5,8,1,4} and {8,1,4,10}. The 4 maximum element of subarray of size 4 are:  8 8 8 10.</p></div></div></div>
