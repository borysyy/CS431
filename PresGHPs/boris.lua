/*
    Assignment: Lua Assignment
    Written by: Slava Borysyuk
    Date: 11/16/2023
    Language: Lua
    Description:
    A program that asks the user for multiple choices regarding homework assignments.
    The user can add a homework assignment, then enter the assignment name, subject, and 
    due date. They can also delete an assignment of their choice, or mark one as completed.
    They can also print out all of the homework assignments. When they're done they quit out 
    and it stops the program and prints out all of the homework assignments one last time.
*/

-- Create a table to store Boris' homework assignments
local assignments = {}

-- Function to add a new homework assignment
function addAssignment()
    -- Get assignment name from Boris
    io.write("Enter assignment name: ")
    local assignmentName = io.read()
    
    -- Get assignment subject from Boris
    io.write("Enter assignment subject: ")
    local assignmentSubject = io.read()

    -- Get assignment due date from Boris
    io.write("Enter assignment due date: ")
    local assignmentDueDate = io.read()

    -- Create a new assignment table
    local newAssignment = {
        name = assignmentName,
        subject = assignmentSubject,
        dueDate = assignmentDueDate,
        completed = false
    }

    -- Add the new assignment to the assignments table
    table.insert(assignments, newAssignment)
end

-- Function to delete a homework assignment
function deleteAssignment()
    -- Get assignment index from Boris
    io.write("Which homework assignment do you want to delete (enter as a number like 1, 2, etc): ")
    local assignmentIndex = io.read()

    -- Remove the assignment from the assignments table
    table.remove(assignments, assignmentIndex)
end

-- Function to mark a homework assignment as completed
function markAssignmentCompleted()
    -- Get assignment index from Boris
    io.write("Which homework assignment did you complete (enter as a number like 1, 2, etc): ")
    local assignmentIndex = tonumber(io.read())  -- Convert input to a number

    -- Check if the input is a valid number and within the range of assignments
    if assignmentIndex and assignmentIndex >= 1 and assignmentIndex <= #assignments then
        -- Mark the assignment as completed
        assignments[assignmentIndex].completed = true
        print("Assignment marked as completed.")
    else
        print("Invalid assignment number. Please try again.")
    end
end

-- Function to view all homework assignments
function viewAllAssignments()
    -- Print a header for the table
    print("Homework Assignments")
    print("----------------------")

    -- Print each assignment
    for _, assignment in ipairs(assignments) do
        print("Name:", assignment.name)
        print("Subject:", assignment.subject)
        print("Due Date:", assignment.dueDate)
        print("Completed:", assignment.completed)
        print()
    end
end

-- Main loop
while true do
    -- Print the menu
    print("1. Add homework assignment")
    print("2. Delete homework assignment")
    print("3. Mark homework assignment as completed")
    print("4. View all homework assignments")
    print("5. Quit")
    print("What would you like to do?: ")

    -- Get Boris' choice
    local choice = io.read()

    -- Handle Boris' choice
    if choice == "1" then
        addAssignment()
    elseif choice == "2" then
        deleteAssignment()
    elseif choice == "3" then
        markAssignmentCompleted()
    elseif choice == "4" then
        viewAllAssignments()
    elseif choice == "5" then
        print("Quitting Program")
        viewAllAssignments()
        break
    else
        print("Invalid choice. Please try again.")
    end
end