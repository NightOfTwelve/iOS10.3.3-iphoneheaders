/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsStandingColumnView.h>

@class ACSportsLoadingImageView, SiriUIContentLabel, SASportsAthlete;

@interface ACSportsAthleteStandingView : ACSportsStandingColumnView {

	ACSportsLoadingImageView* _headShotView;
	SiriUIContentLabel* _namePlusTeamLabel;

}

@property (nonatomic,retain) SASportsAthlete * entity; 
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(void)statLabelMinXDidChange;
-(id)textForSnippetColumn:(id)arg1 ;
-(char)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)contentHeight;
@end

