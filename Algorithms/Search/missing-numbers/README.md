## [Missing Numbers](https://www.hackerrank.com/challenges/missing-numbers/problem)

**Domain:** Algorithms  
**Subdomain:** Search  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Given two arrays of integers, find which elements in the second array are missing from the first array.</p>

<p><strong>Example</strong> <br>
 <br>
</p>

<p>The  array is the orginal list.  The numbers missing are .  </p>

<p><strong>Notes</strong>  </p>

<ul>
<li>If a number occurs multiple times in the lists, you must ensure that the frequency of that number in both lists is the same. If that is not the case, then it is also a missing number. </li>
<li>Return the missing numbers sorted ascending. </li>
<li>Only include a missing number once, even if it is missing multiple times. </li>
<li>The difference between the maximum and minimum numbers in the original list is less than or equal to .  </li>
</ul>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>missingNumbers</em> function in the editor below.  It should return a sorted array of missing numbers.  </p>

<p>missingNumbers has the following parameter(s):</p>

<ul>
<li><em>int arr[n]:</em> the array with missing numbers   </li>
<li><em>int brr[m]:</em> the original array of numbers   </li>
</ul>

<p><strong>Returns</strong>   </p>

<ul>
<li><em>int[]:</em> an array of integers   </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>There will be four lines of input:  </p>

<p> - the size of the first list,  <br>
 The next line contains  space-separated integers  <br>
  - the size of the second list,  <br>
 The next line contains  space-separated integers   </p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li></li>
<li>  </li>
<li></li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre>10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204
</pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre>204 205 206
</pre></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p> is present in both arrays. Its frequency in  is , while its frequency in  is . Similarly,  and  occur twice in , but three times in . The rest of the numbers have the same frequencies in both lists.</p></div></div></div>
