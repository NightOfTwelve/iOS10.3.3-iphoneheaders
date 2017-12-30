/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:05 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONPostAdjust : NSObject {

	ABLEStaticMapInclusiveDomainVectorRange* _bonPostAdjustDoubleMap;

}

@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonPostAdjustDoubleMap;              //@synthesize bonPostAdjustDoubleMap=_bonPostAdjustDoubleMap - In the implementation block
+(id)bonPostAdjustWithJSONResource:(id)arg1 ;
+(id)bonPostAdjust;
+(id)bonPostAdjustWithArray:(id)arg1 ;
-(id)initBonPostAdjustWithDoubleMap:(id)arg1 ;
-(id)initBonPostAdjustWithJSONResource:(id)arg1 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonPostAdjustDoubleMap;
-(id)initBonPostAdjustWithArray:(id)arg1 ;
-(unsigned)adjustBON:(unsigned)arg1 forLevel:(float)arg2 ;
-(void)setBonPostAdjustDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
@end
