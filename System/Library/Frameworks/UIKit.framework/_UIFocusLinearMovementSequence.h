/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject {

	char _looping;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSArray * items;                       //@synthesize items=_items - In the implementation block
@property (getter=isLooping,nonatomic,readonly) char looping;              //@synthesize looping=_looping - In the implementation block
+(id)sequenceWithItems:(id)arg1 loops:(char)arg2 ;
-(id)init;
-(NSArray *)items;
-(char)isLooping;
-(id)initWithItems:(id)arg1 loops:(char)arg2 ;
@end

