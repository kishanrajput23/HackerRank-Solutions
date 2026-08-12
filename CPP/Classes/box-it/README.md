## [Box It!](https://www.hackerrank.com/challenges/box-it/problem)

**Domain:** C++  
**Subdomain:** Classes  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Design a class named <em>Box</em> whose dimensions are integers and private to the class. The dimensions are labelled: length , breadth , and height . </p>

<p>The default constructor of the class should initialize , , and  to . </p>

<p>The parameterized constructor <em>Box(int length, int breadth, int height)</em> should initialize <em>Box</em>'s  and  to length, breadth and height.</p>

<p>The copy constructor <em>Box</em><em>Box</em> ) should set  and  to 's  and , respectively. </p>

<p>Apart from the above, the class should have  functions:  </p>

<ul>
<li><em>int getLength()</em>  - Return box's length  </li>
<li><em>int getBreadth()</em> - Return box's breadth  </li>
<li><em>int getHeight()</em>  - Return box's height    </li>
<li><em>long long CalculateVolume()</em> - Return the volume of the box</li>
</ul>

<p>Overload the operator  for the class <em>Box</em>. <em>Box</em>   <em>Box</em>   if:</p>

<ol>
<li> &lt;   </li>
<li> &lt;  and ==  </li>
<li> &lt;  and == and ==  </li>
</ol>

<p>Overload operator  for the class <em>Box()</em>. <br>
If  is an object of class <em>Box</em>:</p>

<p> should print ,  and  on a single line separated by spaces.</p>

<p>For example,</p>

<div><pre><span></span><span>Box</span> <span>b1</span><span>;</span> <span>// Should set b1.l = b1.b = b1.h = 0;</span>
<span>Box</span> <span>b2</span><span>(</span><span>2</span><span>,</span> <span>3</span><span>,</span> <span>4</span><span>);</span> <span>// Should set b1.l = 2, b1.b = 3, b1.h = 4;</span>
<span>b2</span><span>.</span><span>getLength</span><span>();</span>	<span>// Should return 2</span>
<span>b2</span><span>.</span><span>getBreadth</span><span>();</span> <span>// Should return 3</span>
<span>b2</span><span>.</span><span>getheight</span><span>();</span>	<span>// Should return 4</span>
<span>b2</span><span>.</span><span>CalculateVolume</span><span>();</span> <span>// Should return 24</span>
<span>bool</span> <span>x</span> <span>=</span> <span>(</span><span>b1</span> <span>&lt;</span> <span>b2</span><span>);</span>	<span>// Should return true based on the conditions given</span>
<span>cout</span><span>&lt;&lt;</span><span>b2</span><span>;</span> <span>// Should print 2 3 4 in order.</span>
</pre></div>
</div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p> <br>
Two boxes being compared using the  operator will not have all three dimensions equal.</p></div></div></div>
