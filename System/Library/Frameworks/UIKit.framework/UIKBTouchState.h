/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIWindow, NSUUID;

@interface UIKBTouchState : NSObject <NSCopying> {

	int _phase;
	UIWindow* _window;
	float _pathMajorRadius;
	unsigned _pathIndex;
	NSUUID* _touchUUID;
	double _timestamp;
	CGPoint _locationInWindow;

}

@property (nonatomic,readonly) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) int phase;                             //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow;              //@synthesize locationInWindow=_locationInWindow - In the implementation block
@property (nonatomic,readonly) float pathMajorRadius;                 //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (nonatomic,readonly) unsigned pathIndex;                    //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) NSUUID * touchUUID;                    //@synthesize touchUUID=_touchUUID - In the implementation block
+(id)touchUUIDForTouch:(id)arg1 ;
+(id)touchForTouchUUID:(id)arg1 ;
+(id)touchesForTouchUUIDs:(id)arg1 ;
+(id)touchUUIDsForTouches:(id)arg1 ;
+(void)releaseUUIDForTouch:(id)arg1 ;
+(id)touchStateForTouch:(id)arg1 ;
+(id)touchStateForTouchUUID:(id)arg1 withTimestamp:(double)arg2 phase:(int)arg3 location:(CGPoint)arg4 pathIndex:(unsigned char)arg5 inView:(id)arg6 ;
-(CGPoint)locationInView:(id)arg1 ;
-(int)phase;
-(void)dealloc;
-(UIWindow *)window;
-(id)description;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)locationInWindow;
-(NSUUID *)touchUUID;
-(float)pathMajorRadius;
-(unsigned)pathIndex;
@end

