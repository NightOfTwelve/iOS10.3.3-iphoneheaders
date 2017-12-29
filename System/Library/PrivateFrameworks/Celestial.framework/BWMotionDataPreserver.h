/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString, NSMutableData;

@interface BWMotionDataPreserver : NSObject {

	NSString* _name;
	NSMutableData* _preservedISPMotionData;
	NSMutableData* _preservedISPHallData;

}
+(void)initialize;
-(void)dealloc;
-(void)reset;
-(id)initWithName:(id)arg1 ;
-(char)preserveMotionDataForSoonToBeDroppedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)prependPreservedMotionDataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)_preserveMotionDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 willBeDropped:(char)arg2 ;
@end
