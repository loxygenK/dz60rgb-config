# DZ60RGB V2 Key Configuration

My favorite configuration of my favorite keyboard. Updating from time to time.

## Derived from

- https://github.com/qmk/qmk_firmware
  - Used https://github.com/qmk/qmk_firmware/tree/master/keyboards/dztech/dz60rgb/keymaps/default

## Command to build

```bash
$ export QMK_FIRM_DIR=$HOME/qmk_firmware # replace to your directory
$ export QMK_KEYMAP_NAME=flisan
$ git clone https://github.com/loxygenK/dz60rgb-config
$ cd dz60rgb-config
$ ln -svi $(pwd) $QMK_FIRM_DIR/keyboards/dztech/dz60rgb/keymaps/flisan/$QMK_KEYMAP_NAME
$ qmk flash -kb dztech/dz60rgb/v2 -km $QMK_KEYMAP_NAME
# Wait for "ERROR: Bootloader not found. Trying again in 5s."
# And do what you can from below:
#  1. Press Ctrl+\ (maybe key bindings are overwritten depending on the firmware)
#  2. Unplug, press Esc, and plug it again
#  3. Remove the PCB from the case, press Esc, and press the button on the back
#     (this seems works if wrong firmware is flashed and the key binding doesn't work)
```

----

# DZ60RGB V2 キー設定

お気に入りのキーボードで使用しているお気に入りのキー設定です。

##  派生元

https://github.com/qmk/qmk_firmware

- https://github.com/qmk/qmk_firmware/tree/master/keyboards/dztech/dz60rgb/keymaps/default を使用。

## ビルドするためのコマンド

```bash
$ export QMK_FIRM_DIR=$HOME/qmk_firmware # replace to your directory
$ export QMK_KEYMAP_NAME=flisan
$ git clone https://github.com/loxygenK/dz60rgb-config
$ cd dz60rgb-config
$ ln -svi $(pwd) $QMK_FIRM_DIR/keyboards/dztech/dz60rgb/keymaps/flisan/$QMK_KEYMAP_NAME
$ qmk flash -kb dztech/dz60rgb/v2 -km $QMK_KEYMAP_NAME
# "ERROR: Bootloader not found. Trying again in 5s." のメッセージを待ってから、
# 以下のうち可能なものを実行してください:
#  1. Ctrl+\ を押す (ファームウェアによってはキーバインドが上書きされてるかも)
#  2. プラグを抜いて、Escを押して、そのままもう一度指す
#  3. PCBをケースから取り外し、Escを押し、そのまま背面のボタンを押す
#     (違うファームウェアを書き込んでキーバインドが使用不可能になっても、この方法なら行けそう)
```

