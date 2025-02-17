#pragma once

#include "es8311.h"

namespace esphome {
namespace es8311 {

// ES8311 register addresses
static const uint8_t ES8311_REG00_RESET = 0x00;        // Reset
static const uint8_t ES8311_REG01_CLK_MANAGER = 0x01;  // Clock Manager: select clk src for mclk, enable clock for codec
static const uint8_t ES8311_REG02_CLK_MANAGER = 0x02;  // Clock Manager: clk divider and clk multiplier
static const uint8_t ES8311_REG03_CLK_MANAGER = 0x03;  // Clock Manager: adc fsmode and osr
static const uint8_t ES8311_REG04_CLK_MANAGER = 0x04;  // Clock Manager: dac osr
static const uint8_t ES8311_REG05_CLK_MANAGER = 0x05;  // Clock Manager: clk divider for adc and dac
static const uint8_t ES8311_REG06_CLK_MANAGER = 0x06;  // Clock Manager: bclk inverter BIT(5) and divider
static const uint8_t ES8311_REG07_CLK_MANAGER = 0x07;  // Clock Manager: tri-state, lrck divider
static const uint8_t ES8311_REG08_CLK_MANAGER = 0x08;  // Clock Manager: lrck divider
static const uint8_t ES8311_REG09_SDPIN = 0x09;        // Serial Digital Port: DAC
static const uint8_t ES8311_REG0A_SDPOUT = 0x0A;       // Serial Digital Port: ADC
static const uint8_t ES8311_REG0B_SYSTEM = 0x0B;       // System
static const uint8_t ES8311_REG0C_SYSTEM = 0x0C;       // System
static const uint8_t ES8311_REG0D_SYSTEM = 0x0D;       // System: power up/down
static const uint8_t ES8311_REG0E_SYSTEM = 0x0E;       // System: power up/down
static const uint8_t ES8311_REG0F_SYSTEM = 0x0F;       // System: low power
static const uint8_t ES8311_REG10_SYSTEM = 0x10;       // System
static const uint8_t ES8311_REG11_SYSTEM = 0x11;       // System
static const uint8_t ES8311_REG12_SYSTEM = 0x12;       // System: Enable DAC
static const uint8_t ES8311_REG13_SYSTEM = 0x13;       // System
static const uint8_t ES8311_REG14_SYSTEM = 0x14;       // System: select DMIC, select analog pga gain
static const uint8_t ES8311_REG15_ADC = 0x15;          // ADC: adc ramp rate, dmic sense
static const uint8_t ES8311_REG16_ADC = 0x16;          // ADC
static const uint8_t ES8311_REG17_ADC = 0x17;          // ADC: volume
static const uint8_t ES8311_REG18_ADC = 0x18;          // ADC: alc enable and winsize
static const uint8_t ES8311_REG19_ADC = 0x19;          // ADC: alc maxlevel
static const uint8_t ES8311_REG1A_ADC = 0x1A;          // ADC: alc automute
static const uint8_t ES8311_REG1B_ADC = 0x1B;          // ADC: alc automute, adc hpf s1
static const uint8_t ES8311_REG1C_ADC = 0x1C;          // ADC: equalizer, hpf s2
static const uint8_t ES8311_REG1D_ADCEQ = 0x1D;        // ADCEQ: equalizer B0
static const uint8_t ES8311_REG1E_ADCEQ = 0x1E;        // ADCEQ: equalizer B0
static const uint8_t ES8311_REG1F_ADCEQ = 0x1F;        // ADCEQ: equalizer B0
static const uint8_t ES8311_REG20_ADCEQ = 0x20;        // ADCEQ: equalizer B0
static const uint8_t ES8311_REG21_ADCEQ = 0x21;        // ADCEQ: equalizer A1
static const uint8_t ES8311_REG22_ADCEQ = 0x22;        // ADCEQ: equalizer A1
static const uint8_t ES8311_REG23_ADCEQ = 0x23;        // ADCEQ: equalizer A1
static const uint8_t ES8311_REG24_ADCEQ = 0x24;        // ADCEQ: equalizer A1
static const uint8_t ES8311_REG25_ADCEQ = 0x25;        // ADCEQ: equalizer A2
static const uint8_t ES8311_REG26_ADCEQ = 0x26;        // ADCEQ: equalizer A2
static const uint8_t ES8311_REG27_ADCEQ = 0x27;        // ADCEQ: equalizer A2
static const uint8_t ES8311_REG28_ADCEQ = 0x28;        // ADCEQ: equalizer A2
static const uint8_t ES8311_REG29_ADCEQ = 0x29;        // ADCEQ: equalizer B1
static const uint8_t ES8311_REG2A_ADCEQ = 0x2A;        // ADCEQ: equalizer B1
static const uint8_t ES8311_REG2B_ADCEQ = 0x2B;        // ADCEQ: equalizer B1
static const uint8_t ES8311_REG2C_ADCEQ = 0x2C;        // ADCEQ: equalizer B1
static const uint8_t ES8311_REG2D_ADCEQ = 0x2D;        // ADCEQ: equalizer B2
static const uint8_t ES8311_REG2E_ADCEQ = 0x2E;        // ADCEQ: equalizer B2
static const uint8_t ES8311_REG2F_ADCEQ = 0x2F;        // ADCEQ: equalizer B2
static const uint8_t ES8311_REG30_ADCEQ = 0x30;        // ADCEQ: equalizer B2
static const uint8_t ES8311_REG31_DAC = 0x31;          // DAC: mute
static const uint8_t ES8311_REG32_DAC = 0x32;          // DAC: volume
static const uint8_t ES8311_REG33_DAC = 0x33;          // DAC: offset
static const uint8_t ES8311_REG34_DAC = 0x34;          // DAC: drc enable, drc winsize
static const uint8_t ES8311_REG35_DAC = 0x35;          // DAC: drc maxlevel, minilevel
static const uint8_t ES8311_REG36_DAC = 0x36;          // DAC
static const uint8_t ES8311_REG37_DAC = 0x37;          // DAC: ramprate
static const uint8_t ES8311_REG38_DACEQ = 0x38;        // DACEQ: equalizer B0
static const uint8_t ES8311_REG39_DACEQ = 0x39;        // DACEQ: equalizer B0
static const uint8_t ES8311_REG3A_DACEQ = 0x3A;        // DACEQ: equalizer B0
static const uint8_t ES8311_REG3B_DACEQ = 0x3B;        // DACEQ: equalizer B0
static const uint8_t ES8311_REG3C_DACEQ = 0x3C;        // DACEQ: equalizer B1
static const uint8_t ES8311_REG3D_DACEQ = 0x3D;        // DACEQ: equalizer B1
static const uint8_t ES8311_REG3E_DACEQ = 0x3E;        // DACEQ: equalizer B1
static const uint8_t ES8311_REG3F_DACEQ = 0x3F;        // DACEQ: equalizer B1
static const uint8_t ES8311_REG40_DACEQ = 0x40;        // DACEQ: equalizer A1
static const uint8_t ES8311_REG41_DACEQ = 0x41;        // DACEQ: equalizer A1
static const uint8_t ES8311_REG42_DACEQ = 0x42;        // DACEQ: equalizer A1
static const uint8_t ES8311_REG43_DACEQ = 0x43;        // DACEQ: equalizer A1
static const uint8_t ES8311_REG44_GPIO = 0x44;         // GPIO: dac2adc for test
static const uint8_t ES8311_REG45_GP = 0x45;           // GPIO: GP control
static const uint8_t ES8311_REGFA_I2C = 0xFA;          // I2C: reset registers
static const uint8_t ES8311_REGFC_FLAG = 0xFC;         // Flag
static const uint8_t ES8311_REGFD_CHD1 = 0xFD;         // Chip: ID1
static const uint8_t ES8311_REGFE_CHD2 = 0xFE;         // Chip: ID2
static const uint8_t ES8311_REGFF_CHVER = 0xFF;        // Chip: Version

// ES8311 clock divider coefficients
static const ES8311Coefficient ES8311_COEFFICIENTS[] = {
    // clang-format off

  //   mclk,  rate, pre_  pre_  adc_  dac_  fs_   lrck  lrck bclk_  adc_  dac_
  //                 div, mult,  div,  div, mode,   _h,   _l,  div,  osr,  osr

  // 8k
  {12288000,  8000, 0x06, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  {18432000,  8000, 0x03, 0x02, 0x03, 0x03, 0x00, 0x05, 0xff, 0x18, 0x10, 0x20},
  {16384000,  8000, 0x08, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 8192000,  8000, 0x04, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 6144000,  8000, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 4096000,  8000, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 3072000,  8000, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 2048000,  8000, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 1536000,  8000, 0x03, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 1024000,  8000, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},

  // 11.025k
  {11289600, 11025, 0x04, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 5644800, 11025, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 2822400, 11025, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 1411200, 11025, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},

  // 12k
  {12288000, 12000, 0x04, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 6144000, 12000, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 3072000, 12000, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 1536000, 12000, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},

  // 16k
  {12288000, 16000, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  {18432000, 16000, 0x03, 0x02, 0x03, 0x03, 0x00, 0x02, 0xff, 0x0c, 0x10, 0x20},
  {16384000, 16000, 0x04, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 8192000, 16000, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 6144000, 16000, 0x03, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 4096000, 16000, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 3072000, 16000, 0x03, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 2048000, 16000, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 1536000, 16000, 0x03, 0x08, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},
  { 1024000, 16000, 0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x20},

  // 22.05k
  {11289600, 22050, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 5644800, 22050, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 2822400, 22050, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 1411200, 22050, 0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},

  // 24k
  {12288000, 24000, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  {18432000, 24000, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 6144000, 24000, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 3072000, 24000, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 1536000, 24000, 0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},

  // 32k
  {12288000, 32000, 0x03, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  {18432000, 32000, 0x03, 0x04, 0x03, 0x03, 0x00, 0x02, 0xff, 0x0c, 0x10, 0x10},
  {16384000, 32000, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 8192000, 32000, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 6144000, 32000, 0x03, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 4096000, 32000, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 3072000, 32000, 0x03, 0x08, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 2048000, 32000, 0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 1536000, 32000, 0x03, 0x08, 0x01, 0x01, 0x01, 0x00, 0x7f, 0x02, 0x10, 0x10},
  { 1024000, 32000, 0x01, 0x08, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},

  // 44.1k
  {11289600, 44100, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 5644800, 44100, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 2822400, 44100, 0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 1411200, 44100, 0x01, 0x08, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},

  // 48k
  {12288000, 48000, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  {18432000, 48000, 0x03, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 6144000, 48000, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 3072000, 48000, 0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 1536000, 48000, 0x01, 0x08, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},

  // 64k
  {12288000, 64000, 0x03, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  {18432000, 64000, 0x03, 0x04, 0x03, 0x03, 0x01, 0x01, 0x7f, 0x06, 0x10, 0x10},
  {16384000, 64000, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 8192000, 64000, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 6144000, 64000, 0x01, 0x04, 0x03, 0x03, 0x01, 0x01, 0x7f, 0x06, 0x10, 0x10},
  { 4096000, 64000, 0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 3072000, 64000, 0x01, 0x08, 0x03, 0x03, 0x01, 0x01, 0x7f, 0x06, 0x10, 0x10},
  { 2048000, 64000, 0x01, 0x08, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 1536000, 64000, 0x01, 0x08, 0x01, 0x01, 0x01, 0x00, 0xbf, 0x03, 0x18, 0x18},
  { 1024000, 64000, 0x01, 0x08, 0x01, 0x01, 0x01, 0x00, 0x7f, 0x02, 0x10, 0x10},

  // 88.2k
  {11289600, 88200, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 5644800, 88200, 0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 2822400, 88200, 0x01, 0x08, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 1411200, 88200, 0x01, 0x08, 0x01, 0x01, 0x01, 0x00, 0x7f, 0x02, 0x10, 0x10},

  // 96k
  {12288000, 96000, 0x01, 0x02, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  {18432000, 96000, 0x03, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 6144000, 96000, 0x01, 0x04, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 3072000, 96000, 0x01, 0x08, 0x01, 0x01, 0x00, 0x00, 0xff, 0x04, 0x10, 0x10},
  { 1536000, 96000, 0x01, 0x08, 0x01, 0x01, 0x01, 0x00, 0x7f, 0x02, 0x10, 0x10},

    // clang-format on
};

}  // namespace es8311
}  // namespace esphome