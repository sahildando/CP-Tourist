<h2><a href="https://www.geeksforgeeks.org/problems/generate-grey-code-sequences/1">Generate Grey Code Sequences</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a number N, your task is to complete the function which generates all n-bit <a href="https://en.wikipedia.org/wiki/Gray_code">grey code sequences</a>, a grey code sequence is a sequence such that successive patterns in it differ by one bit.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2
<strong>Output: </strong>00 01 11 10<strong>
Explanation: </strong>All 2-bit gray codes are
00, 01, 11, 10&nbsp;such that successive
patterns in it differ by one bit.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 1
<strong>Output: </strong>0 1</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function&nbsp;<strong>generateCode()</strong>&nbsp;which takes an integer as input parameter and retruns an array of&nbsp;all N bit&nbsp;grey code sequence such that successive patterns in it differ by one bit.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N * 2<sup>N</sup>)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 16</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;