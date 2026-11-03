# Mini Brick ECU (STM32F407)
Separate board target derived from the upstream microRusEFI F4 firmware, while preserving its physical SPI, trigger, ADC, injector, ignition, fuel-pump, and fan pin assignments.

- Build: `cd firmware && bash bin/compile.sh config/boards/mini_brick/meta-info-mini_brick_f4.env build_both_bundles`.
- Expected bundle: `rusefi_bundle_mini_brick_f4.zip` on successful build.
- Mini Brick code aliases: `mini_brick_aliases.h`; aliases do not change the electrical wiring.
- TLE8888 channels: INJ1–4=OUT1–4; HC_LS1=OUT6; HC_LS2=OUT5; HC_LS3=OUT7; GP1=OUT21; GP2=OUT22; GP3=OUT23; GP4=OUT24.
- GP1/GP2 retain stock PE8/PE7 direct control and GP3/GP4 SPI control.
- IGN1–IGN4 remain PD4–PD1; AT1/AT2 and AV1–AV10 use the stock MRE ADC mapping in `config/boards/mre_meta.h`.
- A user-provided connector cavity table is now captured in `connector-5007620481.csv`: it maps OUT7 to pin 1, OUT6 to pin 7, OUT5 to pin 8, injector 4/3/2 to pins 9/10/11, OUT21–24 to pins 17–20, IGN4–1 to pins 21–24, OUT18–14 to pins 32–36, AV1–8 to pins 39–46, and H-bridge +/- to pins 47/48. Pin 12 is **unconfirmed** because the source listed pin 11 twice; the second entry was INJ1. The cavity viewing direction, actual electrical continuity and MCU channel mapping for AT3/AT4 and switches require hardware confirmation.
- High-side GP control remains **disabled**: a correct OFF/high-impedance state and watchdog/power-up safety require engineering and bench testing before the mode can be published.

This target and its CI-built GitHub prerelease artifacts are **experimental**, not validated for installation. Verify bootloader, power supply, polarity, outputs OFF on power-up and reset, ADC readings and all I/O on a disconnected bench first.

**Connector note:** Molex 5007620481 is the PCB header. Follow the molded cavity numbering on the correct *mating harness housing*; header-vs-harness viewing direction has not been verified here. Do not wire injector 1 to pin 12 until explicitly confirmed.
