/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSUTunTimingEvent.h>

@class NSString;

@interface IDSUTunTimingEventOutgoing : NSObject <IDSUTunTimingEvent> {

	double _timestamp;
	double _duration;
	double _processTime;
	double _compressionTime;
	double _sendTime;
	long _bytes;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(void)appendToString:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 duration:(double)arg2 processTime:(double)arg3 compressionTime:(double)arg4 sendTime:(double)arg5 bytes:(long)arg6 ;
-(double)timestamp;
@end

