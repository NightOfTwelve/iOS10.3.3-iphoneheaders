/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@class ICTextController, ICNote, ICLayoutManager, ICTextView, NSString;

@interface ICTextViewController : UIViewController <NSLayoutManagerDelegate> {

	ICTextController* _textController;
	ICNote* _note;
	float _initialContainerWidth;
	/*^block*/id _splitViewControllerDidTransitionToSizeHandler;
	/*^block*/id _splitViewControllerDidEndAnimatedTransitionToStateRequestHandler;

}

@property (nonatomic,retain) ICNote * note;                                                                  //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) ICTextController * textController;                                              //@synthesize textController=_textController - In the implementation block
@property (assign,nonatomic) float initialContainerWidth;                                                    //@synthesize initialContainerWidth=_initialContainerWidth - In the implementation block
@property (nonatomic,readonly) ICLayoutManager * layoutManager; 
@property (nonatomic,copy) id splitViewControllerDidTransitionToSizeHandler;                                 //@synthesize splitViewControllerDidTransitionToSizeHandler=_splitViewControllerDidTransitionToSizeHandler - In the implementation block
@property (nonatomic,copy) id splitViewControllerDidEndAnimatedTransitionToStateRequestHandler;              //@synthesize splitViewControllerDidEndAnimatedTransitionToStateRequestHandler=_splitViewControllerDidEndAnimatedTransitionToStateRequestHandler - In the implementation block
@property (nonatomic,readonly) ICTextView * textView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTextViewUsingTextController:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(char)arg2 note:(id)arg3 containerWidth:(float)arg4 ;
-(id)editorController;
-(void)setTextController:(ICTextController *)arg1 ;
-(void)setInitialContainerWidth:(float)arg1 ;
-(void)splitViewControllerDidTransitionToSizeNotification:(id)arg1 ;
-(void)splitViewControllerWillBeginAnimatedTransitionToStateRequest:(id)arg1 ;
-(void)splitViewControllerDidEndAnimatedTransitionToStateRequest:(id)arg1 ;
-(ICTextController *)textController;
-(float)initialContainerWidth;
-(void)setSplitViewControllerDidTransitionToSizeHandler:(id)arg1 ;
-(/*^block*/id)blockToRestoreContentOffset;
-(id)splitViewControllerDidTransitionToSizeHandler;
-(void)setSplitViewControllerDidEndAnimatedTransitionToStateRequestHandler:(id)arg1 ;
-(id)splitViewControllerDidEndAnimatedTransitionToStateRequestHandler;
-(id)initWithNote:(id)arg1 initialContainerWidth:(float)arg2 ;
-(void)dealloc;
-(char)becomeFirstResponder;
-(void)loadView;
-(char)canBecomeFirstResponder;
-(ICLayoutManager *)layoutManager;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)layoutManagerDidInvalidateLayout:(id)arg1 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(char)arg3 ;
-(void)layoutManager:(id)arg1 textContainer:(id)arg2 didChangeGeometryFromSize:(CGSize)arg3 ;
-(ICTextView *)textView;
-(ICNote *)note;
-(void)setNote:(ICNote *)arg1 ;
@end

