## [Arrays Introduction](https://www.hackerrank.com/challenges/arrays-introduction/problem)

**Domain:** C++  
**Subdomain:** Introduction  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.</p>

<p>For arrays of a known size,  in this case, use the following declaration:</p>

<pre><code>int arr[10]; //Declares an array named arr of size 10, i.e, you can 
store 10 integers.
</code></pre>

<p><strong>Note</strong>  Unlike C, C++ allows dynamic allocation of arrays at runtime without special calls like malloc().  If , <code>int arr[n]</code> will create an array with space for  integers.  </p>

<p>Accessing elements of an array:</p>

<pre><code>Indexing in arrays starts from 0.So the first element is stored at 
arr[0],the second element at arr[1] and so on through arr[9].
</code></pre>

<p>You will be given an array of  integers and you have to print the integers in the reverse order.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.</p>

<p><strong>Constraints</strong></p>

<p></p>

<p>, where  is the  integer in the array.</p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Print the  integers of the array in the reverse order, space-separated on a single line.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>4
1 4 3 2
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>2 3 4 1
</code></pre></div></div></div>
