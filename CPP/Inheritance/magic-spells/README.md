## [Magic Spells](https://www.hackerrank.com/challenges/magic-spells/problem)

**Domain:** C++  
**Subdomain:** Inheritance  
**Difficulty:** Hard  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>While playing a video game, you are battling a powerful dark wizard. He casts his spells from a distance, giving you only a few seconds to react and conjure your counterspells. For a counterspell to be effective, you must first identify what kind of spell you are dealing with.</p>

<p>The wizard uses scrolls to conjure his spells, and sometimes he uses some of his generic spells that restore his stamina. In that case, you will be able to extract the name of the scroll from the spell. Then you need to find out how similar this new spell is to the spell formulas written in your spell journal.</p>

<p>Spend some time reviewing the locked code in your editor, and complete the body of the <em>counterspell</em> function.</p>

<p>Check <a href="http://en.cppreference.com/w/cpp/language/dynamic_cast">Dynamic cast</a> to get an idea of how to solve this challenge.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The wizard will read  scrolls, which are hidden from you. <br>
Every time he casts a spell, it's passed as an argument to your <em>counterspell</em> function.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>, where  is a scroll name.</li>
<li>Each scroll name, , consists of uppercase and lowercase letters.</li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>After identifying the given spell, print its name and power. <br>
If it is a generic spell, find a subsequence of letters that are contained in both the spell name and your spell journal. 
Among all such subsequences, find and print the length of the longest one on a new line.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>3
fire 5
AquaVitae 999 AruTaVae
frost 7
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>Fireball: 5
6
Frostbite: 7
</code></pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p><em>Fireball</em> and <em>Frostbite</em> are common spell types. <br>
<em>AquaVitae</em> is not, and when you compare it with <em>AruTaVae</em> in your spell journal, you get a sequence: <em>AuaVae</em></p></div></div></div>
