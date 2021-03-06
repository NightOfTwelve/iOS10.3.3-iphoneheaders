/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:05 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ABLEVectorModel : NSObject {

	NSArray* _filter;

}

@property (readonly) NSArray * filter;              //@synthesize filter=_filter - In the implementation block
+(id)modelWithFilter:(id)arg1 ;
-(double)predictSingle:(id)arg1 forOffset:(int)arg2 ;
-(id)predictSequence:(id)arg1 forTimes:(id)arg2 ;
-(double)predictSingle:(id)arg1 ;
-(id)predictAll:(id)arg1 ;
-(NSArray *)filter;
-(id)initWithFilter:(id)arg1 ;
@end

