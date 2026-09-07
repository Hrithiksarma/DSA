# Write your MySQL query statement below
select start_act.machine_id, 
ROUND(AVG(end_act.timestamp-start_act.timestamp),3) as processing_time
from Activity start_act join Activity end_act on 
start_act.machine_id=end_act.machine_id and 
start_act.process_id=end_act.process_id and 
start_act.activity_type='start' and 
end_act.activity_type='end' 
group by start_act.machine_id