# --- Arguments ---
QMK_PATH:=""

# --- Configurable variables ---
KEYBOARD_VERSION:=v2mod

# --- Constants (Do not change here) ---
KEYBOARD_BASE:=dztech/dz60rgb
KEYMAP_NAME:=flisan

KEYBOARD_PATH=$(QMK_PATH)/keyboards/$(KEYBOARD_BASE)/$(KEYBOARD_VERSION)
QMK_ARGS:=-kb $(KEYBOARD_BASE)/$(KEYBOARD_VERSION) -km $(KEYMAP_NAME)

build:
	qmk compile $(QMK_ARGS)

flash:
	qmk flash $(QMK_ARGS)

setup:
	@if [ $(QMK_PATH) = "" ]; then \
		echo "Please specify the path where you cloned qmk_firmware in the following way:"; \
		echo "  make setup qmk_path=/path/to/qmk_firmware"; \
		false; \
	fi
	@if [ -e $(KEYBOARD_PATH) ]; then \
		echo "Seems you already set up."; \
		false; \
	fi
	ln -svi "$(dir $(abspath $(MAKEFILE_LIST)))" $(KEYBOARD_PATH)
	@echo "Created symbolic link. Use this argument when you use keyboard and keymap configuration:"
	@echo "  " $(QMK_ARGS)

