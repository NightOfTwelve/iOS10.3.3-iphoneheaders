/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Presenter.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class NSString;

@interface ModalPresenter : Presenter <UIAdaptivePresentationControllerDelegate> {

	char _presentsViewControllerInNavigationController;
	int _adaptivePresentationStyle;
	int _presentationStyle;
	/*^block*/id _navigationControllerCreationBlock;

}

@property (assign,nonatomic) int presentationStyle;                                          //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) int adaptivePresentationStyle;                                  //@synthesize adaptivePresentationStyle=_adaptivePresentationStyle - In the implementation block
@property (assign,nonatomic) char presentsViewControllerInNavigationController;              //@synthesize presentsViewControllerInNavigationController=_presentsViewControllerInNavigationController - In the implementation block
@property (nonatomic,copy) id navigationControllerCreationBlock;                             //@synthesize navigationControllerCreationBlock=_navigationControllerCreationBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)defaultPresentationIsOpaque;
-(id)initWithPresentedViewController:(id)arg1 dismissalBlock:(/*^block*/id)arg2 ;
-(void)_performPresentationOfViewController:(id)arg1 fromViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performDismissalAnimated:(char)arg1 ;
-(void)willPresentViewControllerAnimated:(char)arg1 ;
-(void)setAdaptivePresentationStyle:(int)arg1 ;
-(char)presentsViewControllerInNavigationController;
-(void)setPresentsViewControllerInNavigationController:(char)arg1 ;
-(id)navigationControllerCreationBlock;
-(void)setNavigationControllerCreationBlock:(id)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(int)presentationStyle;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(int)adaptivePresentationStyle;
@end

