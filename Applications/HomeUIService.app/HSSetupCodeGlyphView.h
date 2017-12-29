/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface HSSetupCodeGlyphView : UIView {

	unsigned _style;

}

@property (assign,nonatomic) unsigned style;              //@synthesize style=_style - In the implementation block
-(void)transitionToStyle:(unsigned)arg1 pulse:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)_viewForStyle:(unsigned)arg1 ;
-(void)_prepareConstraintsForView:(id)arg1 ;
-(id)_logoImageView;
-(id)_successImageView;
-(id)_failureImageView;
-(id)_clearView;
-(id)init;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(void)pulse;
-(id)_activityIndicatorView;
@end
