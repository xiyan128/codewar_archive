The rgb function is incomplete. Complete it so that passing in RGB decimal values will result in a hexadecimal representation being returned. Valid decimal values for RGB are 0 - 255. Any values that fall out of that range must be rounded to the closest valid value.

Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.

The following are examples of  expected output values:
```lua
kata.rgb(255, 255, 255) -- returns FFFFFF
kata.rgb(255, 255, 300) -- returns FFFFFF
kata.rgb(0, 0, 0) -- returns 000000
kata.rgb(148, 0, 211) -- returns 9400D3
```
```javascript
rgb(255, 255, 255) // returns FFFFFF
rgb(255, 255, 300) // returns FFFFFF
rgb(0,0,0) // returns 000000
rgb(148, 0, 211) // returns 9400D3
```
```coffeescript
rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0,0,0) # returns 000000
rgb(148, 0, 211) # returns 9400D3
```
```ruby
rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0,0,0) # returns 000000
rgb(148, 0, 211) # returns 9400D3
```
```python
rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0,0,0) # returns 000000
rgb(148, 0, 211) # returns 9400D3
```
```elixir
Kata.rgb(255, 255, 255) # returns FFFFFF
Kata.rgb(255, 255, 300) # returns FFFFFF
Kata.rgb(0,0,0) # returns 000000
Kata.rgb(148, 0, 211) # returns 9400D3
```
```csharp
Rgb(255, 255, 255) # returns FFFFFF
Rgb(255, 255, 300) # returns FFFFFF
Rgb(0,0,0) # returns 000000
Rgb(148, 0, 211) # returns 9400D3
```
```fsharp
rgb 255  255  255 // returns FFFFFF
rgb 255  255  300 // returns FFFFFF
rgb 0 0 0 // returns 000000
rgb 148  0  211 // returns 9400D3
```
```c
char output[7] = {0};

rgb(255, 255, 255, output); 
output == "FFFFFF";

rgb(255, 255, 300, output); 
output == "FFFFFF";

rgb(0, 0, 0, output); 
output == "000000";

rgb(148, 0, 211, output);
output == "9400D3";
```
```cpp
rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0,0,0) # returns 000000
rgb(148, 0, 211) # returns 9400D3
```
```r
rgb(255, 255, 255)
[1] "FFFFFF"

rgb(255, 255, 300)
[1] "FFFFFF"

rgb(0, 0, 0)
[1] "000000"

rgb(148, 0, 211)
[1] "9400D3"
```
```dart
rgb(255, 255, 255) // returns FFFFFF
rgb(255, 255, 300) // returns FFFFFF
rgb(0, 0, 0)       // returns 000000
rgb(148, 0, 211)   // returns 9400D3
```
```nasm
mov edi, 255
mov esi, 255
mov edx, 255
mov rcx, outp
call rgb        ; The string in outp should be "FFFFFF"

mov edi, 255
mov esi, 255
mov edx, 300
mov rcx, outp
call rgb        ; The string in outp should be "FFFFFF"

mov edi, 0
mov esi, 0
mov edx, 0
mov rcx, outp
call rgb        ; The string in outp should be "000000"

mov edi, 148
mov esi,   0
mov edx, 211
mov rcx, outp
call rgb        ; The string in outp should be "9400D3"

The function should return the address of the string
```
```julia
rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0, 0, 0) # returns 000000
rgb(148, 0, 211) # returns 9400D3
```
```kotlin
rgb(255, 255, 255) // returns FFFFFF
rgb(255, 255, 300) // returns FFFFFF
rgb(0, 0, 0) // returns 000000
rgb(148, 0, 211) // returns 9400D3
```
```racket
(rgb 255 255 255) ;; returns FFFFFF
(rgb 255 255 300) ;; returns FFFFFF
(rgb 0 0 0) ;; returns 000000
(rgb 148 0 211) ;; returns 9400D3
```
```scala
rgb(255, 255, 255) // FFFFFF
rgb(255, 255, 300) // FFFFFF
rgb(0, 0, 0)       // 000000
rgb(148, 0, 211)   // 9400D3
```
```php
rgb(255, 255, 255); // returns FFFFFF
rgb(255, 255, 300); // returns FFFFFF
rgb(0, 0, 0); // returns 000000
rgb(148, 0, 211); // returns 9400D3
```
