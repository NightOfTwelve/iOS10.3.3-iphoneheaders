/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSLayoutConstraint, CHRecentCall, UILabel, UIDateLabel, UIImageView;

@interface MPRecentsTableViewCell : UITableViewCell {

	NSDictionary* _allViewsDictionary;
	long _buildConstraintsOnceToken;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _dateConstraint;
	NSLayoutConstraint* _dateYConstraint;
	NSLayoutConstraint* _labelConstraint;
	CHRecentCall* _call;
	UILabel* _callerCountLabel;
	UIDateLabel* _callerDateLabel;
	UILabel* _callerLabelLabel;
	UILabel* _callerNameLabel;
	UIImageView* _callTypeIconView;

}

@property (nonatomic,retain) UILabel * callerCountLabel;                  //@synthesize callerCountLabel=_callerCountLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * callerDateLabel;               //@synthesize callerDateLabel=_callerDateLabel - In the implementation block
@property (nonatomic,retain) UILabel * callerLabelLabel;                  //@synthesize callerLabelLabel=_callerLabelLabel - In the implementation block
@property (nonatomic,retain) UILabel * callerNameLabel;                   //@synthesize callerNameLabel=_callerNameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * callTypeIconView;              //@synthesize callTypeIconView=_callTypeIconView - In the implementation block
@property (readonly) int count; 
@property (readonly) NSDictionary * allViews; 
@property (readonly) NSDictionary * allMetrics; 
@property (nonatomic,retain) CHRecentCall * call;                         //@synthesize call=_call - In the implementation block
+(id)allMetrics;
+(id)_sharedTTYDirectImage;
+(id)_sharedTTYRelayImage;
+(id)_sharedOutgoingCallImage;
+(id)_sharedOutgoingFaceTimeImage;
+(float)editingMarginWidth;
+(float)minimumRowHeight;
+(float)marginWidth;
-(void)_handleContentSizeDidChange:(id)arg1 ;
-(NSDictionary *)allMetrics;
-(NSDictionary *)allViews;
-(UILabel *)callerCountLabel;
-(void)setCallerCountLabel:(UILabel *)arg1 ;
-(UIDateLabel *)callerDateLabel;
-(void)setCallerDateLabel:(UIDateLabel *)arg1 ;
-(UILabel *)callerLabelLabel;
-(void)setCallerLabelLabel:(UILabel *)arg1 ;
-(UILabel *)callerNameLabel;
-(void)setCallerNameLabel:(UILabel *)arg1 ;
-(UIImageView *)callTypeIconView;
-(void)setCallTypeIconView:(UIImageView *)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(int)count;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)commonInit;
-(void)_buildConstraints;
-(void)_updateConstraints;
-(CHRecentCall *)call;
-(void)_updateFonts;
-(void)setCall:(CHRecentCall *)arg1 ;
@end

