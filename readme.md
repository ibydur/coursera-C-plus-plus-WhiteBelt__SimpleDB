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
---
## Delete event (Del _Date Event_)
The command must remove the previously added event with the specified name on the specified date, if it exists. If the event is found and deleted, the program should print the string "Deleted successfully" (without quotes). If the event is not found on the specified date, the program should display the string "Event not found" (without quotes).
---
## Delete multiple events (Del _Date_)
The command removes all previously added events for the specified date. The program should always output a string like "Deleted N events", where _N_ is the number of all found and deleted events. _N_ can be zero if there were no events on the specified date.
---
## Event Search (Find Date)
Find and print previously added events on a specified date. The program should only print the events themselves, one per line. Events must be sorted in ascending order in the order of comparing strings with each other (string type).

















