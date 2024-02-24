# rush02-piscine-42

4
2
5

10000000

0

## pasos:

- [ ] **Objective**: Create a program `rush-02` that converts numbers into their written English value.
- [ ] **Compilation**: Use `make fclean` and `make`.
- [ ] **Input**:
   - [ ] If there's one argument, it's the number to convert.
   - [ ] If there are two arguments, the first is a custom reference dictionary and the second is the number to convert.
- [ ] **Validations**:
   - [ ] Return `Error` with a newline if the argument is not an unsigned integer.
   - [ ] Handle numbers beyond the range of `unsigned int`.
- [ ] **Language**: The program should operate in English.
- [ ] **Dictionary**:
   - [ ] Analyze and use for printing results.
   - [ ] Modifying values is allowed, but initial keys cannot be removed.
   - [ ] Format: `[number][spaces]:[spaces][text]`.
   - [ ] "Dict Error\n" if there are errors in the analysis.
- [ ] **Memory Management**: Properly free any allocated memory.
- [ ] **Usage Examples**:
   - [ ] `./rush-02 42` → "forty two"
   - [ ] `./rush-02 0` → "zero"
   - [ ] `./rush-02 10.4` → "Error"
   - [ ] `./rush-02 100000` → "one hundred thousand"
   - [ ] `./rush-02 20` (with `20 : hey everybody !` in the dictionary) → "hey everybody !"


Hola mateo

## side missions

### makefile

- [ ] investigate !

### parse nums dict

- [ ] map to a easy to acess datastructure
