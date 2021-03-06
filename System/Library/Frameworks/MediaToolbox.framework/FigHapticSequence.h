/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaToolbox/MediaToolbox-Structs.h>
@class AVHapticSequence;

@interface FigHapticSequence : NSObject {

	AVHapticSequence* _sequence;
	SCD_Struct_Fi12 _timeRange;
	SCD_Struct_Fi12 _outputTimeRange;

}

@property (nonatomic,retain) AVHapticSequence * sequence;                  //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi12 timeRange;                    //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi12 outputTimeRange;              //@synthesize outputTimeRange=_outputTimeRange - In the implementation block
-(void)dealloc;
-(void)setOutputTimeRange:(SCD_Struct_Fi12)arg1 ;
-(id)initWithSequence:(id)arg1 timeRange:(SCD_Struct_Fi12)arg2 outputTimeRange:(SCD_Struct_Fi12)arg3 ;
-(SCD_Struct_Fi12)outputTimeRange;
-(SCD_Struct_Fi12)timeRange;
-(void)setTimeRange:(SCD_Struct_Fi12)arg1 ;
-(AVHapticSequence *)sequence;
-(void)setSequence:(AVHapticSequence *)arg1 ;
@end

