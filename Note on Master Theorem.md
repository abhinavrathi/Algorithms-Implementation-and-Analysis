# Note on Master Theorem

When we have a recurrence denoted as T(n) = aT(n/b) + f(n), we have the following three cases:

<ul>
<li>If f(n) = O(n<sup>log<sub>b</sub> a-e</sup>) for some constant e>0, then T(n) = &theta;(n<sup>log<sub>b</sub> a</sup>)</li><br>
<li>If f(n) = O(n<sup>log<sub>b</sub> a</sup>), then T(n) = &theta;(n<sup>log<sub>b</sub> a</sup> log n)</li><br>
<li>If f(n) = O(n<sup>log<sub>b</sub> a+e</sup>) for some constant e>0, and if af(n/b) <= cf(n) for some constant c < 1 and all sufficiently large n, then T(n) = &theta;(f(n))</li>
</ul>
