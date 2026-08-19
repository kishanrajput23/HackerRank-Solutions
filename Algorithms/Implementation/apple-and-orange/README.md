## [Apple and Orange](https://www.hackerrank.com/challenges/apple-and-orange/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.  </p>

<p>In the diagram below: </p>

<ul>
<li>The red region denotes the house, where  is the start point, and  is the endpoint. The apple tree is to the left of the house, and the orange tree is to its right. </li>
<li>Assume the trees are located on a single point, where the apple tree is at point , and the orange tree is at point .</li>
<li>When a fruit falls from its tree, it lands  units of distance from its tree of origin along the -axis. *A negative value of  means the fruit fell  units to the tree's left, and a positive value of  means it falls  units to the tree's right. *</li>
</ul>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/25220/1474218925-f2a791d52c-Appleandorange2.png" alt="Apple and orange(2).png" title=""></p>

<p>Given the value of  for  apples and  oranges, determine how many apples and oranges will fall on Sam's house (i.e., in the inclusive range )?</p>

<p>For example, Sam's house is between  and .  The apple tree is located at  and the orange at .  There are  apples and  oranges.  Apples are thrown  units distance from , and  units distance.  Adding each apple distance to the position of the tree, they land at .  Oranges land at .  One apple and two oranges land in the inclusive range  so we print </p>

<pre><code>1
2
</code></pre>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>countApplesAndOranges</em> function in the editor below.  It should print the number of apples and oranges that land on Sam's house, each on a separate line.  </p>

<p>countApplesAndOranges has the following parameter(s):  </p>

<ul>
<li><em>s</em>: integer, starting point of Sam's house location.       </li>
<li><em>t</em>: integer, ending location of Sam's house location.     </li>
<li><em>a</em>: integer, location of the Apple tree.      </li>
<li><em>b</em>: integer, location of the Orange tree.         </li>
<li><em>apples</em>: integer array, distances at which each apple falls from the tree.      </li>
<li><em>oranges</em>: integer array, distances at which each orange falls from the tree.  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains two space-separated integers denoting the respective values of  and . <br>
The second line contains two space-separated integers denoting the respective values of  and . <br>
The third line contains two space-separated integers denoting the respective values of  and . <br>
The fourth line contains  space-separated integers denoting the respective distances that each apple falls from point . <br>
The fifth line contains  space-separated integers denoting the respective distances that each orange falls from point .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
<li></li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Print two integers on two different lines:</p>

<ol>
<li>The first integer:  the number of apples that fall on Sam's house.</li>
<li>The second integer:  the number of oranges that fall on Sam's house.  </li>
</ol></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span>7 11</span>
<span>5 15</span>
<span>3 2</span>
<span>-2 2 1</span>
<span>5 -6</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>1</span>
<span>1</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The first apple falls at position . <br>
The second apple falls at position . <br>
The third apple falls at position . <br>
The first orange falls at position . <br>
The second orange falls at position . <br>
Only one fruit (the second apple) falls within the region between  and , so we print  as our first line of output. <br>
Only the second orange falls within the region between  and , so we print  as our second line of output.  </p></div></div></div>
