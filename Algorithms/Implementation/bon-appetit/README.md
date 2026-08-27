## [Bill Division](https://www.hackerrank.com/challenges/bon-appetit/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Two friends Anna and Brian, are deciding how to split the bill at a dinner. Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion.  You must determine if his calculation is correct.</p>

<p>For example, assume the bill has the following prices: .  Anna declines to eat item  which costs .  If Brian calculates the bill correctly, Anna will pay .  If he includes the cost of , he will calculate .  In the second case, he should refund  to Anna.</p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>bonAppetit</em> function in the editor below.  It should print <code>Bon Appetit</code> if the bill is fairly split.  Otherwise, it should print the integer amount of money that Brian owes Anna.  </p>

<p>bonAppetit has the following parameter(s):  </p>

<ul>
<li><em>bill</em>: an array of integers representing the cost of each item ordered  </li>
<li><em>k</em>: an integer representing the zero-based index of the item Anna doesn't eat  </li>
<li><em>b</em>: the amount of money that Anna contributed to the bill  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains two space-separated integers  and , the number of items ordered and the -based index of the item that Anna did not eat. <br>
The second line contains  space-separated integers  where . <br>
The third line contains an integer, , the amount of money that Brian charged Anna for her share of the bill.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>  </li>
<li>  </li>
<li>    </li>
<li>The amount of money due Anna will always be an integer  </li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>If Brian did not overcharge Anna, print <code>Bon Appetit</code> on a new line; otherwise, print the difference (i.e., ) that Brian must refund to Anna.  This will always be an integer.  </p>

<p><strong>Sample Input 0</strong>  </p>

<pre><code>4 1
3 10 2 9
12
</code></pre>

<p><strong>Sample Output 0</strong>  </p>

<pre><code>5
</code></pre>

<p><strong>Explanation 0</strong> <br>
Anna didn't eat item , but she shared the rest of the items with Brian. The total cost of the shared items is  and, split in half, the cost per person is . Brian charged her  for her portion of the bill. We print the amount Anna was overcharged, , on a new line.</p>

<p><strong>Sample Input 1</strong>  </p>

<pre><code>4 1
3 10 2 9
7
</code></pre>

<p><strong>Sample Output 1</strong>  </p>

<pre><code>Bon Appetit
</code></pre>

<p><strong>Explanation 1</strong> <br>
Anna didn't eat item , but she shared the rest of the items with Brian. The total cost of the shared items is  and, split in half, the cost per person is . Because , we print <code>Bon Appetit</code> on a new line.  </p></div></div></div>
