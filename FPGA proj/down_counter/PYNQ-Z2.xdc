## Clock Constraint (125MHz onboard clock on PYNQ-Z2)
set_property PACKAGE_PIN H16 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]

## Corrected Reset Constraint (BTN0 on PYNQ-Z2 ? Pin C14)
set_property PACKAGE_PIN D19 [get_ports rst]
set_property IOSTANDARD LVCMOS33 [get_ports rst]

## Counter Output Constraints (LEDs on PYNQ-Z2)
set_property PACKAGE_PIN R14 [get_ports {count[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {count[0]}]

set_property PACKAGE_PIN P14 [get_ports {count[1]}]
set_property IOSTANDARD LVCMOS33 [get_ports {count[1]}]

set_property PACKAGE_PIN N16 [get_ports {count[2]}]
set_property IOSTANDARD LVCMOS33 [get_ports {count[2]}]

set_property PACKAGE_PIN M14 [get_ports {count[3]}]
set_property IOSTANDARD LVCMOS33 [get_ports {count[3]}]
