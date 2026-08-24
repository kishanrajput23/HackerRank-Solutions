## [Accessing Inherited Functions](https://www.hackerrank.com/challenges/accessing-inherited-functions/problem)

**Domain:** C++  
**Subdomain:** Inheritance  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are given three classes <em>A, B</em> and <em>C</em>. All three classes implement their own version of <em>func</em>.</p>

<p>In class <em>A</em>, <em>func</em>  multiplies the value passed as a parameter by :</p>

<div><pre><span></span><span>class</span> <span>A</span>
<span>{</span>
    <span>public</span><span>:</span>
        <span>A</span><span>(){</span>
            <span>callA</span> <span>=</span> <span>0</span><span>;</span>
        <span>}</span>
    <span>private</span><span>:</span>
        <span>int</span> <span>callA</span><span>;</span>
        <span>void</span> <span>inc</span><span>(){</span>
            <span>callA</span><span>++</span><span>;</span>
        <span>}</span>

    <span>protected</span><span>:</span>
        <span>void</span> <span>func</span><span>(</span><span>int</span> <span>&amp;</span> <span>a</span><span>)</span>
        <span>{</span>
            <span>a</span> <span>=</span> <span>a</span> <span>*</span> <span>2</span><span>;</span>
            <span>inc</span><span>();</span>
        <span>}</span>
    <span>public</span><span>:</span>
        <span>int</span> <span>getA</span><span>(){</span>
            <span>return</span> <span>callA</span><span>;</span>
        <span>}</span>
<span>};</span>
</pre></div>


<p>In class <em>B</em>, <em>func</em> multiplies the value passed as a parameter by :</p>

<div><pre><span></span><span>class</span> <span>B</span>
<span>{</span>
    <span>public</span><span>:</span>
        <span>B</span><span>(){</span>
            <span>callB</span> <span>=</span> <span>0</span><span>;</span>
        <span>}</span>
    <span>private</span><span>:</span>
        <span>int</span> <span>callB</span><span>;</span>
        <span>void</span> <span>inc</span><span>(){</span>
            <span>callB</span><span>++</span><span>;</span>
        <span>}</span>
    <span>protected</span><span>:</span>
        <span>void</span> <span>func</span><span>(</span><span>int</span> <span>&amp;</span> <span>a</span><span>)</span>
        <span>{</span>
            <span>a</span> <span>=</span> <span>a</span> <span>*</span> <span>3</span><span>;</span>
            <span>inc</span><span>();</span>
        <span>}</span>
    <span>public</span><span>:</span>
        <span>int</span> <span>getB</span><span>(){</span>
            <span>return</span> <span>callB</span><span>;</span>
        <span>}</span>
<span>};</span>
</pre></div>


<p>In class <em>C</em>, <em>func</em> multiplies the value passed as a parameter by :</p>

<div><pre><span></span><span>class</span> <span>C</span>
<span>{</span>
    <span>public</span><span>:</span>
        <span>C</span><span>(){</span>
            <span>callC</span> <span>=</span> <span>0</span><span>;</span>
        <span>}</span>
    <span>private</span><span>:</span>
        <span>int</span> <span>callC</span><span>;</span>
        <span>void</span> <span>inc</span><span>(){</span>
            <span>callC</span><span>++</span><span>;</span>
        <span>}</span>
    <span>protected</span><span>:</span>
        <span>void</span> <span>func</span><span>(</span><span>int</span> <span>&amp;</span> <span>a</span><span>)</span>
        <span>{</span>
            <span>a</span> <span>=</span> <span>a</span> <span>*</span> <span>5</span><span>;</span>
            <span>inc</span><span>();</span>
        <span>}</span>
    <span>public</span><span>:</span>
        <span>int</span> <span>getC</span><span>(){</span>
            <span>return</span> <span>callC</span><span>;</span>
        <span>}</span>
<span>};</span>
</pre></div>


<p>You are given a class <em>D</em>:</p>

<div><pre><span></span><span>class</span> <span>D</span> 
<span>{</span>

	<span>int</span> <span>val</span><span>;</span>
	<span>public</span><span>:</span>
		<span>//Initially val is 1</span>
		 <span>D</span><span>()</span>
		 <span>{</span>
		 	<span>val</span> <span>=</span> <span>1</span><span>;</span>
		 <span>}</span>


		 <span>//Implement this function</span>
		 <span>void</span> <span>update_val</span><span>(</span><span>int</span> <span>new_val</span><span>)</span>
		 <span>{</span>

			
		 <span>}</span>
		 <span>//For Checking Purpose</span>
		 <span>void</span> <span>check</span><span>(</span><span>int</span><span>);</span> <span>//Do not delete this line.</span>
<span>};</span>
</pre></div>


<p>You need to modify the class <em>D</em> and implement the function <code>update_val</code>  which sets <em>D</em>'s <em>val</em> to <em>new_val</em> by manipulating the value by only calling the <em>func</em> defined in classes <em>A, B</em> and <em>C</em>. </p>

<p><strong>It is guaranteed that <em>new_val</em> has only  and  as its prime factors.</strong></p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>Implement class <em>D</em>'s function <em>update_val</em>. This function should update <em>D</em>'s <em>val</em> only by calling <em>A, B</em> and <em>C</em>'s <em>func</em>.</p>

<p><strong>Constraints</strong>  </p>

<p> <em>new_val</em>  <br>
<strong>Note:</strong> The <em>new_val</em> only has  and  as its prime factors.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><p><em>new_val</em> </p></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><p><em>A</em>'s <em>func</em> will be called once. <br>
<em>B</em>'s <em>func</em> will be called once. <br>
<em>C</em>'s <em>func</em> will be called once.  </p></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Initially, <em>val</em> .</p>

<p><em>A</em>'s <em>func</em> is called once:  </p>

<pre><code>val = val*2  
val = 2
</code></pre>

<p><em>B</em>'s <em>func</em> is called once: </p>

<pre><code>val = val*3
val = 6
</code></pre>

<p><em>C</em>'s <em>func</em> is called once: </p>

<pre><code>val = val*5
val = 30
</code></pre></div></div></div>
