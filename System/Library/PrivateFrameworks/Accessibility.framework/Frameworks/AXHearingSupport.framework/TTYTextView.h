/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKit/UITextView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UICollectionViewFlowLayout, UIView, UICollectionView, NSArray, NSString;

@interface TTYTextView : UITextView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {

	int _leftIndex;
	CGPoint _panContentOffset;
	float _currentKeyboardWidth;
	UICollectionViewFlowLayout* _flowLayout;
	UIView* _leftBackgroundColorEdge;
	UIView* _rightBackgroundColorEdge;
	UIView* _middleBackgroundColorEdge;
	UIView* _inputAccessoryPlaceholderView;
	char _showTTYPredictions;
	char _isHandlingKeyboardFrameChanged;
	UICollectionView* _predictionsCollectionView;
	NSArray* _ttyAbbreviations;

}

@property (nonatomic,retain) UICollectionView * predictionsCollectionView;              //@synthesize predictionsCollectionView=_predictionsCollectionView - In the implementation block
@property (nonatomic,retain) NSArray * ttyAbbreviations;                                //@synthesize ttyAbbreviations=_ttyAbbreviations - In the implementation block
@property (assign,nonatomic) char isHandlingKeyboardFrameChanged;                       //@synthesize isHandlingKeyboardFrameChanged=_isHandlingKeyboardFrameChanged - In the implementation block
@property (assign,nonatomic) char showTTYPredictions;                                   //@synthesize showTTYPredictions=_showTTYPredictions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)keyCommands;
-(id)accessibilityIdentifier;
-(int)keyboardType;
-(int)keyboardAppearance;
-(id)inputAccessoryView;
-(char)disableInputBars;
-(void)_keyboardDidHide:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)updateTTYBar;
-(void)overrideTTYPredictionsHidden:(char)arg1 ;
-(float)ttyBarHeight;
-(void)setShowTTYPredictions:(char)arg1 ;
-(void)_kbFrameChanged:(id)arg1 ;
-(void)_loadTTYAbbreviations;
-(float)_predictionsCellHeight;
-(void)setPredictionsCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)predictionsCollectionView;
-(void)setIsHandlingKeyboardFrameChanged:(char)arg1 ;
-(void)_didPanPredictions:(id)arg1 ;
-(void)setTtyAbbreviations:(NSArray *)arg1 ;
-(void)_updateBlackBarPositioning;
-(void)_tapTTYBarCell:(id)arg1 ;
-(NSArray *)ttyAbbreviations;
-(void)_updateTTYBarPosition;
-(int)_predictionsPerPage;
-(char)isHandlingKeyboardFrameChanged;
-(void)_resetTTYBarPosition;
-(char)_isKeyboardPredictionsEnabled;
-(void)_insertWhitespaceIfNeeded;
-(void)_didSwipeLeft:(id)arg1 ;
-(char)showTTYPredictions;
@end

