/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSString, NSError, HSSetupCodeGlyphView, UILabel, NSObject, NSArray;

@interface HSSetupStatusView : UIView {

	char _automaticallyAddsTopMargin;
	unsigned _state;
	NSString* _accessoryName;
	NSString* _subtitleText;
	NSError* _pairingError;
	HSSetupCodeGlyphView* _glyphView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSObject*<OS_dispatch_queue> _updateStateSerialQueue;
	NSObject*<OS_dispatch_semaphore> _updateStateSemaphore;
	NSArray* _constraints;

}

@property (nonatomic,retain) HSSetupCodeGlyphView * glyphView;                                   //@synthesize glyphView=_glyphView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> updateStateSerialQueue;                //@synthesize updateStateSerialQueue=_updateStateSerialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> updateStateSemaphore;              //@synthesize updateStateSemaphore=_updateStateSemaphore - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                              //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) unsigned state;                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * accessoryName;                                           //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                              //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) NSError * pairingError;                                             //@synthesize pairingError=_pairingError - In the implementation block
@property (assign,nonatomic) char automaticallyAddsTopMargin;                                    //@synthesize automaticallyAddsTopMargin=_automaticallyAddsTopMargin - In the implementation block
+(char)requiresConstraintBasedLayout;
-(id)initWithInitialViewState:(unsigned)arg1 ;
-(void)setAutomaticallyAddsTopMargin:(char)arg1 ;
-(void)_updateGlyphAnimated:(char)arg1 ;
-(NSError *)pairingError;
-(void)updateStateAnimated:(unsigned)arg1 accessoryName:(id)arg2 subtitleText:(id)arg3 pairingError:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)updateStateSerialQueue;
-(NSObject*<OS_dispatch_semaphore>)updateStateSemaphore;
-(void)_hideViews;
-(void)_showViews;
-(char)automaticallyAddsTopMargin;
-(id)_errorSubtitleForUnrecoverableFailure;
-(void)setPairingError:(NSError *)arg1 ;
-(void)setUpdateStateSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUpdateStateSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSArray *)constraints;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(id)viewForLastBaselineLayout;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleText:(NSString *)arg1 ;
-(HSSetupCodeGlyphView *)glyphView;
-(void)setGlyphView:(HSSetupCodeGlyphView *)arg1 ;
-(void)_updateText;
-(NSString *)accessoryName;
-(NSString *)subtitleText;
@end

