## [Sort Command #5](https://www.hackerrank.com/challenges/text-processing-sort-5/problem)

**Domain:** Linux Shell  
**Subdomain:** Text Processing  
**Difficulty:** Easy  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>You are given a file of text,which contains temperature information about American cities, in TSV (tab-separated) format. The first column  is the name of the city and the next four columns are the average temperature in the months of Jan, Feb, March and April (see the sample input). Rearrange the rows of the table in <strong>descending order</strong> of the values for the average temperature in January.   </p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>A text file where each line contains a row of data as described above. </p></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>Rearrange the rows of the table in <strong>descending order</strong> of the values for the average temperature in January (i.e, the mean temperature value provided in the second column).   </p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>Albany, N.Y.    22.2    46.6    71.1    49.3    38.60    136    64.4    57</span>
<span>Albuquerque, N.M.    35.7    55.6    78.5    57.3    9.47    60    11.0    64</span>
<span>Anchorage, Alaska    15.8    36.3    58.4    34.1    16.08    115    70.8    39 / 60</span>
<span>Asheville, N.C.    35.8    54.1    73.0    55.2    47.07    126    15.3    39</span>
<span>Atlanta, Ga.    42.7    61.6    80.0    62.8    50.20    115    2.1    69 / 65</span>
<span>Atlantic City, N.J.    32.1    50.6    75.3    55.1    40.59    113    16.2    60 / 54</span>
<span>Austin, Texas    50.2    68.3    84.2    70.6    33.65    85    0.9    62 / 58</span>
<span>Baltimore, Md.    32.3    53.2    76.5    55.4    41.94    115    21.5    53</span>
<span>Baton Rouge, La.    50.1    66.6    81.7    68.1    63.08    110    0.2    52 / 46</span>
<span>Billings, Mont.    24.0    46.1    72.0    48.1    14.77    96    56.9    69</span>
<span>Birmingham, Ala.    42.6    61.3    80.2    62.9    53.99    117    1.5    60</span>
<span>Bismarck, N.D.    10.2    43.3    70.4    45.2    16.84    96    44.3    64</span>
<span>Boise, Idaho    30.2    50.6    74.7    52.8    12.19    89    20.6    64</span>
<span>Boston, Mass.    29.3    48.3    73.9    54.1    42.53    127    42.8    52 / 66</span>
<span>Bridgeport, Conn.    29.9    48.9    74.0    54.7    44.15    119    26.2    55 / 49</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>Austin, Texas    50.2    68.3    84.2    70.6    33.65    85    0.9    62 / 58</span>
<span>Baton Rouge, La.    50.1    66.6    81.7    68.1    63.08    110    0.2    52 / 46</span>
<span>Atlanta, Ga.    42.7    61.6    80.0    62.8    50.20    115    2.1    69 / 65</span>
<span>Birmingham, Ala.    42.6    61.3    80.2    62.9    53.99    117    1.5    60</span>
<span>Asheville, N.C.    35.8    54.1    73.0    55.2    47.07    126    15.3    39</span>
<span>Albuquerque, N.M.    35.7    55.6    78.5    57.3    9.47    60    11.0    64</span>
<span>Baltimore, Md.    32.3    53.2    76.5    55.4    41.94    115    21.5    53</span>
<span>Atlantic City, N.J.    32.1    50.6    75.3    55.1    40.59    113    16.2    60 / 54</span>
<span>Boise, Idaho    30.2    50.6    74.7    52.8    12.19    89    20.6    64</span>
<span>Bridgeport, Conn.    29.9    48.9    74.0    54.7    44.15    119    26.2    55 / 49</span>
<span>Boston, Mass.    29.3    48.3    73.9    54.1    42.53    127    42.8    52 / 66</span>
<span>Billings, Mont.    24.0    46.1    72.0    48.1    14.77    96    56.9    69</span>
<span>Albany, N.Y.    22.2    46.6    71.1    49.3    38.60    136    64.4    57</span>
<span>Anchorage, Alaska    15.8    36.3    58.4    34.1    16.08    115    70.8    39 / 60</span>
<span>Bismarck, N.D.    10.2    43.3    70.4    45.2    16.84    96    44.3    64</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>The data has been sorted in descending order of the average monthly temperature in January (i.e, the second column).  </p></div></div></div>
