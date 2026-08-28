## [Cats and a Mouse](https://www.hackerrank.com/challenges/cats-and-a-mouse/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Two cats and a mouse are at various positions on a line.  You will be given their starting positions.  Your task is to determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed.  If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.</p>

<p>You are given  queries in the form of , , and  representing the respective positions for cats  and , and for mouse . Complete the function  to return the appropriate answer to each query, which will be printed on a new line.</p>

<ul>
<li>If cat  catches the mouse first, print <code>Cat A</code>.</li>
<li>If cat  catches the mouse first, print <code>Cat B</code>.</li>
<li>If both cats reach the mouse at the same time, print <code>Mouse C</code> as the two cats fight and mouse escapes.  </li>
</ul>

<p><strong>Example</strong>  </p>

<p> <br>
 <br>
  </p>

<p>The cats are at positions  (Cat A) and  (Cat B), and the mouse is at position .  Cat B, at position  will arrive first since it is only  unit away while the other is  units away.  Return 'Cat B'.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>catAndMouse</em> function in the editor below.  </p>

<p>catAndMouse has the following parameter(s):  </p>

<ul>
<li><em>int x</em>: Cat 's position  </li>
<li><em>int y</em>: Cat 's position  </li>
<li><em>int z</em>: Mouse 's position  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>string:</em>  Either 'Cat A', 'Cat B', or 'Mouse C'</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains a single integer, , denoting the number of queries. <br>
Each of the  subsequent lines contains three space-separated integers describing the respective values of  (cat 's location),  (cat 's location), and  (mouse 's location).</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>  </li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>2</span>
<span>1 2 3</span>
<span>1 3 2</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>Cat B</span>
<span>Mouse C</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p><em>Query 0:</em> The positions of the cats and mouse are shown below:
<img src="https://s3.amazonaws.com/hr-challenge-images/0/1480434477-7418fccf34-cat.png" alt="image" title=""></p>

<p>Cat  will catch the mouse first, so we print <code>Cat B</code> on a new line.</p>

<p><em>Query 1</em>: In this query, cats  and  reach mouse  at the exact same time:
<img src="https://s3.amazonaws.com/hr-challenge-images/0/1480434557-601bef86ba-cat1.png" alt="image" title=""></p>

<p>Because the mouse escapes, we print <code>Mouse C</code> on a new line.</p></div></div></div>
