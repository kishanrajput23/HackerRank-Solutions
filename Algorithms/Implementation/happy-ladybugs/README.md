## [Happy Ladybugs](https://www.hackerrank.com/challenges/happy-ladybugs/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Happy Ladybugs is a board game having the following properties:</p>

<ul>
<li>The board is represented by a string, , of length . The  character of the string, , denotes the  cell of the board.

<ul><li>If  is an underscore (i.e., <code>_</code>), it means the  cell of the board is empty.</li>
<li>If  is an uppercase English alphabetic letter (ascii[A-Z]), it means the  cell contains a ladybug of color .</li>
<li>String  will not contain any other characters.</li></ul></li>
<li>A ladybug is <em>happy</em> only when its left or right adjacent cell (i.e., ) is occupied by another ladybug having the same color.</li>
<li>In a single move, you can move a ladybug from its current position to any empty cell. 
<br></li>
</ul>

<p>Given the values of  and  for  games of Happy Ladybugs, determine if it's possible to make all the ladybugs happy. For each game, return <code>YES</code> if all the ladybugs can be made happy through some number of moves.  Otherwise, return <code>NO</code>. <br>
<strong>Example</strong> <br>
    </p>

<p>You can move the rightmost  and  to make  and all the ladybugs are happy. Return <code>YES</code>.   </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>happyLadybugs</em> function in the editor below.   </p>

<p>happyLadybugs has the following parameters:</p>

<ul>
<li><em>string b:</em> the initial positions and colors of the ladybugs   </li>
</ul>

<p><strong>Returns</strong>   </p>

<ul>
<li><em>string:</em> either <code>YES</code> or <code>NO</code>   </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer , the number of games.  </p>

<p>The next  pairs of lines are in the following format:  </p>

<ul>
<li>The first line contains an integer , the number of cells on the board.  </li>
<li>The second line contains a string  that describes the  cells of the board.  </li>
</ul></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span>4</span>
<span>7</span>
<span>RBY_YBR</span>
<span>6</span>
<span>X_Y__X</span>
<span>2</span>
<span>__</span>
<span>6</span>
<span>B_RRBR</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>YES</span>
<span>NO</span>
<span>YES</span>
<span>YES</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The four games of Happy Ladybugs are explained below:</p>

<ol>
<li>Initial board: <br>
<img src="https://s3.amazonaws.com/hr-challenge-images/21763/1474897921-a3088b360d-lady.png" alt="lady.png" title=""> <br>
After the first move: <br>
<img src="https://s3.amazonaws.com/hr-challenge-images/21763/1474897973-d5796f2e22-lady1.png" alt="lady(1).png" title=""> <br>
After the second move: <br>
<img src="https://s3.amazonaws.com/hr-challenge-images/21763/1474898037-7fb2f25594-lady2.png" alt="lady(2).png" title=""> <br>
After the third move: <br>
<img src="https://s3.amazonaws.com/hr-challenge-images/21763/1474898044-9df051fcde-lady3.png" alt="lady(3).png" title=""> <br>
Now all the ladybugs are happy, so we print <code>YES</code> on a new line.</li>
<li>There is no way to make the ladybug having color <code>Y</code> happy, so we print <code>NO</code> on a new line.</li>
<li>There are no unhappy ladybugs, so we print <code>YES</code> on a new line.</li>
<li>Move the rightmost  and  to form .</li>
</ol></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>5</span>
<span>5</span>
<span>AABBC</span>
<span>7</span>
<span>AABBC_C</span>
<span>1</span>
<span>_</span>
<span>10</span>
<span>DD__FQ_QQF</span>
<span>6</span>
<span>AABCBC</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>NO</span>
<span>YES</span>
<span>YES</span>
<span>YES</span>
<span>NO</span>
</pre></div>
</div></div></div>
