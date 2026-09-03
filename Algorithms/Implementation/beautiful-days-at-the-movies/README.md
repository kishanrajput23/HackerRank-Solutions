## [Beautiful Days at the Movies](https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Lily likes to play games with integers.  She has created a new game where she determines the difference between a number and its reverse.  For instance, given the number , its reverse is .  Their difference is .  The number  reversed is , and their difference is .</p>

<p>She decides to apply her game to decision making.  She will look at a numbered range of days and will only go to a movie on a <em>beautiful day</em>.</p>

<p>Given a range of numbered days,  and a number , determine the number of days in the range that are <em>beautiful</em>.  Beautiful numbers are defined as numbers where  is evenly divisible by .  If a day's value is a beautiful number, it is a beautiful day.  Return the number of beautiful days in the range.</p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>beautifulDays</em> function in the editor below.   </p>

<p>beautifulDays has the following parameter(s):  </p>

<ul>
<li><em>int i:</em> the starting day number  </li>
<li><em>int j:</em> the ending day number  </li>
<li><em>int k:</em> the divisor  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the number of beautiful days in the range  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>A single line of three space-separated integers describing the respective values of , , and .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>20 23 6
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>2
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Lily may go to the movies on days , , , and . We perform the following calculations to determine which days are <em>beautiful</em>:</p>

<ul>
<li>Day  is <em>beautiful</em> because the following evaluates to a whole number: </li>
<li>Day  is <em>not beautiful</em> because the following doesn't evaluate to a whole number: </li>
<li>Day  is <em>beautiful</em> because the following evaluates to a whole number: </li>
<li>Day  is <em>not beautiful</em> because the following doesn't evaluate to a whole number: </li>
</ul>

<p>Only two days,  and , in this interval are beautiful. Thus, we print  as our answer.</p></div></div></div>
