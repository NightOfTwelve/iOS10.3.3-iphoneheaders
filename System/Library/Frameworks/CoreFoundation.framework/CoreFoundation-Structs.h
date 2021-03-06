/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CFXNotificationRegistrationBase;

typedef struct __CFString* CFStringRef;

typedef struct {
	int field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
	/*function pointer*/void* field6;
} SCD_Struct_CF1;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFSet* CFSetRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	/*function pointer*/void* elements;
	__CFNull empty;
	_CFXNotificationRegistrationBase* child;
	__CFDictionary) children;
	void singleChildKey;
	/*function pointer*/void* callbacks;
} SCD_Struct_CF7;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	id field1;
	int field2;
	unsigned field3;
	char field4;
} SCD_Struct_CF9;

typedef struct {
	SCD_Struct_CF9 field1;
	SCD_Struct_CF9 field2;
} SCD_Struct_CF10;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	int field1;
	void field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_NS12;

typedef struct {
	char field1;
	char field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
} SCD_Struct_NS13;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_NS14;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct __CFURL* CFURLRef;

typedef struct {
	int version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_CF17;

typedef union {
	/*function pointer*/void* _rcb;
	/*function pointer*/void* _wcb;
	/*function pointer*/void* genericCallback;
	void genericPointer;
} SCD_Union_CF18;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_NS20;

typedef struct os_lock_handoff_s {
	_os_lock_type_handoff_s osl_type;
	unsigned long _osl_handoff_opaque[1];
} os_lock_handoff_s;

typedef struct {
	NSMethodFrameArgInfo field1;
	NSMethodFrameArgInfo field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_NS22;

typedef struct __CFData* CFDataRef;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	int field5;
	id field6;
	id field7;
	id field8;
} SCD_Struct_NS24;

typedef struct CFPrefsShmemEntry {
	Ai owner;
	AI generation;
} CFPrefsShmemEntry;

typedef union {
	CFPrefsShmemEntry entry;
	AQ value;
} SCD_Union_CF26;

typedef struct __CFBasicHash* CFBasicHashRef;

typedef struct _filesec* filesecRef;

typedef struct _acl* aclRef;

