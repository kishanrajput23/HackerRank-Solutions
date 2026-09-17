## [Game of Thrones - I](https://www.hackerrank.com/challenges/game-of-thrones/problem)

**Domain:** Algorithms  
**Subdomain:** Strings  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this conspiracy from Raven and plans to lock the single door through which the enemy can enter his kingdom.</p>

<p><img src="https://s3.amazonaws.com/hr-assets/0/1526565753-0c557c119f-game-of-thrones.png" alt="door" title="block"></p>

<p>But, to lock the door he needs a key that is an <a href="https://en.wikipedia.org/wiki/Anagram">anagram</a> of a <a href="http://en.wikipedia.org/wiki/Palindrome">palindrome</a>.  He starts to go through his box of strings, checking to see if they can be rearranged into a palindrome.  Given a string, determine if it can be rearranged into a palindrome.  Return the string <code>YES</code> or <code>NO</code>.  </p>

<p><strong>Example</strong> <br>
  </p>

<p>One way this can be arranged into a palindrome is .  Return <code>YES</code>.</p>

<p><strong>Function Description</strong> <br>
Complete the <em>gameOfThrones</em> function below. </p>

<p>gameOfThrones has the following parameter(s):  </p>

<ul>
<li><em>string s</em>: a string to analyze   </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>string:</em>  either <code>YES</code> or <code>NO</code>   </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>A single line which contains .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li> |s|   </li>
<li> contains only lowercase letters in the range </li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>aaabbbb</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>YES</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>A palindromic permutation of the given string is <em>bbaaabb</em>.   </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>cdefghmnopqrstuvw</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>NO</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Palindromes longer than 1 character are made up of <em>pairs</em> of characters.  There are none here.  </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 2</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>cdcdcdcdeeeef</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 2</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>YES</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 2</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>An example palindrome from the string:  <em>ddcceefeeccdd</em>.</p></div></div></div>
