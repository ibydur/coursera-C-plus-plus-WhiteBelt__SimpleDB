# coursera-C-plus-plus-WhiteBelt__SimpleDB
## A program that implements work with a simple database and communicates with the user via standard input and output. Task from https://www.coursera.org/learn/c-plus-plus-white'

---
## Description about task:
---

We will store pairs of the following type in our database: date, event. Let's define the date as a string of the _Year-Month-Day_ type, where _Year_, _Month_ and _Day_ are integers.

The event define as a string of arbitrary printable characters without delimiters inside (spaces, tabs, etc.). The event cannot be an empty string. Many different events can occur on the same date, the database must be able to save them all. It is not necessary to save identical events that occurred on the same day: it is enough to save only one of them.

Our database must understand certain commands in order to interact with it:
```
- add an event: Add Date Event
- delete event: Del Date Event
- delete all events for a specific date: Del Date
- search for events for a specific date: Find Date
- print of all events for all dates: Print

```

All commands, dates and events are separated by spaces as you type. Commands are read from standard input. There can be exactly one command on one line, but you can enter multiple commands on multiple lines. Blank lines can also come in - ignore them and continue processing new commands on subsequent lines.

## Add event (Add _Date Event_)
When adding an event, the database must remember it and then show it when searching (using the Find command) or printing (using the Print command). If the specified event already exists for the given date, re-adding it should be ignored. If the input is correct (see the section "Handling Input Errors"), the program should not display anything on the screen.

## Delete event (Del _Date Event_)
The command must remove the previously added event with the specified name on the specified date, if it exists. If the event is found and deleted, the program should print the string "Deleted successfully" (without quotes). If the event is not found on the specified date, the program should display the string "Event not found" (without quotes).

## Delete multiple events (Del _Date_)
The command removes all previously added events for the specified date. The program should always output a string like "Deleted N events", where _N_ is the number of all found and deleted events. _N_ can be zero if there were no events on the specified date.

## Find Date (Find _Date_)
Find and print previously added events on a specified date. The program should only print the events themselves, one per line. Events must be sorted in ascending order in the order of comparing strings with each other (string type).

## Print all events (Print)
Using this command, you have to show the complete contents of our database. The program should print all _Date Event_ pairs, one per line. All pairs must be sorted by date, and events within the same date must be sorted in ascending order in the order of comparing strings with each other (string type). Dates must be formatted in a special way: _YYYY-MM-DD_, where _G, M, D_ are the numbers of the numbers of the year, month and day, respectively. If some number has fewer digits, then it must be padded with zeros, for example, 0001-01-01 - January 1st of the first year. You don't need to output a date with a negative year value.


## Handling Input Errors
The input in this task is not always correct: your program must handle some input errors correctly.

#### What input errors need to be handled
1. If the user entered an unknown command, then the program should report this by displaying the line "Unknown command: _COMMAND_", where _COMMAND_ is the command entered by the user. The command is the first word in the line (up to a space).

2. If the date does not correspond to the _Year-Month-Day format_, where _Year_, _Month_ and _Day_ are arbitrary integers, then the program should print "Wrong date format: _DATE_", where _DATE_ is what the user entered instead of the date (before a space). Please note that the parts of the date are separated by exactly one hyphen, and the date itself should not contain extra characters either before the year or after the day. Date parts cannot be empty, but can be zero or even negative.

If the date format is correct, you need to check the validity of the month and day.
  - If the month number is not a number from 1 to 12, output "Month value is invalid: _MONTH_", where _MONTH_ is an invalid month number, for example, 13 or -1.
  - If the month is correct and the day does not lie in the range from 1 to 31, print "Day value is invalid: _DAY_", where _DAY_ is an invalid number of the day in the month, for example, 39 or 0.

#### Note that:

- You do not need to check the year value separately.
- There is no need to check the correctness of the calendar date: the number of days in each month is considered equal to 31, leap years need not be taken into account.
- If both the month and the day are incorrect, then you need to display one error message per month.

#### Examples:

- 1-1-1 is a valid date;
- -1-1-1 - correct date (year -1, month 1, day 1);
- 1-1-1 - date in the correct format, but with an incorrect month -1;
- 1 --- 1-1 - date is not in the correct format: the month cannot start with two hyphens.
- 1- + 1- + 1 is a valid date, since +1 is an integer

After processing any of the described errors of entering and printing a message, the program should terminate its execution.

#### Which input errors don't need to be handled:

In particular, we guarantee that:
- Each command occupies exactly one line in its entirety, although there may be blank lines in the input (they must be ignored).
- Events always contain the specified number of arguments: the Add command is always followed by the date and the event, the Find command is always followed by the date, the Del command is always followed by the date and possibly the event, and the Print command does not contain additional information.
- All commands, dates and events are non-empty strings and do not contain spaces or other whitespace characters. (In particular, our tests do not contain the "Add 2018-02-12" command, because it does not contain the event name after the date.) On the other hand, the Del command may not contain events after the date: in this case, you need to delete all events after the date. the specified date (see the section "Deleting several events").
- Despite the fact that a date with a negative year value is considered correct, the tests are designed in such a way that it does not need to be displayed in the Print command.

## Examples:

#### Correct input:
![image](https://user-images.githubusercontent.com/81817789/113607138-8999af80-9651-11eb-9275-a498fddc9ca6.png)

#### Output:
![image](https://user-images.githubusercontent.com/81817789/113607222-a504ba80-9651-11eb-8f73-a9e06914e0bd.png)


#### Incorrect date input:
![image](https://user-images.githubusercontent.com/81817789/113607328-bfd72f00-9651-11eb-805e-faa3fd902f6b.png)

#### Output:
![image](https://user-images.githubusercontent.com/81817789/113607389-d087a500-9651-11eb-8ec8-4aa2c57efff6.png)













