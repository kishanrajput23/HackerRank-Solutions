## [Abstract Classes - Polymorphism](https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem)

**Domain:** C++  
**Subdomain:** Classes  
**Difficulty:** Hard  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Abstract base classes in C++ can only be used as base classes. Thus, they are allowed to have virtual member functions without definitions.</p>

<p>A cache is a component that stores data so future requests for that data can be served faster. The data stored in a cache might be the results of an earlier computation, or the duplicates of data stored elsewhere. A cache hit occurs when the requested data can be found in a cache, while a cache miss occurs when it cannot. Cache hits are served by reading data from the cache which is faster than recomputing a result or reading from a slower data store. Thus, the more requests that can be served from the cache, the faster the system performs.</p>

<p>One of the popular cache replacement policies is: "least recently used" (LRU). It discards the least recently used items first.</p>

<p>For example, if a cache with a capacity to store 5 keys has the following state(arranged from most recently used key to least recently used key) -</p>

<pre><code>5 3 2 1 4
</code></pre>

<p>Now, If the next key comes as 1(which is a cache hit), then the cache state in the same order will be -</p>

<pre><code>1 5 3 2 4
</code></pre>

<p>Now, If the next key comes as 6(which is a cache miss), then the cache state in the same order will be -</p>

<pre><code>6 1 5 3 2
</code></pre>

<p>You can observe that 4 has been discarded because it was the least recently used key and since the capacity of cache is 5, it could not be retained in the cache any longer.</p>

<p><strong>Given an abstract base class <em>Cache</em> with member variables and functions</strong>: <br></p>

<p><em>mp</em> - Map the key to the node in the linked list<br>
<em>cp</em> - Capacity<br>
<em>tail</em> - Double linked list tail pointer<br>
<em>head</em> - Double linked list head pointer<br>
<em>set()</em> - Set/insert the value of the key, if present, otherwise add the key as the most recently used key. If the cache has reached its capacity, it should replace the least recently used key with a new key.<br>
<em>get()</em> - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.<br></p>

<p>You have to write a class <em>LRUCache</em> which extends the class <em>Cache</em> and uses the member functions and variables to implement an LRU cache.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>First line of input will contain the  number of lines containing  or  commands followed by the capacity  of the cache.<br>
The following  lines can either contain  or  commands.<br>
An input line starting with  will be followed by a  to be found in the cache. An input line starting with  will be followed by the  and  respectively to be inserted/replaced in the cache.</p>

<p><strong>Constraints</strong> <br>
 <br>
 <br>
 <br>
  </p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>The code provided in the editor will use your derived class <em>LRUCache</em> to output the value whenever a get command is encountered.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>3 1
set 1 2
get 1
get 2
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>2
-1
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Since, the capacity of the cache is 1, the first <em>set</em> results in setting up the key 1 with it's value 2. The first <em>get</em> results in a cache hit of key 1, so 2 is printed as the value for the first <em>get</em>. The second <em>get</em> is a cache miss, so -1 is printed.</p></div></div></div>
