/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:05 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ABLEVectorModel;

@interface ABLETimeSeriesModel : NSObject {

	NSArray* _filter;
	ABLEVectorModel* _vectorModel;
	double _period;

}

@property (readonly) ABLEVectorModel * vectorModel;              //@synthesize vectorModel=_vectorModel - In the implementation block
@property (readonly) NSArray * filter;                           //@synthesize filter=_filter - In the implementation block
@property (readonly) double period;                              //@synthesize period=_period - In the implementation block
+(id)modelWithPeriod:(double)arg1 andFilter:(id)arg2 ;
-(id)predictSingle:(id)arg1 ;
-(id)predictAll:(id)arg1 ;
-(id)initWithPeriod:(double)arg1 andFilter:(id)arg2 ;
-(ABLEVectorModel *)vectorModel;
-(double)period;
-(NSArray *)filter;
@end

