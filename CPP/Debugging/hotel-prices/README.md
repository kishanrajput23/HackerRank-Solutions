## [Hotel Prices](https://www.hackerrank.com/challenges/hotel-prices/problem)

**Domain:** C++  
**Subdomain:** Debugging  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>In this challenge, the task is to debug the existing code to successfully execute all provided test files.</p>

<hr>

<p>The given code defines two classes <code>HotelRoom</code> and <code>HotelApartment</code> denoting respectively a standard hotel room and a hotel apartment. An instance of any of these classes has two parameters: <code>bedrooms</code> and <code>bathrooms</code> denoting respectively the number of bedrooms and the number of bathrooms in the room.</p>

<p>The prices of a standard hotel room and hotel apartment are given as: </p>

<ul>
<li>Hotel Room:  + .</li>
<li>Hotel Apartment: The price of a standard room with the same number bedrooms and bathrooms plus . </li>
</ul>

<p>For example, if a standard room costs , then an apartment with the same number of bedrooms and bathrooms costs .</p>

<p>In hotel's codebase, there is a piece of code reading the list of rooms booked for today and calculates the total profit for the hotel. However, sometimes calculated profits are lower than they should be.</p>

<p>Debug the existing <code>HotelRoom</code> and <code>HotelApartment</code> classes' implementations so that the existing code computing the total profit returns a correct profit.</p>

<p>Your function will be tested against several cases by the locked template code.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The input is read by the provided locked code template. <br>
In the first line, there is a single integer  denoting the number of rooms booked for today. <br>
After that  lines follow. Each of these lines begins with a <code>room_type</code> which is either <code>standard</code> or <code>apartment</code>, and is followed by the number of bedrooms and the number of bathrooms in this room.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li></li>
<li>There is at least  and at most  bedrooms in a room</li>
<li>There is at least  and at most  bathrooms in a room</li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>The output is produced by the provided and locked code template. It calculates the total profit by iterating through the vector of all rooms read from the input.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>2</span>
<span>standard 3 1</span>
<span>apartment 1 1</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>500</span>
</pre></div>
</div></div></div><div class='challenge_explanation'><div class='msB challenge_explanation_title'><p><strong>Explanation 0</strong></p></div><div class='msB challenge_explanation_body'><div class='hackdown-content'><p>In the sample we have one standard room with  bedrooms and  bathroom, and one apartment with one  bedrooms and  bathroom. The price for the room is . The price for the apartment is . Thus the hotel profit is  as the sum of prices of both rooms.</p></div></div></div>
