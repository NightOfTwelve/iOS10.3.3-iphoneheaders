/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIAlertControllerDescriptor, UITraitCollection, UIInterfaceActionVisualStyle;

@interface UIAlertControllerVisualStyle : NSObject {

	UIAlertControllerDescriptor* _descriptor;
	UITraitCollection* _traitCollection;
	int _forcedInterfaceIdiom;
	UIInterfaceActionVisualStyle* _interfaceActionVisualStyle;

}

@property (assign,nonatomic) int forcedInterfaceIdiom;                                                 //@synthesize forcedInterfaceIdiom=_forcedInterfaceIdiom - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * interfaceActionVisualStyle;              //@synthesize interfaceActionVisualStyle=_interfaceActionVisualStyle - In the implementation block
@property (nonatomic,retain) UIAlertControllerDescriptor * descriptor;                                 //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                      //@synthesize traitCollection=_traitCollection - In the implementation block
+(int)interfaceActionPresentationStyle;
-(id)init;
-(UITraitCollection *)traitCollection;
-(char)isEqual:(id)arg1 ;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(int)maximumNumberOfLinesInMessageLabel;
-(UIEdgeInsets)contentInsets;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(float)minimumWidth;
-(float)maximumWidth;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(CGSize)minimumActionContentSize;
-(id)dimmingViewForAlertController:(id)arg1 ;
-(char)shouldPreserveRespondersAcrossWindows;
-(char)shouldOccludeDuringPresentation;
-(void)positionAlertControllerView:(id)arg1 ofAlertController:(id)arg2 inAvailableSpaceView:(id)arg3 ;
-(char)_shouldReverseActions;
-(id)_keyCommandInputForCancelAction;
-(id)textFieldContainingViewWithTextField:(id)arg1 ;
-(char)placementAvoidsKeyboard;
-(void)setDescriptor:(UIAlertControllerDescriptor *)arg1 ;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(float)textFieldHorizontalMargin;
-(Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
-(id)titleLabelFont;
-(id)titleLabelColor;
-(float)marginAboveTitleLabelFirstBaseline;
-(float)marginBelowLastLabelLastBaseline;
-(int)maximumNumberOfLinesInTitleLabel;
-(int)permittedActionLayoutDirection;
-(UIAlertControllerDescriptor *)descriptor;
-(id)_detailMessageFont;
-(float)_marginAboveDetailMessageFirstBaseline;
-(float)marginBelowTitleLabelLastBaseline;
-(float)marginBelowMessageLabelLastBaseline;
-(float)marginAboveMessageLabelFirstBaseline;
-(float)maximumWidthForTitleAndMessageContentView;
-(float)actionWidthForMinimumActionWidth:(float)arg1 ;
-(char)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
-(double)transitionDurationForPresentation:(char)arg1 ofAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(char)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(UIEdgeInsets)textFieldContentInset;
-(id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2 ;
-(UIInterfaceActionVisualStyle *)interfaceActionVisualStyle;
-(float)contentHorizontalMargin;
-(UIEdgeInsets)actionImageMarginForAction;
-(char)transitionOfType:(int)arg1 shouldBeInteractiveForAlertController:(id)arg2 ;
-(void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)interactionProgressForTransitionOfType:(int)arg1 forAlertController:(id)arg2 ;
-(id)tintColorForAlertController:(id)arg1 ;
-(void)_reloadInterfaceActionVisualStyle;
-(id)preferredActionFont;
-(id)regularActionFont;
-(void)setForcedInterfaceIdiom:(int)arg1 ;
-(float)maximumHeightForDisplayOnScreen:(id)arg1 ;
-(id)defaultActionFont;
-(CGSize)collectionViewOutsetSize;
-(float)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1 ;
-(float)_scaledMarginBelowTitleLabelLastBaseline;
-(float)_scaledMarginAboveMessageLabelFirstBaseline;
-(float)_scaledMarginBelowMessageLabelLastBaseline;
-(float)_scaledMarginBelowLastLabelLastBaseline;
-(float)_scaledMarginAboveDetailMessageFirstBaseline;
-(int)forcedInterfaceIdiom;
@end

