/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface _SBModalViewControllerStackTransition : NSObject {

	UIViewController* _viewController;
	unsigned _operation;
	char _animated;
	/*^block*/id _completion;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) unsigned operation;                             //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) char animated;                                  //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
+(id)transitionForViewController:(id)arg1 operation:(unsigned)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)invokeCompletionIfNecessaryWithResult:(char)arg1 ;
-(id)description;
-(unsigned)operation;
-(void)setOperation:(unsigned)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(char)animated;
-(UIViewController *)viewController;
-(void)setAnimated:(char)arg1 ;
@end

