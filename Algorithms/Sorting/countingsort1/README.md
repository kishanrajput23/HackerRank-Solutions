## [Counting Sort 1](https://www.hackerrank.com/challenges/countingsort1/problem)

**Domain:** Algorithms  
**Subdomain:** Sorting  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p><strong>Comparison Sorting</strong> <br>
Quicksort usually has a running time of , but is there an algorithm that can sort even faster? In general, this is not possible. Most sorting algorithms are <em>comparison sorts</em>, i.e. they sort a list just by comparing the elements to one another. A comparison sort algorithm cannot beat  (worst-case) running time, since  represents the minimum number of comparisons needed to know where to place each element. For more details, you can see <a href="http://www.cs.cmu.edu/~avrim/451f11/lectures/lect0913.pdf">these notes</a> (PDF). </p>

<p><strong>Alternative Sorting</strong> <br>
Another sorting method, the <em>counting sort</em>, does not require comparison.  Instead, you create an integer array whose index range covers the entire range of values in your array to sort.  Each time a value occurs in the original array, you increment the counter at that index.  At the end, run through your counting array, printing the value of each non-zero valued index that number of times.</p>

<p><strong>Example</strong> <br>
    </p>

<p>All of the values are in the range , so create an array of zeros, .  The results of each iteration follow:</p>

<div><pre><span></span><span>i</span>	<span>arr</span><span>[</span><span>i</span><span>]</span>	<span>result</span>
<span>0</span>	<span>1</span>	<span>[</span><span>0</span><span>,</span> <span>1</span><span>,</span> <span>0</span><span>,</span> <span>0</span><span>]</span>
<span>1</span>	<span>1</span>	<span>[</span><span>0</span><span>,</span> <span>2</span><span>,</span> <span>0</span><span>,</span> <span>0</span><span>]</span>
<span>2</span>	<span>3</span>	<span>[</span><span>0</span><span>,</span> <span>2</span><span>,</span> <span>0</span><span>,</span> <span>1</span><span>]</span>
<span>3</span>	<span>2</span>	<span>[</span><span>0</span><span>,</span> <span>2</span><span>,</span> <span>1</span><span>,</span> <span>1</span><span>]</span>
<span>4</span>	<span>1</span>	<span>[</span><span>0</span><span>,</span> <span>3</span><span>,</span> <span>1</span><span>,</span> <span>1</span><span>]</span>
</pre></div>


<p>The frequency array is . These values can be used to create the sorted array as well: .</p>

<p><strong>Note</strong> <br>
For this exercise, always return a frequency array with 100 elements.  The example above shows only the first 4 elements, the remainder being zeros.  </p>

<p><strong>Challenge</strong> <br>
Given a list of integers, count and return the number of times each value appears as an array of integers.</p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>countingSort</em> function in the editor below.  </p>

<p>countingSort has the following parameter(s):  </p>

<ul>
<li><em>arr[n]:</em> an array of integers  </li>
</ul>

<p><strong>Returns</strong>   </p>

<ul>
<li><em>int[100]:</em> a frequency array</li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer , the number of items in . <br>
Each of the next  lines contains an integer  where .  </p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p><sup></sup> <br>
 </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>100</span>
<span>63</span> <span>25</span> <span>73</span> <span>1</span> <span>98</span> <span>73</span> <span>56</span> <span>84</span> <span>86</span> <span>57</span> <span>16</span> <span>83</span> <span>8</span> <span>25</span> <span>81</span> <span>56</span> <span>9</span> <span>53</span> <span>98</span> <span>67</span> <span>99</span> <span>12</span> <span>83</span> <span>89</span> <span>80</span> <span>91</span> <span>39</span> <span>86</span> <span>76</span> <span>85</span> <span>74</span> <span>39</span> <span>25</span> <span>90</span> <span>59</span> <span>10</span> <span>94</span> <span>32</span> <span>44</span> <span>3</span> <span>89</span> <span>30</span> <span>27</span> <span>79</span> <span>46</span> <span>96</span> <span>27</span> <span>32</span> <span>18</span> <span>21</span> <span>92</span> <span>69</span> <span>81</span> <span>40</span> <span>40</span> <span>34</span> <span>68</span> <span>78</span> <span>24</span> <span>87</span> <span>42</span> <span>69</span> <span>23</span> <span>41</span> <span>78</span> <span>22</span> <span>6</span> <span>90</span> <span>99</span> <span>89</span> <span>50</span> <span>30</span> <span>20</span> <span>1</span> <span>43</span> <span>3</span> <span>70</span> <span>95</span> <span>33</span> <span>46</span> <span>44</span> <span>9</span> <span>69</span> <span>48</span> <span>33</span> <span>60</span> <span>65</span> <span>16</span> <span>82</span> <span>67</span> <span>61</span> <span>32</span> <span>21</span> <span>79</span> <span>75</span> <span>75</span> <span>13</span> <span>87</span> <span>70</span> <span>33</span>  
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>0</span> <span>2</span> <span>0</span> <span>2</span> <span>0</span> <span>0</span> <span>1</span> <span>0</span> <span>1</span> <span>2</span> <span>1</span> <span>0</span> <span>1</span> <span>1</span> <span>0</span> <span>0</span> <span>2</span> <span>0</span> <span>1</span> <span>0</span> <span>1</span> <span>2</span> <span>1</span> <span>1</span> <span>1</span> <span>3</span> <span>0</span> <span>2</span> <span>0</span> <span>0</span> <span>2</span> <span>0</span> <span>3</span> <span>3</span> <span>1</span> <span>0</span> <span>0</span> <span>0</span> <span>0</span> <span>2</span> <span>2</span> <span>1</span> <span>1</span> <span>1</span> <span>2</span> <span>0</span> <span>2</span> <span>0</span> <span>1</span> <span>0</span> <span>1</span> <span>0</span> <span>0</span> <span>1</span> <span>0</span> <span>0</span> <span>2</span> <span>1</span> <span>0</span> <span>1</span> <span>1</span> <span>1</span> <span>0</span> <span>1</span> <span>0</span> <span>1</span> <span>0</span> <span>2</span> <span>1</span> <span>3</span> <span>2</span> <span>0</span> <span>0</span> <span>2</span> <span>1</span> <span>2</span> <span>1</span> <span>0</span> <span>2</span> <span>2</span> <span>1</span> <span>2</span> <span>1</span> <span>2</span> <span>1</span> <span>1</span> <span>2</span> <span>2</span> <span>0</span> <span>3</span> <span>2</span> <span>1</span> <span>1</span> <span>0</span> <span>1</span> <span>1</span> <span>1</span> <span>0</span> <span>2</span> <span>2</span> 
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Each of the resulting values  represents the number of times  appeared in .</p></div></div></div>
