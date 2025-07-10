<h2><a href="https://www.geeksforgeeks.org/problems/greater-on-right-side4305/1">Greater on right side</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an array <strong>a</strong><strong>rr</strong>. Replace every element with the <strong>next greatest element</strong> (the greatest element on its right side) in the array. Note: There is no element next to the last element, so replace it with <strong>-1</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [16, 17, 4, 3, 5, 2]
<strong>Output: </strong>[17, 5, 5, 5, 2, -1]
<strong>Explanation:</strong> For 16 the greatest element 
on its right is 17. For 17 it's 5. 
For 4 it's 5. For 3 it's 5. For 5 it's 2. 
For 2 it's -1(no element to its right). <br></span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [2, 3, 1, 9]
<strong>Output: </strong>[9, 9, 9, -1]
<strong>Explanation: </strong>For each element except 9 the
greatest element on its right is 9.<br></span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 10<sup>5</sup><br>1 &lt;= arr[i]&lt;= 10<sup>6</sup></span></p>
<p>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;