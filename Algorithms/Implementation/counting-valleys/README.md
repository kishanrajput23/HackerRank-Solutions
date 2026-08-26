## [Counting Valleys](https://www.hackerrank.com/challenges/counting-valleys/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly  steps, for every step it was noted if it was an <em>uphill</em>, , or a <em>downhill</em>,  step. Hikes always start and end at sea level, and each step up or down represents a  unit change in altitude. We define the following terms:</p>

<ul>
<li>A <em>mountain</em> is a sequence of consecutive steps <em>above</em> sea level, starting with a step <em>up</em> from sea level and ending with a step <em>down</em> to sea level.  </li>
<li>A <em>valley</em> is a sequence of consecutive steps <em>below</em> sea level, starting with a step <em>down</em> from sea level and ending with a step <em>up</em> to sea level.</li>
</ul>

<p>Given the sequence of <em>up</em> and <em>down</em> steps during a hike, find and print the number of <em>valleys</em> walked through. </p>

<p><strong>Example</strong>  </p>

<p>
  </p>

<p>The hiker first enters a valley  units deep.  Then they climb out and up onto a mountain  units high.  Finally, the hiker returns to sea level and ends the hike.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>countingValleys</em> function in the editor below.  </p>

<p>countingValleys has the following parameter(s):  </p>

<ul>
<li><em>int steps</em>: the number of steps on the hike  </li>
<li><em>string path</em>: a string describing the path  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em>  the number of valleys traversed </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer , the number of steps in the hike. <br>
The second line contains a single string , of  characters that describe the path.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>8
UDDDUDUU
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>1
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>If we represent <code>_</code> as sea level, a step up as <code>/</code>, and a step down as <code>\</code>, the hike can be drawn as:</p>

<pre><code>_/\      _
   \    /
    \/\/
</code></pre>

<p>The hiker enters and leaves one valley.</p></div></div></div>
