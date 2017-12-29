/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSNotification.h>

@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {

	NSString* name;
	id object;
	NSDictionary* userInfo;
	char dyingObject;

}
+(id)newTempNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)dealloc;
-(id)name;
-(id)userInfo;
-(id)object;
-(void)recycle;
@end
