#include <Arduino.h>

#include <M5Unified.h>
#include <gob_unifiedButton.hpp> // 2023/5/12現在 M5UnifiedにBtnA等がないのでGobさんのライブラリを使用
gob::UnifiedButton unifiedButton;

void setup() {
  auto cfg = M5.config();
  cfg.output_power = true;
  M5.begin(cfg);
  unifiedButton.begin(&M5.Display, gob::UnifiedButton::appearance_t::transparent_all);

  M5.Display.setFont(&fonts::efontJA_24);
  M5.Display.println("HelloWorld");
}

void loop() {
}
