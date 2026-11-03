// ============================================================
// 2.13 — HOW TO DESIGN YOUR FIRST PROGRAMS
// ============================================================

// KEY CONCEPT:
// Design the program before writing code.
// Planning saves time, reduces errors, and simplifies debugging.


// ------------------------------------------------------------
// STEP 1: DEFINE THE GOAL
// ------------------------------------------------------------
// Clearly state what the program should accomplish.
// Describe the desired outcome in one or two sentences.
//
// Example: Create a calculator that performs basic arithmetic.


// ------------------------------------------------------------
// STEP 2: DEFINE THE REQUIREMENTS
// ------------------------------------------------------------
// Requirements specify WHAT the program must do, not HOW.
//
// Example:
// - Accept two numbers from the user.
// - Accept a mathematical operator.
// - Calculate the correct result.
// - Display the result.
// - Handle invalid input appropriately.
//
// A program is complete when it satisfies its requirements.


// ------------------------------------------------------------
// STEP 3: DEFINE TOOLS, TARGETS AND BACKUP PLAN
// ------------------------------------------------------------
// Tools: Compiler, IDE, libraries, etc.
// Target: Operating system and hardware where the program runs.
// Backup: Keep copies of source code in separate locations.
//
// Best practice:
// Use Git/GitHub, cloud storage, or external storage.
// A backup on the same physical drive may be lost if it fails.


// ------------------------------------------------------------
// STEP 4: BREAK COMPLEX PROBLEMS INTO SMALLER TASKS
// ------------------------------------------------------------
// Divide a difficult problem into manageable subtasks.
// Each subtask can become a separate function.
//
// TOP-DOWN APPROACH:
// Start with the main problem and break it into smaller tasks.
//
// Example:
// Calculator
//   1. Get the first number.
//   2. Get the operator.
//   3. Get the second number.
//   4. Calculate the result.
//   5. Display the result.
//
// BOTTOM-UP APPROACH:
// Start with small tasks and group related tasks into larger tasks.
//
// A task hierarchy helps determine the structure of the program.
// The main task generally becomes main(), while subtasks become
// functions.


// ------------------------------------------------------------
// STEP 5: DETERMINE THE SEQUENCE OF EVENTS
// ------------------------------------------------------------
// Decide the correct order in which tasks should be performed.
//
// Calculator sequence:
// 1. Input first number.
// 2. Input operator.
// 3. Input second number.
// 4. Perform calculation.
// 5. Output result.
//
// A correct sequence makes program logic clear and organized.


// ------------------------------------------------------------
// STEP 6: IMPLEMENT AND TEST INCREMENTALLY
// ------------------------------------------------------------
// Write one small part of the program at a time.
// Compile and test each part before adding the next.
//
// Incremental development:
// Write -> Compile -> Test -> Fix errors -> Continue.
//
// This makes errors easier to locate and prevents many errors
// from accumulating at once.


// ============================================================
// IMPORTANT PROGRAMMING ADVICE
// ============================================================

// 1. START SIMPLE
// Begin with the simplest working version of the program.
// Avoid adding too many features at the beginning.

// 2. ADD FEATURES GRADUALLY
// Once the basic program works, add one feature at a time.
// Test after every addition.

// 3. FOCUS ON ONE TASK AT A TIME
// Complete one task before moving to another.
// One working feature is better than several unfinished features.

// 4. TEST CODE AS YOU WRITE
// Compile and test small sections frequently.
// Fix errors as soon as they appear.

// 5. DO NOT PERFECT THE FIRST DRAFT
// First make the program work.
// Then improve readability, structure, formatting, and robustness.
// Programming is an iterative process.

// 6. OPTIMIZE FOR MAINTAINABILITY
// Write code that is easy to read, understand, modify, and debug.
// Remove unnecessary repetition and split long functions into
// smaller, meaningful functions.
//
// Avoid premature optimization: do not spend time optimizing
// performance before identifying an actual performance problem.


// ============================================================
// FINAL SUMMARY
// ============================================================

// 1. Define the goal.
// 2. List the requirements.
// 3. Choose tools, targets, and a backup strategy.
// 4. Break the problem into smaller tasks.
// 5. Determine the sequence of events.
// 6. Implement and test incrementally.
//
// REMEMBER:
// Plan first -> Break down -> Implement -> Test -> Improve.
//
// A little planning at the beginning can save significant
// debugging time later.