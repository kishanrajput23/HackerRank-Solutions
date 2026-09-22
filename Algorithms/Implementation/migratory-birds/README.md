## [Migratory Birds](https://www.hackerrank.com/challenges/migratory-birds/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type.  If more than 1 type has been spotted that maximum amount, return the smallest of their ids.</p>

<p><strong>Example</strong> <br>
   </p>

<p>There are two each of types  and , and one sighting of type .  Pick the lower of the two types seen twice: type .  </p>

<p><strong>Function Description</strong></p>

<p>Complete the <em>migratoryBirds</em> function in the editor below.    </p>

<p>migratoryBirds has the following parameter(s):  </p>

<ul>
<li><em>int arr[n]</em>: the types of birds sighted   </li>
</ul>

<p><strong>Returns</strong>   </p>

<ul>
<li><em>int:</em> the lowest type id of the most frequently sighted birds   </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer, , the size of . <br>
The second line describes  as  space-separated integers, each a type number of the bird sighted.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li>It is guaranteed that each type is , , , , or .</li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>6</span>
<span>1 4 4 4 5 3</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>4</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The different types of birds occur in the following frequencies:</p>

<ul>
<li>Type :  bird</li>
<li>Type :  birds</li>
<li>Type :  bird</li>
<li>Type :  birds</li>
<li>Type :  bird</li>
</ul>

<p>The type number that occurs at the highest frequency is type , so we print  as our answer.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>11</span>
<span>1 2 3 4 5 4 3 2 1 3 4</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>3</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The different types of birds occur in the following frequencies:  </p>

<ul>
<li>Type :   </li>
<li>Type :   </li>
<li>Type :   </li>
<li>Type :   </li>
<li>Type :   </li>
</ul>

<p>Two types have a frequency of , and the lower of those is type .</p></div></div></div>
