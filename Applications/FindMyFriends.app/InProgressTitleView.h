/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface InProgressTitleView : UIView {

	NSString* _progressLabel;
	UILabel* _inProgressLabel;

}

@property (nonatomic,retain) UILabel * inProgressLabel;              //@synthesize inProgressLabel=_inProgressLabel - In the implementation block
@property (nonatomic,copy) NSString * progressLabel;                 //@synthesize progressLabel=_progressLabel - In the implementation block
-(UILabel *)inProgressLabel;
-(void)setInProgressLabel:(UILabel *)arg1 ;
-(void)setProgressLabel:(NSString *)arg1 ;
-(NSString *)progressLabel;
@end
