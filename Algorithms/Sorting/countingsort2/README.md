## [Counting Sort 2](https://www.hackerrank.com/challenges/countingsort2/problem)

**Domain:** Algorithms  
**Subdomain:** Sorting  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>Often, when a list is sorted, the elements being sorted are just keys to other values. For example, if you are sorting files by their size, the sizes need to stay connected to their respective files. You cannot just take the size numbers and output them in order, you need to output all the required file information.</p>

<p>The <em>counting sort</em> is used if you just need to sort a list of integers.  Rather than using a comparison, you create an integer array whose index range covers the entire range of values in your array to sort.  Each time a value occurs in the original array, you increment the counter at that index.  At the end, run through your counting array, printing the value of each non-zero valued index that number of times.</p>

<p>For example, consider an array .  All of the values are in the range , so create an array of zeroes, .  The results of each iteration follow:</p>

<div><pre><span></span><span>i</span>	<span>arr</span><span>[</span><span>i</span><span>]</span>	<span>result</span>
<span>0</span>	<span>1</span>	<span>[</span><span>0</span><span>,</span> <span>1</span><span>,</span> <span>0</span><span>,</span> <span>0</span><span>]</span>
<span>1</span>	<span>1</span>	<span>[</span><span>0</span><span>,</span> <span>2</span><span>,</span> <span>0</span><span>,</span> <span>0</span><span>]</span>
<span>2</span>	<span>3</span>	<span>[</span><span>0</span><span>,</span> <span>2</span><span>,</span> <span>0</span><span>,</span> <span>1</span><span>]</span>
<span>3</span>	<span>2</span>	<span>[</span><span>0</span><span>,</span> <span>2</span><span>,</span> <span>1</span><span>,</span> <span>1</span><span>]</span>
<span>4</span>	<span>1</span>	<span>[</span><span>0</span><span>,</span> <span>3</span><span>,</span> <span>1</span><span>,</span> <span>1</span><span>]</span>
</pre></div>


<p>Now we can print the sorted array: .</p>

<p><strong>Challenge</strong> <br>
Given an unsorted list of integers, use the counting sort method to sort the list and then print the sorted list. </p>

<p><em>Hint:</em> You can use your previous code that counted the items to print out the actual values in order.  </p>

<p><strong>Function Description</strong>  </p>

<p>Complete the <em>countingSort</em> function in the editor below.  It should return the original array, sorted ascending, as an array of integers.  </p>

<p>countingSort has the following parameter(s):  </p>

<ul>
<li><em>arr</em>: an array of integers  </li>
</ul></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The first line contains an integer , the length of .
The next line contains space-separated integers  where .</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><p> <br>
 </p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Print the sorted list as a single line of space-separated integers. </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>100</span>
<span>63</span> <span>25</span> <span>73</span> <span>1</span> <span>98</span> <span>73</span> <span>56</span> <span>84</span> <span>86</span> <span>57</span> <span>16</span> <span>83</span> <span>8</span> <span>25</span> <span>81</span> <span>56</span> <span>9</span> <span>53</span> <span>98</span> <span>67</span> <span>99</span> <span>12</span> <span>83</span> <span>89</span> <span>80</span> <span>91</span> <span>39</span> <span>86</span> <span>76</span> <span>85</span> <span>74</span> <span>39</span> <span>25</span> <span>90</span> <span>59</span> <span>10</span> <span>94</span> <span>32</span> <span>44</span> <span>3</span> <span>89</span> <span>30</span> <span>27</span> <span>79</span> <span>46</span> <span>96</span> <span>27</span> <span>32</span> <span>18</span> <span>21</span> <span>92</span> <span>69</span> <span>81</span> <span>40</span> <span>40</span> <span>34</span> <span>68</span> <span>78</span> <span>24</span> <span>87</span> <span>42</span> <span>69</span> <span>23</span> <span>41</span> <span>78</span> <span>22</span> <span>6</span> <span>90</span> <span>99</span> <span>89</span> <span>50</span> <span>30</span> <span>20</span> <span>1</span> <span>43</span> <span>3</span> <span>70</span> <span>95</span> <span>33</span> <span>46</span> <span>44</span> <span>9</span> <span>69</span> <span>48</span> <span>33</span> <span>60</span> <span>65</span> <span>16</span> <span>82</span> <span>67</span> <span>61</span> <span>32</span> <span>21</span> <span>79</span> <span>75</span> <span>75</span> <span>13</span> <span>87</span> <span>70</span> <span>33</span> 
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><p><code>
 1 1 3 3 6 8 9 9 10 12 13 16 16 18 20 21 21 22 23 24 25 25 25 27 27 30 30 32 32 32 33 33 33 34 39 39 40 40 41 42 43 44 44 46 46 48 50 53 56 56 57 59 60 61 63 65 67 67 68 69 69 69 70 70 73 73 74 75 75 76 78 78 79 79 80 81 81 82 83 83 84 85 86 86 87 87 89 89 89 90 90 91 92 94 95 96 98 98 99 99 
</code></p></div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>Once our counting array has been filled, loop from index  to the end, printing each  value  times.</p></div></div></div>
