/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface SBReverseCountedSemaphore : NSObject {

	NSObject*<OS_dispatch_group> _group;

}
-(void)increment;
-(id)init;
-(void)decrement;
-(void)wait;
@end
