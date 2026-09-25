## [Attribute Parser](https://www.hackerrank.com/challenges/attribute-parser/problem)

**Domain:** C++  
**Subdomain:** Strings  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>This challenge works with a custom-designed markup language <em>HRML</em>. In <em>HRML</em>, each element consists of a starting and ending tag, and there are attributes associated with each tag. Only starting tags can have attributes. We can call an attribute by referencing the tag, followed by a tilde, '<code>~</code>' and the name of the attribute. The tags may also be nested.    </p>

<p>The <em>opening tags</em> follow the format: </p>

<p><code>&lt;tag-name attribute1-name = "value1" attribute2-name = "value2" ...&gt;</code></p>

<p>The <em>closing tags</em> follow the format:</p>

<p><code>&lt;/tag-name&gt;</code>  </p>

<p>The attributes are referenced as:</p>

<pre><code>tag1~value  
tag1.tag2~name
</code></pre>

<p>Given the source code in HRML format consisting of  lines, answer  queries. For each query, print the value of the attribute specified. Print <em>"Not Found!"</em> if the attribute does not exist.  </p>

<p><strong>Example</strong>     </p>

<div><pre><span></span>HRML listing
&lt;tag1 value = "value"&gt;
&lt;tag2 name = "name"&gt;
&lt;tag3 another="another" final="final"&gt;
&lt;/tag3&gt;
&lt;/tag2&gt;
&lt;/tag1&gt;

Queries
tag1~value
tag1.tag2.tag3~name
tag1.tag2~value
</pre></div>


<p>Here, tag2 is nested within tag1, so attributes of tag2 are accessed as <code>tag1.tag2~&lt;attribute&gt;</code>.  Results of the queries are:</p>

<div><pre><span></span>Query                 Value
tag1~value            "value"
tag1.tag2.tag3~name   "Not Found!"
tag1.tag2.tag3~final  "final"
</pre></div>
</div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line consists of two space separated integers,  and .  specifies the number of lines in the HRML source program.  specifies the number of queries.</p>

<p>The following  lines consist of either an opening tag with zero or more attributes or a closing tag.  There is a space after the tag-name, attribute-name, '=' and value.There is no space after the last value. <em>If there are no attributes there is no space after tag name.</em>  </p>

<p> queries follow. Each query consists of string that references an attribute in the source program.More formally, each query is of the form  ~ where  and  are valid tags in the input.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>  </li>
<li>  </li>
<li>Each line in the source program contains, at most,  characters.  </li>
<li>Every reference to the attributes in the  queries contains at most  characters.  </li>
<li>All tag names are unique and the HRML source program is logically correct, i.e. valid nesting.</li>
<li>A tag can may have no attributes.</li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Print the value of the attribute for each query. Print "<em>Not Found!</em>" without quotes if the attribute does not exist.   </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><pre><code>4 3
&lt;tag1 value = "HelloWorld"&gt;
&lt;tag2 name = "Name1"&gt;
&lt;/tag2&gt;
&lt;/tag1&gt;
tag1.tag2~name
tag1~name
tag1~value
</code></pre></div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><pre><code>Name1
Not Found!
HelloWorld
</code></pre></div></div></div>
