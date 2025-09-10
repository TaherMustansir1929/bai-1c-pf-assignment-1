| **User Input (n)** | **if (n < 0 \|\| n > 9)** | **Action** | **count Array Change** |
| :---: | :---: | :--- | :--- |
| `3`  | `3` is between `0-9`, condition is **false** | `count[3]` incremented → `1` | `count[3] = 1` |
| `1`  | `1` is between `0-9`, condition is **false** | `count[1]` incremented → `2` | `count[1] = 2` |
| `4`  | `4` is between `0-9`, condition is **false** | `count[4]` incremented → `1` | `count[4] = 1` |
| `1`  | `1` is between `0-9`, condition is **false** | `count[1]` incremented → `2` | *(no change, already 2)* |
| `5`  | `5` is between `0-9`, condition is **false** | `count[5]` incremented → `1` | `count[5] = 1` |
| `9`  | `9` is between `0-9`, condition is **false** | `count[9]` incremented → `1` | `count[9] = 1` |
| `2`  | `2` is between `0-9`, condition is **false** | `count[2]` incremented → `1` | `count[2] = 1` |
| `6`  | `6` is between `0-9`, condition is **false** | `count[6]` incremented → `1` | `count[6] = 1` |
| `5`  | `5` is between `0-9`, condition is **false** | `count[5]` incremented → `2` | `count[5] = 2` |
| `3`  | `3` is between `0-9`, condition is **false** | `count[3]` incremented → `2` | `count[3] = 2` |
| `5`  | `5` is between `0-9`, condition is **false** | `count[5]` incremented → `3` | `count[5] = 3` |
| `8`  | `8` is between `0-9`, condition is **false** | `count[8]` incremented → `1` | `count[8] = 1` |
| `99` | `99` is not between `0-9`, condition is **true** | `break` executed, loop terminates | *(final state reached)* |
