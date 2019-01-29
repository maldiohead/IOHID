/*
*
* @APPLE_LICENSE_HEADER_START@
*
* Copyright (c) 2017 Apple Computer, Inc.  All Rights Reserved.
*
* This file contains Original Code and/or Modifications of Original Code
* as defined in and that are subject to the Apple Public Source License
* Version 2.0 (the 'License'). You may not use this file except in
* compliance with the License. Please obtain a copy of the License at
* http://www.opensource.apple.com/apsl/ and read it before using this
* file.
*
* The Original Code and all software distributed under the License are
* distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
* EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
* INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
* Please see the License for the specific language governing rights and
* limitations under the License.
*
* @APPLE_LICENSE_HEADER_END@
*/

//
// DO NOT EDIT THIS FILE. IT IS AUTO-GENERATED
//

#ifndef _IOHIDEVENTSTRUCTDEFS_H
#define _IOHIDEVENTSTRUCTDEFS_H

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint16_t usagePage;
    uint16_t usage;
    uint32_t version;
    uint32_t length;
    uint8_t data[0];
} IOHIDVendorDefinedEventData;

typedef struct {
    IOHIDVendorDefinedEventData base;
} __IOHIDVendorDefinedEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
} IOHIDScaleEventData;

typedef struct {
    IOHIDScaleEventData base;
} __IOHIDScaleEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    struct {
        uint32_t reserved:15;
        uint32_t isCGSEvent:1;
    } options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t hotKey;
} IOHIDSymbolicHotKeyEventData;

typedef struct {
    IOHIDSymbolicHotKeyEventData base;
} __IOHIDSymbolicHotKeyEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    IOFixed level;
} IOHIDTemperatureEventData;

typedef struct {
    IOHIDTemperatureEventData base;
} __IOHIDTemperatureEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
    uint32_t motionType;
    uint32_t motionSubType;
    uint32_t motionSequence;
} IOHIDAccelerometerEventData;

typedef struct {
    IOHIDAccelerometerEventData base;
} __IOHIDAccelerometerEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
} IOHIDZoomToggleEventData;

typedef struct {
    IOHIDZoomToggleEventData base;
} __IOHIDZoomToggleEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t eventType;
    IOFixed level;
} IOHIDProgressEventData;

typedef struct {
    IOHIDProgressEventData base;
} __IOHIDProgressEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
} IOHIDGenericGestureEventData;

typedef struct {
    IOHIDGenericGestureEventData base;
    IOHIDGenericGestureType gestureType;
    union  {
        struct {
            uint32_t count;
        } tap;
        struct {
            IOFixed progress;
        } swipe;
    } type;
} __IOHIDGenericGestureEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    struct {
        uint32_t relative:1;
        uint32_t collection:1;
        uint32_t pixelUnits:1;
        uint32_t centerOrigin:1;
        uint32_t builtIn:1;
    } options;
    uint8_t depth;
    uint8_t reserved[3];
} IOHIDNULLEventData;

typedef struct {
    IOHIDNULLEventData base;
} __IOHIDNULLEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t level;
    uint32_t ch0;
    uint32_t ch1;
    uint32_t ch2;
    uint32_t ch3;
    Boolean brightnessChanged;
    IOHIDEventColorSpace colorSpace;
    IOHIDDouble colorComponent0;
    IOHIDDouble colorComponent1;
    IOHIDDouble colorComponent2;
} IOHIDAmbientLightSensorEventData;

typedef struct {
    IOHIDAmbientLightSensorEventData base;
    IOHIDDouble colorTemperature;
    IOHIDDouble illuminance;
} __IOHIDAmbientLightSensorEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    IOFixed measurement;
    uint32_t reserved1;
    uint32_t powerType;
    uint32_t powerSubType;
} IOHIDPowerEventData;

typedef struct {
    IOHIDPowerEventData base;
} __IOHIDPowerEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t behavior;
    IOFixed progress;
    uint32_t stage;
    IOFixed stageProgress;
} IOHIDForceEventData;

typedef struct {
    IOHIDForceEventData base;
} __IOHIDForceEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t gestureType;
    IOFixed progress;
} IOHIDMotionGestureEventData;

