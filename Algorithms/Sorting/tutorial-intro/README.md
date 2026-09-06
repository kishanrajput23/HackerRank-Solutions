## [Intro to Tutorial Challenges](https://www.hackerrank.com/challenges/tutorial-intro/problem)

**Domain:** Algorithms  
**Subdomain:** Sorting  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p><strong>About Tutorial Challenges</strong> <br>
Many of the challenges on HackerRank are difficult and assume that you already know the relevant algorithms. These tutorial challenges are different. They break down algorithmic concepts into smaller challenges so that you can learn the algorithm by solving them.  They are intended for those who already know some programming, however. You could be a student majoring in computer science, a self-taught programmer, or an experienced developer who wants an active algorithms review.  Here's a great place to learn by doing!</p>

<p>The first series of challenges covers sorting. They are listed below:</p>

<p><strong>Tutorial Challenges - Sorting</strong>  </p>

<p>Insertion Sort challenges</p>

<ul>
<li><a href="https://www.hackerrank.com/challenges/insertionsort1">Insertion Sort 1 - Inserting</a></li>
<li><a href="https://www.hackerrank.com/challenges/insertionsort2">Insertion Sort 2 - Sorting</a></li>
<li><a href="https://www.hackerrank.com/challenges/correctness-invariant">Correctness and loop invariant</a></li>
<li><a href="https://www.hackerrank.com/challenges/runningtime">Running Time of Algorithms</a></li>
</ul>

<p>Quicksort challenges</p>

<ul>
<li><a href="https://www.hackerrank.com/challenges/quicksort1">Quicksort 1 - Partition</a></li>
<li><a href="https://www.hackerrank.com/challenges/quicksort2">Quicksort 2 - Sorting</a></li>
<li><a href="https://www.hackerrank.com/challenges/quicksort3">Quicksort In-place (advanced)</a></li>
<li><a href="https://www.hackerrank.com/challenges/quicksort4">Running time of Quicksort</a></li>
</ul>

<p>Counting sort challenges</p>

<ul>
<li><a href="https://www.hackerrank.com/challenges/countingsort1">Counting Sort 1 - Counting</a></li>
<li><a href="https://www.hackerrank.com/challenges/countingsort2">Counting Sort 2 - Simple sort</a></li>
<li><a href="https://www.hackerrank.com/challenges/countingsort3">Counting Sort 3 - Preparing</a></li>
<li><a href="https://www.hackerrank.com/challenges/countingsort4">Full Counting Sort (advanced)</a></li>
</ul>

<p>There will also be some challenges where you'll get to apply what you've learned using the completed algorithms.</p>

<p><strong>About the Challenges</strong> <br>
Each challenge will describe a scenario and you will code a solution. As you progress through the challenges, you will learn some important concepts in algorithms. In each challenge, you will receive input on <a href="http://en.wikipedia.org/wiki/Standard_streams#Standard_input_.28stdin.29">STDIN</a> and you will need to print the correct output to STDOUT.  </p>

<p>There may be time limits that will force you to make your code efficient.  If you receive a "Terminated due to time out" message when you submit your solution, you'll need to reconsider your method.  If you want to test your code locally, each test case can be downloaded, inputs and expected results, using <em>hackos</em>.  You earn hackos as you solve challenges, and you can spend them on these tests.</p>

<p>For many challenges, helper methods (like an array) will be provided for you to process the input into a useful format. You can use these methods to get started with your program, or you can write your own input methods if you want. Your code just needs to print the right output to each test case. </p>

<p><strong>Sample Challenge</strong> <br>
This is a simple challenge to get things started. Given a sorted array () and a number (), can you print the index location of  in the array? </p>

<p><strong>Example</strong>  </p>

<p> <br>
   </p>

<p>Return  for a zero-based index array.  </p>

<p><em>If you are going to use the provided code for I/O, this next section is for you.</em></p>

<p><strong>Function Description</strong></p>

<p>Complete the <em>introTutorial</em> function in the editor below.  It must return an integer representing the zero-based index of .  </p>

<p>introTutorial has the following parameter(s):</p>

<ul>
<li><em>int arr[n]:</em> a sorted array of integers  </li>
<li><em>int V</em>: an integer to search for  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the index of  in   </li>
</ul>

<p><em>The next section describes the input format. You can often skip it, if you are using included methods or code stubs.</em></p>

<p><strong>Input Format</strong>  </p>

<p>The first line contains an integer, , a value to search for. <br>
The next line contains an integer, , the size of .
The last line contains  space-separated integers, each a value of  where .  </p>

<p><em>The next section describes the constraints and ranges of the input. You should check this section to know the range of the input.</em></p>

<p><strong>Constraints</strong>  </p>

<ul>
<li>   </li>
<li> </li>
<li> will occur in  exactly once.</li>
</ul>

<p><em>This "sample" shows the first input test case. It is often useful to go through the sample to understand a challenge.</em></p>

<p><strong>Sample Input 0</strong>  </p>

<pre><code>STDIN           Function
-----           --------
4               V = 4
6               arr[] size n = 6 (not passed, see function description parameters)
1 4 5 7 9 12    arr = [1, 4, 5, 7, 9, 12]
</code></pre>

<p><strong>Sample Output 0</strong></p>

<pre><code>1
</code></pre>

<p><strong>Explanation 0</strong> <br>
. The value  is the  element in the array.  Its index is  since the array indices start from  (see array definition under <em>Input Format</em>).</p></div></div></div>
