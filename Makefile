.PHONY: clean All

All:
	@echo "----------Building project:[ custom_unary_operator_creation - Debug ]----------"
	@cd "custom_unary_operator_creation" && "$(MAKE)" -f  "custom_unary_operator_creation.mk"
clean:
	@echo "----------Cleaning project:[ custom_unary_operator_creation - Debug ]----------"
	@cd "custom_unary_operator_creation" && "$(MAKE)" -f  "custom_unary_operator_creation.mk" clean