typedef struct {
    IOHIDMotionGestureEventData base;
} __IOHIDMotionGestureEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
} IOHIDCollectionEventData;

typedef struct {
    IOHIDCollectionEventData base;
} __IOHIDCollectionEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t controllerType;
    struct {
        IOFixed up;
        IOFixed down;
        IOFixed left;
        IOFixed right;
    } dpad;
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed a;
        IOFixed b;
    } face;
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
        IOFixed rz;
    } joystick;
    struct {
        IOFixed l1;
        IOFixed l2;
        IOFixed r1;
        IOFixed r2;
    } shoulder;
} IOHIDGameControllerEventData;

typedef struct {
    IOHIDGameControllerEventData base;
    uint32_t thumbstickButtonLeft:1;
    uint32_t thumbstickButtonRight:1;
} __IOHIDGameControllerEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
} IOHIDTranslationEventData;

typedef struct {
    IOHIDTranslationEventData base;
} __IOHIDTranslationEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    struct {
        uint32_t reserved0:1;
        uint32_t collection:1;
        uint32_t reserved15:14;
        uint32_t range:1;
        uint32_t touch:1;
        uint32_t reserved16:1;
        uint32_t displayIntegrated:1;
    } options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
    uint32_t transducerIndex;
    uint32_t transducerType;
    uint32_t identity;
    uint32_t eventMask;
    uint32_t childEventMask;
    uint32_t buttonMask;
    IOFixed pressure;
    IOFixed auxPressure;
    IOFixed twist;
    uint32_t orientationType;
    union  {
        struct {
            IOFixed x;
            IOFixed y;
        } tilt;
        struct {
            IOFixed altitude;
            IOFixed azimuth;
            IOFixed quality;
            IOFixed density;
            IOFixed majorRadius;
            IOFixed minorRadius;
        } polar;
        struct {
            IOFixed quality;
            IOFixed density;
            IOFixed irregularity;
            IOFixed majorRadius;
            IOFixed minorRadius;
            IOFixed accuracy;
        } quality;
    } orientation;
    uint32_t generationCount;
    uint32_t willUpdateMask;
    uint32_t didUpdateMask;
} IOHIDDigitizerEventData;

typedef struct {
    IOHIDDigitizerEventData base;
} __IOHIDDigitizerEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
    uint32_t motionType;
    uint32_t motionSubType;
    uint32_t motionSequence;
} IOHIDCompassEventData;

typedef struct {
    IOHIDCompassEventData base;
} __IOHIDCompassEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
} IOHIDRotationEventData;

typedef struct {
    IOHIDRotationEventData base;
} __IOHIDRotationEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t activityType;
    IOFixed confidence;
} IOHIDMotionActivityEventData;

typedef struct {
    IOHIDMotionActivityEventData base;
} __IOHIDMotionActivityEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
    struct {
        uint32_t mask;
    } button;
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } rotation;
} IOHIDMultiAxisPointerEventData;

typedef struct {
    IOHIDMultiAxisPointerEventData base;
} __IOHIDMultiAxisPointerEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    IOFixed currentBrightness;
    IOFixed targetBrightness;
    uint64_t transitionTime;
} IOHIDBrightnessEventData;

typedef struct {
    IOHIDBrightnessEventData base;
} __IOHIDBrightnessEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
    uint32_t motionType;
    uint32_t motionSubType;
    uint32_t motionSequence;
} IOHIDGyroEventData;

typedef struct {
    IOHIDGyroEventData base;
} __IOHIDGyroEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t mask;
    IOFixed pressure;
    uint8_t number;
    uint8_t clickCount;
    boolean_t state;
} IOHIDButtonEventData;

typedef struct {
    IOHIDButtonEventData base;
} __IOHIDButtonEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
    IOHIDSwipeMask swipeMask;
    IOHIDGestureMotion gestureMotion;
    IOHIDGestureFlavor flavor;
    IOFixed progress;
} IOHIDNavigationSwipeEventData;

