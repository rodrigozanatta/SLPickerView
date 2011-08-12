The UIPickerView subclass contained in this project allows touch events that would otherwise get trapped by the picker to be forwarded to the picker's superview.

The picker only makes a selection when the user taps an entry and not when an entry scrolls past the center indicator area, which is the default UIPickerView behaviour. For the rows in the picker it also implements a custom UIView containing a checkmark, similar to the one seen in Mobile Safari.

Thor Frølich

[Strange Loop](http://strangeloop.dk)