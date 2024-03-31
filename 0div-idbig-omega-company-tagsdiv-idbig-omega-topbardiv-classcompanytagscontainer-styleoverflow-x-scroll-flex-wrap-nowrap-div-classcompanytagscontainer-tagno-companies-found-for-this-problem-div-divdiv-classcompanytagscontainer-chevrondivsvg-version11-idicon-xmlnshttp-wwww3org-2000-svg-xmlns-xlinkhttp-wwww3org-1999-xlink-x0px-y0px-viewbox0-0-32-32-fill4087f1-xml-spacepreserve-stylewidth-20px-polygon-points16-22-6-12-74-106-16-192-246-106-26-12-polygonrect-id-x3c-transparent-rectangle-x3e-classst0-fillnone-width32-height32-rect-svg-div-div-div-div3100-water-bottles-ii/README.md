<h2><a href="https://leetcode.com/problems/water-bottles-ii/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>3100. Water Bottles II</a></h2><h3>Medium</h3><hr><div><p>You are given two integers <code>numBottles</code> and <code>numExchange</code>.</p>

<p><code>numBottles</code> represents the number of full water bottles that you initially have. In one operation, you can perform one of the following operations:</p>

<ul>
	<li>Drink any number of full water bottles turning them into empty bottles.</li>
	<li>Exchange <code>numExchange</code> empty bottles with one full water bottle. Then, increase <code>numExchange</code> by one.</li>
</ul>

<p>Note that you cannot exchange multiple batches of empty bottles for the same value of <code>numExchange</code>. For example, if <code>numBottles == 3</code> and <code>numExchange == 1</code>, you cannot exchange <code>3</code> empty water bottles for <code>3</code> full bottles.</p>

<p>Return <em>the <strong>maximum</strong> number of water bottles you can drink</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2024/01/28/exampleone1.png" style="width: 948px; height: 482px; padding: 10px; background: #fff; border-radius: .5rem;">
<pre><strong>Input:</strong> numBottles = 13, numExchange = 6
<strong>Output:</strong> 15
<strong>Explanation:</strong> The table above shows the number of full water bottles, empty water bottles, the value of numExchange, and the number of bottles drunk.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2024/01/28/example231.png" style="width: 990px; height: 642px; padding: 10px; background: #fff; border-radius: .5rem;">
<pre><strong>Input:</strong> numBottles = 10, numExchange = 3
<strong>Output:</strong> 13
<strong>Explanation:</strong> The table above shows the number of full water bottles, empty water bottles, the value of numExchange, and the number of bottles drunk.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= numBottles &lt;= 100 </code></li>
	<li><code>1 &lt;= numExchange &lt;= 100</code></li>
</ul>
</div>