typedef struct {
    IOHIDNavigationSwipeEventData base;
} __IOHIDNavigationSwipeEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    IOFixed level;
    uint32_t sequence;
} IOHIDAtmosphericPressureEventData;

typedef struct {
    IOHIDAtmosphericPressureEventData base;
} __IOHIDAtmosphericPressureEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    IOFixed rh;
    uint32_t sequence;
} IOHIDHumidityEventData;

typedef struct {
    IOHIDHumidityEventData base;
} __IOHIDHumidityEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
} IOHIDVelocityEventData;

typedef struct {
    IOHIDVelocityEventData base;
} __IOHIDVelocityEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    struct {
        uint32_t reserved:2;
        uint32_t pixelUnits:1;
    } options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
} IOHIDScrollEventData;

typedef struct {
    IOHIDScrollEventData base;
} __IOHIDScrollEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t eventType;
    IOFixed level;
    uint16_t usagePage;
    uint16_t usage;
    uint32_t reservedForFlags;
    uint8_t tapCount;
} IOHIDBiometricEventData;

typedef struct {
    IOHIDBiometricEventData base;
} __IOHIDBiometricEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed reserved;
    } position;
    IOHIDSwipeMask swipeMask;
    IOHIDGestureMotion gestureMotion;
    IOHIDGestureFlavor flavor;
    IOFixed progress;
} IOHIDBoundaryScrollEventData;

typedef struct {
    IOHIDBoundaryScrollEventData base;
} __IOHIDBoundaryScrollEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t mask;
    uint8_t number;
    boolean_t state;
} IOHIDLEDEventData;

typedef struct {
    IOHIDLEDEventData base;
} __IOHIDLEDEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    union  {
        struct {
            IOFixed x;
            IOFixed y;
            IOFixed z;
        } polar;
        struct {
            uint32_t usage;
        } deviceOrientation;
    } orientation;
} IOHIDOrientationEventData;

typedef struct {
    IOHIDOrientationEventData base;
    uint32_t orientationType;
} __IOHIDOrientationEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t detectionMask;
    uint32_t level;
} IOHIDProximityEventData;

typedef struct {
    IOHIDProximityEventData base;
} __IOHIDProximityEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed reserved;
    } position;
    IOHIDSwipeMask swipeMask;
    IOHIDGestureMotion gestureMotion;
    IOHIDGestureFlavor flavor;
    IOFixed progress;
} IOHIDFluidTouchGestureEventData;

typedef struct {
    IOHIDFluidTouchGestureEventData base;
} __IOHIDFluidTouchGestureEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
    IOHIDSwipeMask swipeMask;
    IOHIDGestureMotion gestureMotion;
    IOHIDGestureFlavor flavor;
    IOFixed progress;
} IOHIDDockSwipeEventData;

typedef struct {
    IOHIDDockSwipeEventData base;
} __IOHIDDockSwipeEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    uint32_t encoding;
    IOFixed quality;
    uint32_t length;
    uint8_t payload[0];
} IOHIDUnicodeEventData;

typedef struct {
    IOHIDUnicodeEventData base;
} __IOHIDUnicodeEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    struct {
        uint32_t reserved:15;
        uint32_t repeat:1;
        uint32_t reserved2:16;
    } options;
    uint8_t depth;
    uint8_t reserved[3];
    uint16_t usagePage;
    uint16_t usage;
    boolean_t down;
    struct {
        uint32_t longPress:1;
        uint32_t clickSpeed:2;
        uint32_t slowKeyPhase:2;
        uint32_t mouseKeyToggle:1;
        uint32_t stickyKeyPhase:3;
        uint32_t stickyKeyToggle:2;
        uint32_t reserved3:19;
    } ;
    uint8_t pressCount;
} IOHIDKeyboardEventData;

typedef struct {
    IOHIDKeyboardEventData base;
} __IOHIDKeyboardEventData;

typedef struct {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
    struct {
        IOFixed x;
        IOFixed y;
        IOFixed z;
    } position;
    struct {
        uint32_t mask;
    } button;
} IOHIDPointerEventData;

typedef struct {
    IOHIDPointerEventData base;
} __IOHIDPointerEventData;

#endif
