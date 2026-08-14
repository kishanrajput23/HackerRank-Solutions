## [Compare the Triplets](https://www.hackerrank.com/challenges/compare-the-triplets/problem)

**Domain:** Algorithms  
**Subdomain:** Warmup  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from <em>1</em> to <em>100</em> for three categories: <em>problem clarity</em>, <em>originality</em>, and <em>difficulty</em>. </p>

<p>The rating for Alice's challenge is the triplet <em>a = (a[0], a[1], a[2])</em>, and the rating for Bob's challenge is the triplet <em>b = (b[0], b[1], b[2])</em>.</p>

<p>The task is to calculate their comparison points by comparing each category:    </p>

<ul>
<li> If <em>a[i] &gt; b[i]</em>, then Alice is awarded <em>1</em> point. </li>
<li> If <em>a[i] &lt; b[i]</em>, then Bob is awarded <em>1</em> point. </li>
<li> If <em>a[i] = b[i]</em>, then neither person receives a point.</li>
</ul>

<p><strong>Example</strong>   </p>

<p><em>a = [1, 2, 3]</em> <br>
<em>b = [3, 2, 1]</em> <br>
  </p>

<ul>
<li>For elements *0*, Bob is awarded a point because <em>a[0] &lt; b[0]</em>. </li> 
<li>For the equal elements <em>a[1]</em> and <em>b[1]</em>, no points are earned. </li> 
<li>Finally, for elements <em>2</em>, <em>a[2] &gt; b[2]</em> so Alice receives a point. </li> 
</ul>

<p>The return array is <em>[1, 1]</em> with Alice's score first and Bob's second.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the function <em>compareTriplets</em> with the following parameter(s):  </p>

<ul>
<li><em>int a[3]</em>: Alice's challenge rating  </li>
<li><em>int b[3]</em>: Bob's challenge rating   </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int[2]</em>: the first element is Alice's score and the second is Bob's score</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains <em>3</em> space-separated integers, <em>a[0]</em>, <em>a[1]</em>, and <em>a[2]</em>, the respective values in triplet <em>a</em>. <br>
The second line contains <em>3</em> space-separated integers, <em>b[0]</em>, <em>b[1]</em>, and <em>b[2]</em>, the respective values in triplet <em>b</em>.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li> <em>1 ≤ a[i] ≤ 100</em></li>
<li> <em>1 ≤ b[i] ≤ 100</em></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>5 6 7</span>
<span>3 6 10</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>1 1</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>In this example: </p>

<ul>
<li></li>
<li></li>
</ul>

<p>Now, let's compare each individual score:</p>

<ul>
<li>, so Alice receives  point.</li>
<li>, so nobody receives a point.</li>
<li>, so Bob receives  point.</li>
</ul>

<p>Alice's comparison score is , and Bob's comparison score is . Thus, we return the array .  </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>17 28 30</span>
<span>99 16 8</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>2 1</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Comparing the  elements,  so Bob receives a point. <br>
Comparing the  and  elements,  and  so Alice receives two points. <br>
The return array is .  </p></div></div></div>
