/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol UITable_RowDataSource <UITable>
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants; 
@property (getter=_headerMarginWidth,nonatomic,readonly) float headerMarginWidth; 
@property (getter=_footerMarginWidth,nonatomic,readonly) float footerMarginWidth; 
@property (getter=_headerRightMarginWidth,nonatomic,readonly) float headerRightMarginWidth; 
@property (getter=_footerRightMarginWidth,nonatomic,readonly) float footerRightMarginWidth; 
@property (getter=_defaultSectionHeaderHeight,nonatomic,readonly) float defaultSectionHeaderHeight; 
@property (getter=_defaultSectionFooterHeight,nonatomic,readonly) float defaultSectionFooterHeight; 
@property (getter=_sidePadding,nonatomic,readonly) float sidePadding; 
@property (getter=_contentInset,nonatomic,readonly) UIEdgeInsets _contentInset; 
@property (getter=_tableContentInset,nonatomic,readonly) UIEdgeInsets tableContentInset; 
@property (getter=_rowSpacing,nonatomic,readonly) float rowSpacing; 
@property (getter=_isTableHeaderAutohiding,nonatomic,readonly) char isTableHeaderAutohiding; 
@property (getter=_heightForTableHeader,nonatomic,readonly) float heightForTableHeader; 
@property (getter=_heightForTableFooter,nonatomic,readonly) float heightForTableFooter; 
@property (getter=_providesRowHeights,nonatomic,readonly) char providesRowHeights; 
@property (getter=_estimatesRowHeights,nonatomic,readonly) char estimatesRowHeights; 
@property (getter=_estimatesSectionHeaderHeights,nonatomic,readonly) char estimatesSectionHeaderHeights; 
@property (getter=_estimatesSectionFooterHeights,nonatomic,readonly) char estimatesSectionFooterHeights; 
@property (getter=_tableHeaderView,nonatomic,readonly) UIView * tableHeaderView; 
@property (getter=_tableFooterView,nonatomic,readonly) UIView * tableFooterView; 
@property (getter=_shouldUseSearchBarHeaderBehavior,nonatomic,readonly) char shouldUseSearchBarHeaderBehavior; 
@property (getter=_shouldUseNewHeaderFooterBehavior,nonatomic,readonly) char shouldUseNewHeaderFooterBehavior; 
@required
-(UIEdgeInsets)_contentInset;
-(char)_shouldUseNewHeaderFooterBehavior;
-(char)_estimatesRowHeights;
-(id)_constants;
-(float)_headerMarginWidth;
-(float)_headerRightMarginWidth;
-(float)_footerMarginWidth;
-(float)_footerRightMarginWidth;
-(float)_defaultSectionHeaderHeight;
-(float)_defaultSectionFooterHeight;
-(char)_estimatesSectionHeaderHeights;
-(char)_estimatesSectionFooterHeights;
-(char)_shouldStripHeaderTopPaddingForSection:(int)arg1;
-(UIEdgeInsets*)_tableContentInset;
-(float)_heightForRowAtIndexPath:(id)arg1;
-(float)_heightForHeaderInSection:(int)arg1;
-(float)_heightForFooterInSection:(int)arg1;
-(float)_estimatedHeightForRowAtIndexPath:(id)arg1;
-(float)_estimatedHeightForHeaderInSection:(int)arg1;
-(float)_estimatedHeightForFooterInSection:(int)arg1;
-(float)_dataSourceHeightForRowAtIndexPath:(id)arg1;
-(float)_dataSourceHeightForHeaderInSection:(int)arg1;
-(float)_dataSourceHeightForFooterInSection:(int)arg1;
-(void)_applyContentSizeDeltaForEstimatedHeightAdjustments:(float)arg1;
-(id)_titleForHeaderInSection:(int)arg1;
-(id)_titleForFooterInSection:(int)arg1;
-(id)_detailTextForHeaderInSection:(int)arg1;
-(id)_viewForHeaderInSection:(int)arg1;
-(id)_viewForFooterInSection:(int)arg1;
-(int)_titleAlignmentForHeaderInSection:(int)arg1;
-(int)_titleAlignmentForFooterInSection:(int)arg1;
-(float)_maxTitleWidthForHeaderInSection:(int)arg1;
-(float)_maxTitleWidthForFooterInSection:(int)arg1;
-(float)_swipeToDeleteOffsetForRow:(int)arg1 inSection:(int)arg2;
-(float)_sidePadding;
-(float)_rowSpacing;
-(char)_isTableHeaderAutohiding;
-(float)_heightForTableHeader;
-(float)_heightForTableFooter;
-(char)_providesRowHeights;
-(id)_tableHeaderView;
-(id)_tableFooterView;
-(char)_shouldUseSearchBarHeaderBehavior;

@end
