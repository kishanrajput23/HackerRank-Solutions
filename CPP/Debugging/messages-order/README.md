## [Messages Order](https://www.hackerrank.com/challenges/messages-order/problem)

**Domain:** C++  
**Subdomain:** Debugging  
**Difficulty:** Medium  

**Problem Description:**

<div class='challenge_problem_statement'><div class='msB challenge_problem_statement_body'><div class='hackdown-content'><p>In real life applications and systems, a common component is a messaging system. Thea idea is that a sender sends messages to the recipient. The messages might be sent for example over the network. However, some network protocols don't guarantee to preserve the order of sent messages while they are received by the recipient. For example, if someone sends a text messages <code>hello</code>, <code>hi</code> and <code>what's up</code>, they might be received in the order <code>what's up</code>, <code>hello</code>, <code>hi</code>. In many systems the expected behavior is to preserve the order, so the order of sent messages is the same as the order of received messages. </p>

<p>In this problem, the task is to implement a software layer over the top of a network protocol sending messages in arbitrary order, in such a way that the sent messages are printed by the recipient in the order they were sent.</p>

<p>In the template code below, there are implementations of classes <code>Recipient</code> and <code>Network</code>.</p>

<p>Your task is to implement classes <code>Message</code> and <code>MessageFactory</code> according to the below specification:</p>

<p>Class <code>Message</code> is required to store a text value of type <code>std::string</code> and provide a public getter <code>const string&amp; get_text()</code> which is expected to return this text value. Besides that, it should implement the <code>&lt;</code> operator that will be used in <code>fix_order()</code> method of the recipient to fix the order of received messages. Feel free to implement any other methods and class/instance variables. In particular, you can implement any additional constructors, but make sure that you provide an empty constructor, i.e. the one without arguments.</p>

<p>Class <code>MessageFactory</code> is required to have an empty constructor, and implement a method <code>Message create_message(const string&amp; text)</code> that is expected to return a <code>Message</code> object storing the value of <code>text</code> argument. Feel free to implement any other methods and class/instance variables of this class.</p>

<p>The locked code template will act as follows. First, it creates objects <code>message_factory</code> and <code>recipient</code>. These objects are of types <code>MessageFactory</code> and <code>Recipient</code> respectively. Then, it reads messages from the standard input, and then it will use the provided <code>Network</code> class to simulate sending the messages to the <code>recipient</code>. The <code>Network</code> class randomly shuffles the passes messages and then it passes them to the <code>recipient</code> using <code>recipient.receive(const Message&amp;)</code> method. After all messages are delivered, the recipient uses its own method <code>print_messages</code> to print all the received messages to the standard output, and just before doing that, it uses its own <code>fix_order</code> method to fix the order of retrieved messages. For that purpose, it uses <code>std::sort()</code> algorithm to sort the <code>std::vector</code> of received messages and this is the reason your <code>Message</code> class implementation has to provide the <code>&lt;</code> operator.</p></div></div></div><div class='challenge_input_format'><div class='msB challenge_input_format_title'><p><strong>Input Format</strong></p></div><div class='msB challenge_input_format_body'><div class='hackdown-content'><p>The input is read by the provided locked code template. It contains several lines of text messages in the order that they will be sent over the network.</p></div></div></div><div class='challenge_constraints'><div class='msB challenge_constraints_title'><p><strong>Constraints</strong></p></div><div class='msB challenge_constraints_body'><div class='hackdown-content'><ul>
<li>There will be at most  lines in the input.</li>
<li>Each line will contain at most  characters</li>
</ul></div></div></div><div class='challenge_output_format'><div class='msB challenge_output_format_title'><p><strong>Output Format</strong></p></div><div class='msB challenge_output_format_body'><div class='hackdown-content'><p>The output should be produced by the provided locked code template and it is produced as described in details in the statement. The expected order of printed messages is the same as the one in the input.</p></div></div></div><div class='challenge_sample_input'><div class='msB challenge_sample_input_title'><p><strong>Sample Input 0</strong></p></div><div class='msB challenge_sample_input_body'><div class='hackdown-content'><div><pre><span></span><span>Alex</span>
<span>Hello Monique!</span>
<span>What'up?</span>
<span>Not much :(</span>
</pre></div>
</div></div></div><div class='challenge_sample_output'><div class='msB challenge_sample_output_title'><p><strong>Sample Output 0</strong></p></div><div class='msB challenge_sample_output_body'><div class='hackdown-content'><div><pre><span></span><span>Alex</span>
<span>Hello Monique!</span>
<span>What'up?</span>
<span>Not much :(</span>
</pre></div>
</div></div></div>
