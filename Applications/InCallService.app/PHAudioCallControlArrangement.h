/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PHAudioCallControlArrangement : NSObject {

	NSArray* _controlTypes;

}

@property (retain) NSArray * controlTypes;                    //@synthesize controlTypes=_controlTypes - In the implementation block
@property (nonatomic,readonly) unsigned rows; 
@property (nonatomic,readonly) unsigned columns; 
+(id)defaultControlTypes;
+(id)defaultMultipleCallControlTypes;
-(NSArray *)controlTypes;
-(id)_replaceControlsOfType:(unsigned)arg1 withControlOfType:(unsigned)arg2 ;
-(void)setControlTypes:(NSArray *)arg1 ;
-(id)initWithControlTypes:(id)arg1 ;
-(unsigned)controlTypeAtRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(void)replaceControlsOfType:(unsigned)arg1 withControlOfType:(unsigned)arg2 ;
-(unsigned)rows;
-(unsigned)columns;
@end
