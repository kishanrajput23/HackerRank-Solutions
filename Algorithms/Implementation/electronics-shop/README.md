## [Electronics Shop](https://www.hackerrank.com/challenges/electronics-shop/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget. Given price lists for keyboards and USB drives and a budget, find the cost to buy them.  If it is not possible to buy <em>both</em> items, return .</p>

<p><strong>Example</strong> <br>
 <br>
 <br>
  </p>

<p>The person can buy a , or a .  Choose the latter as the more expensive option and return .  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>getMoneySpent</em> function in the editor below.  </p>

<p>getMoneySpent has the following parameter(s):  </p>

<ul>
<li><em>int keyboards[n]</em>: the keyboard prices  </li>
<li><em>int drives[m]</em>:  the drive prices  </li>
<li><em>int b</em>: the budget  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the maximum that can be spent, or  if it is not possible to buy both items</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains three space-separated integers , , and , the budget, the number of keyboard models and the number of USB drive models. <br>
The second line contains  space-separated integers , the prices of each keyboard model. <br>
The third line contains  space-separated integers , the prices of the USB drives.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
<li>The price of each item is in the inclusive range .</li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>10 2 3</span>
<span>3 1</span>
<span>5 2 8</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>9</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Buy the  keyboard and the  USB drive for a total cost of .</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>5 1 1</span>
<span>4</span>
<span>5</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>-1</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>There is no way to buy one keyboard and one USB drive because , so return .</p></div></div></div>
