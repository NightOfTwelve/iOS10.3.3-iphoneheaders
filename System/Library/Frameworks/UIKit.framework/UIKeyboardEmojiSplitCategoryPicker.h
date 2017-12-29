/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardEmojiSplit.h>

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit {

	char _whiteText;
	unsigned _currentSelected;
	int _lastUsedCategory;

}

@property (assign) char whiteText;              //@synthesize whiteText=_whiteText - In the implementation block
-(void)dealloc;
-(void)didMoveToWindow;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)whiteText;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateToCategory:(int)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)updateCategorySelectedIndicator:(int)arg1 ;
-(id)titleForRow:(int)arg1 fallback:(char)arg2 ;
-(id)symbolForRow:(int)arg1 ;
-(void)setWhiteText:(char)arg1 ;
@end
