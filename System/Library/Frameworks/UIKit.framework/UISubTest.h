/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSMutableArray, NSString, NSMutableDictionary;

@interface UISubTest : NSObject {

	NSNumber* _startTime;
	NSNumber* _startFrame;
	NSMutableArray* _time;
	NSMutableArray* _fps;
	NSString* _testName;
	char _showTime;
	char _showFps;
	NSMutableDictionary* _data;

}

@property (readonly) NSNumber * startTime;              //@synthesize startTime=_startTime - In the implementation block
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithName:(id)arg1 metrics:(id)arg2 ;
-(void)startWithFrameCount:(id)arg1 ;
-(NSNumber *)startTime;
-(void)stopWithFrameCount:(id)arg1 ;
-(id)getObjectForKey:(id)arg1 ;
-(id)outputData;
@end
