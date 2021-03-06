/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICImageAttachmentView.h>

@class CALayer, UIImage;

@interface ICMovieAttachmentView : ICImageAttachmentView {

	char _icaxIsShowingPlayer;
	CALayer* playButtonLayer;
	UIImage* playButtonImage;
	CGRect _playButtonFrame;

}

@property (nonatomic,retain) CALayer * playButtonLayer; 
@property (nonatomic,retain) UIImage * playButtonImage; 
@property (assign,nonatomic) CGRect playButtonFrame;                 //@synthesize playButtonFrame=_playButtonFrame - In the implementation block
@property (assign,nonatomic) char icaxIsShowingPlayer;               //@synthesize icaxIsShowingPlayer=_icaxIsShowingPlayer - In the implementation block
-(void)sharedInit;
-(void)didTapAttachment:(id)arg1 ;
-(id)icaxHintString;
-(void)updateImageSize;
-(char)supportsFreeTransformGesture;
-(void)setPlayButtonImage:(UIImage *)arg1 ;
-(void)setPlayButtonLayer:(CALayer *)arg1 ;
-(CALayer *)playButtonLayer;
-(void)setPlayButtonFrame:(CGRect)arg1 ;
-(char)shouldPlayFullscreenOnly;
-(CGRect)playButtonFrame;
-(char)icaxIsShowingPlayer;
-(void)setIcaxIsShowingPlayer:(char)arg1 ;
-(id)accessibilityLabel;
-(UIImage *)playButtonImage;
-(void)didChangeAttachment;
-(void)didChangeMedia;
-(void)willDeleteAttachment;
@end

