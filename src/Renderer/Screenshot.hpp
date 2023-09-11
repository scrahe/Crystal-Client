#pragma once

#include "../CrystalProfile.hpp"
#include <CoreGraphics/CoreGraphics.h>
#include <ImageIO/ImageIO.h>
#include <CoreServices/CoreServices.h>

class Screenshot {
    public:
        static Screenshot create();
        void saveImage(bool toClipboard);

    protected:
        CGImageRef CGImageFromCCImage(CCImage* img);
        bool CGImageWriteToFile(CGImageRef image);
};