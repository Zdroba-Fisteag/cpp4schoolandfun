# C++ projects
### Created by <i>Armin-Rafael ZDROBA-FISTEAG</i> - All rights reserved
<hr>
<b>Projects:</b>

## x_and_dot.cpp (2026-03-10)
This school-assigned project is basically supposed to count all the consecutive true variables in a given scope. In easier words: <br>
<ul>
    <li> We have some 2D vectors given.<br>
    *<small>Vectors could be compared to the <i>Java ArrayLists</i></small>
    <li> The <kbd>int</kbd>-method <kbd>maxCount(matrixToCount)</kbd> is supposed to loop through these parametrized vectors (whose structures resemble those of matrices) and fetch out each individual value at each row (<kbd>i</kbd>) and column (<kbd>j</kbd>).
    <li> If a value is <kbd>true</kbd>, increment the <kbd>currentCounter</kbd> variable. If a horizontally or vertically adjacent variable is also <kbd>ture</kbd>, increment <kbd>currentCounter</kbd>. Loop through the vector again and repeat until no undiscovered <kbd>true</kbd> values remain.
    <li> In the end, if <kbd>(int) maxCounter</kbd> wasn't bigger than <kbd>currentCounter</kbd>, then update <kbd>maxCounter</kbd> to attain <kbd>currentCounter</kbd>'s value.
</ul>