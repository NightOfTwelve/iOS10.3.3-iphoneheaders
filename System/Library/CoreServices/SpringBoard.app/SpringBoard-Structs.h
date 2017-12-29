/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct __GSEvent* GSEventRef;

typedef struct {
	char field1;
	char field2;
	char field3;
	char field4;
	char field5;
	float field6;
	int field7;
} SCD_Struct_SB6;

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	float value;
	char inclusive;
} SCD_Struct_SB9;

typedef struct {
	SCD_Struct_SB9 start;
	SCD_Struct_SB9 end;
} SCD_Struct_SB10;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct __CFString* CFStringRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct tcp_connection_fallback_watch_s* tcp_connection_fallback_watch_sRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_SB15;

typedef struct CGColor* CGColorRef;

typedef struct {
	float field1;
	SCD_Struct_SB10 field2;
	int field3;
} SCD_Struct_SB17;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	int field6;
} SCD_Struct_SB18;

typedef struct {
	unsigned field1;
} SCD_Struct_SB19;

typedef struct {
	SCD_Struct_SB18 field1;
	SCD_Struct_SB19 field2;
} SCD_Struct_SB20;

typedef struct {
	unsigned field1[8];
} SCD_Struct_SB21;

typedef struct {
	double field1;
	double field2;
	double field3;
	char field4;
	char field5;
	int field6;
	int field7;
} SCD_Struct_SB22;

typedef struct {
	int startStyle;
	int endStyle;
	float transitionFraction;
} SCD_Struct_SB23;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct {
	float field1;
	__CFArray field2;
	float field3;
} SCD_Struct_SB29;

typedef struct {
	float value;
	SCD_Struct_SB10 interval;
	int mode;
} SCD_Struct_SB30;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	unsigned field1;
	unsigned field2;
	float field3;
} SCD_Struct_SB32;

typedef struct {
	int field1;
	CGPoint field2;
	CGPoint field3;
} SCD_Struct_SB33;

typedef struct BKSDisplayBrightnessTransaction* BKSDisplayBrightnessTransactionRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_SB35;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	char valid;
	SCD_Struct_SB23 styleTransitionState;
} SCD_Struct_SB37;

typedef struct {
	char field1;
	SCD_Struct_SB23 field2;
} SCD_Struct_SB38;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct __CFArray* CFArrayRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct SBNormalizedTransitionInterval {
	float start;
	float duration;
} SBNormalizedTransitionInterval;

typedef struct _CARenderImage* CARenderImageRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
} SCD_Struct_SB45;

typedef struct CGImage* CGImageRef;

typedef struct SBIconCoordinate {
	int row;
	int col;
} SBIconCoordinate;

typedef struct {
	char itemIsEnabled[35];
	char timeString[64];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	char serviceString[100];
	char serviceCrossfadeString[100];
	char serviceImages[2][100];
	char operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	char batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	char activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
	unsigned batterySaverModeActive : 1;
	unsigned deviceIsRTL : 1;
	unsigned lock : 1;
	char breadcrumbTitle[256];
	char breadcrumbSecondaryTitle[256];
	char personName[100];
	unsigned electronicTollCollectionAvailable : 1;
	unsigned wifiLinkWarning : 1;
} SCD_Struct_SB48;

typedef struct SBWindowLevelRange_struct {
	float start;
	float end;
} SBWindowLevelRange_struct;
