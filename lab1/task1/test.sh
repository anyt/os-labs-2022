gcc main_task_1.c -o lab1_task1 && \
./lab1_task1 & \
lab1_task1_pid=$(echo $!) && \
sleep 1 && \
pstree -A -p $lab1_task1_pid