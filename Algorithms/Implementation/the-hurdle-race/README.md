## [The Hurdle Race](https://www.hackerrank.com/challenges/the-hurdle-race/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>A video player plays a game in which the character competes in a hurdle race.  Hurdles are of varying heights, and the characters have a maximum height they can jump.  There is a magic potion they can take that will increase their maximum jump height by  unit for each dose.  How many doses of the potion must the character take to be able to jump all of the hurdles.  If the character can already clear all of the hurdles, return .</p>

<p><strong>Example</strong> <br>
 <br>
  </p>

<p>The character can jump  unit high initially and must take  doses of potion to be able to jump all of the hurdles.   </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>hurdleRace</em> function in the editor below.    </p>

<p>hurdleRace has the following parameter(s):  </p>

<ul>
<li><em>int k</em>: the height the character can jump naturally  </li>
<li><em>int height[n]</em>: the heights of each hurdle  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the minimum number of doses required, always  or more</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains two space-separated integers  and , the number of hurdles and the maximum height the character can jump naturally. <br>
The second line contains  space-separated integers  where .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>  </li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>5 4</span>
<span>1 6 3 5 2</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>2</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Dan's character can jump a maximum of  units, but the tallest hurdle has a height of :</p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/0/1485458269-d39e09fb78-hurdle.png" alt="image" title=""></p>

<p>To be able to jump all the hurdles, Dan must drink  doses.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>5 7</span>
<span>2 5 4 5 2</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>0</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Dan's character can jump a maximum of  units, which is enough to cross all the hurdles:</p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/0/1485458562-e680371e5a-hurdle1.png" alt="image" title=""></p>

<p>Because he can already jump all the hurdles, Dan needs to drink  doses.</p></div></div></div>
