/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class MFBarButtonBadgeView;

@interface MFUnreadCountBarButtonView : UIView {

	char _shouldOffsetView;
	MFBarButtonBadgeView* _badgeView;

}

@property (nonatomic,retain) MFBarButtonBadgeView * badgeView;              //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic) char shouldOffsetView;                         //@synthesize shouldOffsetView=_shouldOffsetView - In the implementation block
-(void)setShouldOffsetView:(char)arg1 ;
-(char)shouldOffsetView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MFBarButtonBadgeView *)badgeView;
-(void)setBadgeView:(MFBarButtonBadgeView *)arg1 ;
@end

