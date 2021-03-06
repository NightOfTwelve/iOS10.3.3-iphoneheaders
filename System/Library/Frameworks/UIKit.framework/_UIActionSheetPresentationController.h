/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPopoverPresentationController.h>
#import <UIKit/_UIActionSheetCompactPresentationControllerDelegate.h>

@protocol UIActionSheetPresentationControllerDelegate;
@class NSString, _UIActionSheetCompactPresentationController;

@interface _UIActionSheetPresentationController : UIPopoverPresentationController <_UIActionSheetCompactPresentationControllerDelegate> {

	char _dismissActionUsesShorterHeightWhenCompactVertically;
	NSString* _dismissActionTitle;
	id<UIActionSheetPresentationControllerDelegate> _actionSheetDelegate;
	_UIActionSheetCompactPresentationController* _compactPresentationController;

}

@property (nonatomic,retain) _UIActionSheetCompactPresentationController * compactPresentationController;              //@synthesize compactPresentationController=_compactPresentationController - In the implementation block
@property (nonatomic,copy) NSString * dismissActionTitle;                                                              //@synthesize dismissActionTitle=_dismissActionTitle - In the implementation block
@property (assign,nonatomic) char dismissActionUsesShorterHeightWhenCompactVertically;                                 //@synthesize dismissActionUsesShorterHeightWhenCompactVertically=_dismissActionUsesShorterHeightWhenCompactVertically - In the implementation block
@property (assign,nonatomic,__weak) id<UIActionSheetPresentationControllerDelegate> actionSheetDelegate;               //@synthesize actionSheetDelegate=_actionSheetDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)_shouldPresentedViewControllerControlStatusBarAppearance;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)setDismissActionTitle:(NSString *)arg1 ;
-(void)setActionSheetDelegate:(id<UIActionSheetPresentationControllerDelegate>)arg1 ;
-(_UIActionSheetCompactPresentationController *)compactPresentationController;
-(id)_visualStyleForTraitCollection:(id)arg1 ;
-(void)setCompactPresentationController:(_UIActionSheetCompactPresentationController *)arg1 ;
-(NSString *)dismissActionTitle;
-(void)setDismissActionUsesShorterHeightWhenCompactVertically:(char)arg1 ;
-(id)_compactPresentationController;
-(int)_presentationContextForViewController:(id)arg1 ;
-(void)actionSheetCompactPresentationControllerDidDismiss:(id)arg1 ;
-(id<UIActionSheetPresentationControllerDelegate>)actionSheetDelegate;
-(char)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)arg1 ;
-(id)_exceptionStringForNilSourceViewOrBarButtonItem;
-(char)dismissActionUsesShorterHeightWhenCompactVertically;
@end

