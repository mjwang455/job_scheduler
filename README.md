# GPU_job_scheduler


1. Least number of units of times


    Given a characters array tasks, representing the tasks a GPU SM processor needs to do, where each letter represents a different blocks. Blocks could be done in any order. Each block is done in one unit of time. For each unit of time, the GPU SM could complete either one block or just be idle.
    
    However, there is a non-negative integer n that represents the cooldown period between two same blocks (the same letter in the array), that is that there must be at least n units of time between any two same blocks.
    
    Return the least number of units of times that a GPU SM will take to finish all the given tasks.

    Example:
   
    Input: tasks = ["A","A","A","B","B","B"], n = 2  
    Output: 8  
    Explanation:  
    A -> B -> idle -> A -> B -> idle -> A -> B  
    There is at least 2 units of time between any two same blocks.
