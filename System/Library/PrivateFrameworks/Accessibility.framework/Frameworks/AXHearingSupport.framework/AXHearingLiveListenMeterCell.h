/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSArray;

@interface AXHearingLiveListenMeterCell : PSTableCell {

	NSArray* _dotImageViews;

}

@property (nonatomic,retain) NSArray * dotImageViews;              //@synthesize dotImageViews=_dotImageViews - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSpecifier:(id)arg1 ;
-(void)setDotImageViews:(NSArray *)arg1 ;
-(void)audioLevelDidChange:(float)arg1 ;
-(void)setMeterLevel:(int)arg1 ;
-(NSArray *)dotImageViews;
@end

