/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface CRIndexPathDiff : NSObject {

	NSDictionary* _moves;
	NSDictionary* _swaps;
	NSArray* _endState;
	NSArray* _startingState;
	NSArray* _drawerState;

}

@property (nonatomic,retain) NSArray * endState;                   //@synthesize endState=_endState - In the implementation block
@property (nonatomic,retain) NSArray * startingState;              //@synthesize startingState=_startingState - In the implementation block
@property (nonatomic,retain) NSArray * drawerState;                //@synthesize drawerState=_drawerState - In the implementation block
@property (nonatomic,readonly) NSDictionary * moves;               //@synthesize moves=_moves - In the implementation block
@property (nonatomic,readonly) NSDictionary * swaps;               //@synthesize swaps=_swaps - In the implementation block
+(id)diffWithDesiredEndState:(id)arg1 fromStartingState:(id)arg2 drawerState:(id)arg3 ;
-(NSArray *)drawerState;
-(NSDictionary *)moves;
-(NSDictionary *)swaps;
-(NSArray *)startingState;
-(void)_calculateDiff;
-(void)setDrawerState:(NSArray *)arg1 ;
-(void)setStartingState:(NSArray *)arg1 ;
-(id)_indexPathForItemInEndState:(id)arg1 ;
-(void)_enumerateIconArray:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSArray *)endState;
-(void)setEndState:(NSArray *)arg1 ;
@end

