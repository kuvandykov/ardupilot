#pragma once

#include "AP_RangeFinder_Benewake.h"

#define TFMINI_ADDR_DEFAULT              0x10        // TFMini default device id

class AP_RangeFinder_Benewake_TFMini : public AP_RangeFinder_Benewake
{
public:
    using AP_RangeFinder_Benewake::AP_RangeFinder_Benewake;

protected:
    float model_dist_max_cm() const override { return 1200; }
};
