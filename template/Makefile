ARCHS = armv7 armv7s arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = @@PROJECTNAME@@

$(TWEAK_NAME)_FILES = Tweak.xm

$(TWEAK_NAME)_CFLAGS = -fobjc-arc
$(TWEAK_NAME)_CCFLAGS = -std=c++11 -fno-rtti
$(TWEAK_NAME)_LDFLAGS += -Wl,-segalign,4000,-lstdc++,r16Menu/libr16Menu.dylib

include $(THEOS_MAKE_PATH)/tweak.mk
