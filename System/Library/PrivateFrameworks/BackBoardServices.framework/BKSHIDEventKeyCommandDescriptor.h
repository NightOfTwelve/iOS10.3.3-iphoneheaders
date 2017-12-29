/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDescriptor.h>

@class NSString;

@interface BKSHIDEventKeyCommandDescriptor : BKSHIDEventDescriptor {

	NSString* _input;
	int _modifierFlags;
	NSString* _unmodifiedInput;
	NSString* _shiftModifiedInput;
	NSString* _commandModifiedInput;

}

@property (nonatomic,retain) NSString * unmodifiedInput;                   //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * shiftModifiedInput;                //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * commandModifiedInput;              //@synthesize commandModifiedInput=_commandModifiedInput - In the implementation block
@property (nonatomic,retain,readonly) NSString * input;                    //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) int modifierFlags;                          //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) char isTextualDescriptor; 
+(char)_keyCodeIsModifierKey:(long)arg1 ;
+(id)keyCommandDescriptorForEvent:(IOHIDEventRef)arg1 gsKeyboard:(GSKeyboardRef)arg2 ;
+(char)_shouldMatchKeyCommandsWithKeyCode:(long)arg1 gsKeyboard:(GSKeyboardRef)arg2 ;
+(id)descriptorWithInput:(id)arg1 modifierFlags:(int)arg2 ;
+(char)supportsSecureCoding;
-(id)initWithInput:(id)arg1 modifierFlags:(int)arg2 ;
-(NSString *)commandModifiedInput;
-(void)setCommandModifiedInput:(NSString *)arg1 ;
-(char)isTextualDescriptor;
-(int)describes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)input;
-(int)modifierFlags;
-(void)setUnmodifiedInput:(NSString *)arg1 ;
-(void)setShiftModifiedInput:(NSString *)arg1 ;
-(NSString *)unmodifiedInput;
-(NSString *)shiftModifiedInput;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
