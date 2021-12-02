# *TEST PLAN:*
## *Table : High level test plan*
|Test| ID	Description|	Exp I/P|	Exp O/P|	Actual OutPut|	Type of Test|
|--|--|--|--|--|--|
HLT_01|When Switch ON |current flow through LC| Inductor charges| Inductor charged| Requirement Based|
HLT_02|When Switch OFF| voltage flow through Ripple C and Load|Voltage passed| Voltage passed|Requirement based|				
HLT_03|Oscilloscope| Input Pulses| PWM pulse generated| PWM pulse generated|Scenario based|	

		
## *Table : Low level test plan*
|Test| ID	Description|	Exp I/P|	Exp O/P|	Actual OutPut|	Type of Test|
|--|--|--|--|--|--|
LLR_01|Load voltage| 12|34|34|Passed|
LLR_02|Duty cycle|60%|Square wave|Square Wave|passed|									
