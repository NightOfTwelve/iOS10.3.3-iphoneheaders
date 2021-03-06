/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewCell.h>

@class BrowseGlyphViewLayout;

@interface SearchCompletionTableViewCell : UITableViewCell {

	BrowseGlyphViewLayout* _layout;

}

@property (nonatomic,retain) BrowseGlyphViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
+(id)collectionsButtonCell;
+(Class)layoutClass;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(BrowseGlyphViewLayout *)layout;
-(void)setLayout:(BrowseGlyphViewLayout *)arg1 ;
@end

