/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSMethodSignature;

@interface NSInvocation : NSObject {

	void* _frame;
	void* _retdata;
	id _signature;
	id _container;
	unsigned char _retainedArgs;
	unsigned char _reserved[15];

}

@property (retain,readonly) NSMethodSignature * methodSignature; 
@property (readonly) char argumentsRetained; 
@property (assign) id target; 
@property (assign) SEL selector; 
+(id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2 ;
+(id)invocationWithMethodSignature:(id)arg1 ;
-(char)_hasBlockArgument;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)debugDescription;
-(void)invokeSuper;
-(void)_addAttachedObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(SEL)selector;
-(void)setArgument:(void*)arg1 atIndex:(int)arg2 ;
-(void)invoke;
-(void)retainArguments;
-(void)invokeWithTarget:(id)arg1 ;
-(void)getReturnValue:(void*)arg1 ;
-(NSMethodSignature *)methodSignature;
-(void)getArgument:(void*)arg1 atIndex:(int)arg2 ;
-(void)setReturnValue:(void*)arg1 ;
-(void)invokeUsingIMP:(/*function pointer*/void*)arg1 ;
-(char)argumentsRetained;
@end
