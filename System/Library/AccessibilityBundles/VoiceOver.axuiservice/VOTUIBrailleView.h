/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel, NSArray;

@interface VOTUIBrailleView : UIView {

	NSMutableArray* _dotNumberCircleViews;
	NSMutableArray* _dotNumberHighlightedCircleViews;
	NSMutableArray* _viewsForEightDotBrailleOnly;
	UILabel* _insertedTextLabel;
	NSArray* _dotNumberPositions;
	int _orientation;
	int _typingMode;
	NSArray* _xConstraintsForDotNumbers;
	NSArray* _yConstraintsForDotNumbers;
	NSArray* _typingModeConstraintsForInsertedTextLabel;

}

@property (nonatomic,retain) NSArray * xConstraintsForDotNumbers;                              //@synthesize xConstraintsForDotNumbers=_xConstraintsForDotNumbers - In the implementation block
@property (nonatomic,retain) NSArray * yConstraintsForDotNumbers;                              //@synthesize yConstraintsForDotNumbers=_yConstraintsForDotNumbers - In the implementation block
@property (nonatomic,retain) NSArray * typingModeConstraintsForInsertedTextLabel;              //@synthesize typingModeConstraintsForInsertedTextLabel=_typingModeConstraintsForInsertedTextLabel - In the implementation block
@property (nonatomic,readonly) NSArray * dotNumberPositions;                                   //@synthesize dotNumberPositions=_dotNumberPositions - In the implementation block
@property (nonatomic,readonly) int orientation;                                                //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) int typingMode;                                                 //@synthesize typingMode=_typingMode - In the implementation block
-(id)_xConstraintForDotNumber:(unsigned)arg1 ;
-(id)_yConstraintForDotNumber:(unsigned)arg1 ;
-(unsigned)_numberOfDots;
-(int)typingMode;
-(NSArray *)dotNumberPositions;
-(id)initWithOrientation:(int)arg1 dotNumberPositions:(id)arg2 typingMode:(int)arg3 ;
-(void)highlightBrailleDots:(id)arg1 ;
-(void)flashInsertedText:(id)arg1 ;
-(void)setOrientation:(int)arg1 dotNumberPositions:(id)arg2 typingMode:(int)arg3 ;
-(NSArray *)typingModeConstraintsForInsertedTextLabel;
-(void)_updateWindowOrientation;
-(void)_updateConstantsForDotNumberConstraints;
-(void)_updateDotsSevenAndEightVisibility;
-(id)_generateAndStoreTypingModeConstraintsForInsertedTextLabel;
-(id)_circleViewForDotNumber:(unsigned)arg1 ;
-(id)_highlightedCircleViewForDotNumber:(unsigned)arg1 ;
-(id)_dotCircleImageFilled:(char)arg1 ;
-(id)_constraintsToCenterItem:(id)arg1 withItem:(id)arg2 ;
-(NSArray *)xConstraintsForDotNumbers;
-(NSArray *)yConstraintsForDotNumbers;
-(id)_generateAndStoreConstraintsForDotNumbers;
-(char)_isEightDotBraille;
-(void)setTypingModeConstraintsForInsertedTextLabel:(NSArray *)arg1 ;
-(void)setXConstraintsForDotNumbers:(NSArray *)arg1 ;
-(void)setYConstraintsForDotNumbers:(NSArray *)arg1 ;
-(void)didMoveToWindow;
-(int)orientation;
-(void)_addSubviews;
@end
