/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKBasePod.h>

@class NSMutableArray, SiriGKAlternateResultHeaderView;

@interface SiriGKAlternateResultsPod : SiriGKBasePod {

	NSMutableArray* _viewArray;
	SiriGKAlternateResultHeaderView* _headerView;

}
-(id)initWithPod:(id)arg1 ;
-(id)headerView;
-(id)viewAtIndex:(int)arg1 ;
-(int)viewCount;
-(UIEdgeInsets)headerInsets;
-(int)keylineType;
@end

