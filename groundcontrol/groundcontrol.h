#pragma once

#ifndef GROUNDCONTROL_H
#define GROUNDCONTROL_H

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
  k00, k01, k02, k03, k04, \
  k10, k11, k12, k13, k14, \
  k20, k21, k22, k23, k24, \
  k30, k31, k32, k33, k34 \
) { \
  { XXX, k01, k02, k03, k04 }, \
  { XXX, k11, k12, k13, k14 }, \
  { XXX, k21, k22, k23, k24 }, \
  { k30, k31, k32, k33, k34 } \
}

#endif