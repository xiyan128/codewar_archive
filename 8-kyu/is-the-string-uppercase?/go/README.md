# Is the string uppercase?

## Task

```if-not:haskell,csharp,javascript,coffeescript,elixir,forth,go,dart,julia,cpp,reason,typescript,racket,ruby
Create a method `is_uppercase()` to see whether the string is ALL CAPS. For example:
```
```if:haskell,reason,typescript
Create a method `isUpperCase` to see whether the string is ALL CAPS. For example:
```
```if:csharp
Create an extension method `IsUpperCase` to see whether the string is ALL CAPS. For example:
```
```if:julia
Create a function `isupper` to see whether the string is ALL CAPS. For example:
```
```if:cpp
Create a function `is_uppercase()` to see whether the string is ALL CAPS. For example:
```
```if:javascript,coffeescript
Add the `isUpperCase` method to `String` to see whether the string is ALL CAPS. For example:
```
```if:elixir
Create a method `upper_case?` to see whether the string is ALL CAPS. For example:
```
```if:forth,factor
Create a word `uppercase?` to check whether a string is ALL CAPS. For example:
```
```if:go
Create a method `IsUpperCase` to see whether the string is ALL CAPS. For example:
```
```if:racket
Create a method `upcase?` to see whether the string is ALL CAPS. For example:
```
```if:ruby
Create a method `is_upcase?` to see whether the string is ALL CAPS. For example:
```

```python
is_uppercase("c") == False
is_uppercase("C") == True
is_uppercase("hello I AM DONALD") == False
is_uppercase("HELLO I AM DONALD") == True
is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ") == False
is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ") == True
```
```haskell
isUpperCase "c" == False
isUpperCase "C" == True
isUpperCase "hello I AM DONALD" == False
isUpperCase "HELLO I AM DONALD" == True
isUpperCase "ACSKLDFJSgSKLDFJSKLDFJ" == False
isUpperCase "ACSKLDFJSGSKLDFJSKLDFJ" == True
```
```csharp
"c".IsUpperCase() == false
"C".IsUpperCase() == true
"hello I AM DONALD".IsUpperCase() == false
"HELLO I AM DONALD".IsUpperCase() == true
"ACSKLDFJSgSKLDFJSKLDFJ".IsUpperCase() == false
"ACSKLDFJSGSKLDFJSKLDFJ".IsUpperCase() == true
```
```dart
isUpperCase("c") == false
isUpperCase("C") == true
isUpperCase("hello I AM DONALD") == false
isUpperCase("HELLO I AM DONALD") == true
isUpperCase("ACSKLDFJSgSKLDFJSKLDFJ") == false
isUpperCase("ACSKLDFJSGSKLDFJSKLDFJ") == true
```
```julia
isupper("c") == false
isupper("C") == true
isupper("hello I AM DONALD") == false
isupper("HELLO I AM DONALD") == true
isupper("ACSKLDFJSgSKLDFJSKLDFJ") == false
isupper("ACSKLDFJSGSKLDFJSKLDFJ") == true
```
```php
is_uppercase("c") == false
is_uppercase("C") == true
is_uppercase("hello I AM DONALD") == false
is_uppercase("HELLO I AM DONALD") == true
is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ") == false
is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ") == true
```
```c
is_uppercase("c") == false
is_uppercase("C") == true
is_uppercase("hello I AM DONALD") == false
is_uppercase("HELLO I AM DONALD") == true
is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ") == false
is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ") == true
```
```cpp
is_uppercase("c") == false
is_uppercase("C") == true
is_uppercase("hello I AM DONALD") == false
is_uppercase("HELLO I AM DONALD") == true
is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ") == false
is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ") == true
```
```javascript
"c".isUpperCase() == false
"C".isUpperCase() == true
"hello I AM DONALD".isUpperCase() == false
"HELLO I AM DONALD".isUpperCase() == true
"ACSKLDFJSgSKLDFJSKLDFJ".isUpperCase() == false
"ACSKLDFJSGSKLDFJSKLDFJ".isUpperCase() == true
```
```coffeescript
"c".isUpperCase() == no
"C".isUpperCase() == yes
"hello I AM DONALD".isUpperCase() == no
"HELLO I AM DONALD".isUpperCase() == yes
"ACSKLDFJSgSKLDFJSKLDFJ".isUpperCase() == no
"ACSKLDFJSGSKLDFJSKLDFJ".isUpperCase() == yes
```
```elixir
upper_case?("c") == false
upper_case?("C") == true
upper_case?("hello I AM DONALD") == false
upper_case?("HELLO I AM DONALD") == true
upper_case?("ACSKLDFJSgSKLDFJSKLDFJ") == false
upper_case?("ACSKLDFJSGSKLDFJSKLDFJ") == true
```
```forth
s" c" uppercase? -> false
s" C" uppercase? -> true
s" hello I AM DONALD" uppercase? -> false
s" HELLO I AM DONALD" uppercase? ->  true
s" ACSKLDFJSgSKLDFJSKLDFJ" uppercase? -> false
s" ACSKLDFJSGSKLDFJSKLDFJ" uppercase? -> true
```
```factor
"c" uppercase? -> f
"C" uppercase? -> t
"hello I AM DONALD" uppercase? -> f
"HELLO I AM DONALD" uppercase? ->  t
"ACSKLDFJSgSKLDFJSKLDFJ" uppercase? -> f
"ACSKLDFJSGSKLDFJSKLDFJ" uppercase? -> t
```
```go
type MyString string
MyString("c").IsUpperCase() == false
MyString("C").IsUpperCase() == true
MyString("hello I AM DONALD").IsUpperCase() == false
MyString("HELLO I AM DONALD").IsUpperCase() == true
MyString("ACSKLDFJSgSKLDFJSKLDFJ").IsUpperCase() == false
MyString("ACSKLDFJSGSKLDFJSKLDFJ").IsUpperCase() == true
```
```racket
(upcase? "c") ; #f
(upcase? "C") ; #t
(upcase? "hello I AM DONALD") ; #f
(upcase? "HELLO I AM DONALD") ; #t 
(upcase? "ACSKLDFJSgSKLDFJSKLDFJ") ; #f
(upcase? "ACSKLDFJSGSKLDFJSKLDFJ") ; #t
```
```reason
isUpperCase("c") == false
isUpperCase("C") == true
isUpperCase("hello I AM DONALD") == false
isUpperCase("HELLO I AM DONALD") == true
isUpperCase("ACSKLDFJSgSKLDFJSKLDFJ") == false
isUpperCase("ACSKLDFJSGSKLDFJSKLDFJ") == true
```
```typescript
isUpperCase('c') == false
isUpperCase('C') == true
isUpperCase('hello I AM DONALD') == false
isUpperCase('HELLO I AM DONALD') == true
isUpperCase('ACSKLDFJSgSKLDFJSKLDFJ') == false
isUpperCase('ACSKLDFJSGSKLDFJSKLDFJ') == true
```
```ruby
"c".is_upcase? == false
"C".is_upcase? == true
"hello I AM DONALD".is_upcase? == false
"HELLO I AM DONALD".is_upcase? == true
"ACSKLDFJSgSKLDFJSKLDFJ".is_upcase? == false
"ACSKLDFJSGSKLDFJSKLDFJ".is_upcase? == true
```

In this Kata, a string is said to be in ALL CAPS whenever it does not contain any lowercase letter so any string containing no letters at all is trivially considered to be in ALL CAPS.
