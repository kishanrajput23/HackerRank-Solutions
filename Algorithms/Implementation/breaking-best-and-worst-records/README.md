## [Breaking the Records](https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Maria plays college basketball and wants to go pro.  Each season she maintains a record of her play.  She tabulates the number of times she breaks her season record for <em>most points</em> and <em>least points</em> in a game.  Points scored in the first game establish her record for the season, and she begins counting from there.</p>

<p><strong>Example</strong> <br>
   </p>

<p>Scores are in the same order as the games played.  She tabulates her results as follows:</p>

<pre>                                     Count
    Game  Score  Minimum  Maximum   Min Max
     0      12     12       12       0   0
     1      24     12       24       0   1
     2      10     10       24       1   1
     3      24     10       24       1   1
</pre>

<p>Given the scores for a season, determine the number of times Maria breaks her records for <em>most</em> and <em>least</em> points scored during the season.</p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>breakingRecords</em> function in the editor below. </p>

<p>breakingRecords has the following parameter(s):  </p>

<ul>
<li><em>int scores[n]:</em> points scored per game   </li>
</ul>

<p><strong>Returns</strong>   </p>

<ul>
<li><em>int[2]:</em> An array with the numbers of times she broke her records. Index  is for breaking <em>most points</em> records, and index  is for breaking <em>least points</em> records.  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer , the number of games. <br>
The second line contains  space-separated integers describing the respective values of .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>9</span>
<span>10 5 20 20 4 5 2 25 1</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>2 4</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The diagram below depicts the number of times Maria broke her best and worst records throughout the season:</p>

<p><img src="https://s3.amazonaws.com/hr-assets/0/1487360234-6bca5c518d-breakingbest3.png" alt="image" title=""></p>

<p>She broke her best record twice (after games  and ) and her worst record four times (after games , , , and ), so we print <code>2 4</code> as our answer. Note that she <em>did not</em> break her record for best score during game , as her score during that game was <em>not</em> strictly greater than her best record at the time.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>10</span>
<span>3 4 21 36 10 28 35 5 24 42</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>4 0</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The diagram below depicts the number of times Maria broke her best and worst records throughout the season:</p>

<p><img src="https://s3.amazonaws.com/hr-assets/0/1487360375-aee4388234-breakingbest5.png" alt="image" title=""></p>

<p>She broke her best record four times (after games , , , and ) and her worst record zero times (no score during the season was lower than the one she earned during her first game), so we print <code>4 0</code> as our answer.</p></div></div></div>
