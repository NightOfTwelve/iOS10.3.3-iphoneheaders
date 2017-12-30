/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol ASCategoriesNavigationControllerAppearanceDelegate;
@interface ASCategoriesNavigationController : UINavigationController {

	char _pendingClear;
	id<ASCategoriesNavigationControllerAppearanceDelegate> _appearanceDelegate;

}

@property (assign,nonatomic) char pendingClear;                                                                             //@synthesize pendingClear=_pendingClear - In the implementation block
@property (assign,nonatomic,__weak) id<ASCategoriesNavigationControllerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
-(char)pendingClear;
-(void)setAppearanceDelegate:(id<ASCategoriesNavigationControllerAppearanceDelegate>)arg1 ;
-(id<ASCategoriesNavigationControllerAppearanceDelegate>)appearanceDelegate;
-(void)setPendingClear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
@end
