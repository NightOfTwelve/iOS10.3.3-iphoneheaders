/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Magnifier.app/Magnifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MAGFilterSelectionControlPanelDelegate <NSObject>
@required
-(void)contrastSliderDraggedToValue:(float)arg1 forControlPanel:(id)arg2;
-(void)brightnessSliderDraggedToValue:(float)arg1 forControlPanel:(id)arg2;
-(void)invertButtonTappedForControlPanel:(id)arg1;
-(void)filtersButtonTappedForControlPanel:(id)arg1;
-(void)dialChangedToFilterSet:(id)arg1 forControlPanel:(id)arg2;

@end
