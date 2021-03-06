/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackSegment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment <NSSecureCoding> {

	AVCompositionTrackSegmentInternal* _priv;

}

@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (nonatomic,readonly) NSURL * sourceURL; 
@property (nonatomic,readonly) int sourceTrackID; 
+(char)supportsSecureCoding;
+(id)compositionTrackSegmentWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_AV3)arg3 targetTimeRange:(SCD_Struct_AV3)arg4 ;
+(id)compositionTrackSegmentWithTimeRange:(SCD_Struct_AV3)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)isEmpty;
-(int)sourceTrackID;
-(id)initWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_AV3)arg3 targetTimeRange:(SCD_Struct_AV3)arg4 ;
-(id)initWithTimeRange:(SCD_Struct_AV3)arg1 ;
-(id)_initWithTimeMapping:(SCD_Struct_CM5)arg1 ;
-(NSURL *)sourceURL;
-(void)finalize;
@end

