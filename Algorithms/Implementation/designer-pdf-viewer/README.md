## [Designer PDF Viewer](https://www.hackerrank.com/challenges/designer-pdf-viewer/problem)

**Domain:** Algorithms  
**Subdomain:** Implementation  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently. For example: </p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/22869/1471640108-6c01750b16-PDF-highighting.png" alt="PDF-highighting.png" title=""></p>

<p>There is a list of  character heights aligned by index to their letters.  For example, 'a' is at index  and 'z' is at index .  There will also be a string.  Using the letter heights given, determine the area of the rectangle highlight in  assuming all letters are  wide.  </p>

<p><strong>Example</strong> <br>

</p>

<p>The heights are  and .  The tallest letter is  high and there are  letters.  The hightlighted area will be  so the answer is .  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>designerPdfViewer</em> function in the editor below.  </p>

<p>designerPdfViewer has the following parameter(s):</p>

<ul>
<li><em>int h[26]</em>: the heights of each letter  </li>
<li><em>string word</em>: a string  </li>
</ul>

<p><strong>Returns</strong>  </p>

<ul>
<li><em>int:</em> the size of the highlighted area  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains  space-separated integers describing the respective heights of each consecutive lowercase English letter, ascii[a-z]. <br>
The second line contains a single word consisting of lowercase English alphabetic letters.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>, where  is an English lowercase letter.</li>
<li> contains no more than  letters.   </li>
</ul></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5</span>
<span>abc</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>9</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>We are highlighting the word <code>abc</code>:</p>

<p>Letter heights are ,  and . The tallest letter, <code>b</code>, is  high. The selection area for this word is .</p>

<p><strong>Note:</strong> Recall that the width of each character is .</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 1</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 7</span>
<span>zaba</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 1</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span>28</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 1</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The tallest letter in  is  at . The selection area for this word is .</p></div></div></div>
