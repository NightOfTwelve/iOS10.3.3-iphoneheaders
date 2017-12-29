/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HUInstructionsItem, HFStaticItemProvider;

@interface HOTriggerTypePickerItemManager : HFItemManager {

	HFStaticItem* _locationTriggerItem;
	HFStaticItem* _timerTriggerItem;
	HFStaticItem* _characteristicTriggerItem;
	HFStaticItem* _alarmTriggerItem;
	HUInstructionsItem* _instructionsItem;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HUInstructionsItem * instructionsItem;                  //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * locationTriggerItem;                     //@synthesize locationTriggerItem=_locationTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * timerTriggerItem;                        //@synthesize timerTriggerItem=_timerTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * characteristicTriggerItem;               //@synthesize characteristicTriggerItem=_characteristicTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * alarmTriggerItem;                        //@synthesize alarmTriggerItem=_alarmTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;              //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
-(HFStaticItem *)timerTriggerItem;
-(HFStaticItem *)locationTriggerItem;
-(HFStaticItem *)characteristicTriggerItem;
-(HFStaticItem *)alarmTriggerItem;
-(void)setLocationTriggerItem:(HFStaticItem *)arg1 ;
-(void)setTimerTriggerItem:(HFStaticItem *)arg1 ;
-(void)setCharacteristicTriggerItem:(HFStaticItem *)arg1 ;
-(void)setAlarmTriggerItem:(HFStaticItem *)arg1 ;
-(unsigned)_numberOfSections;
-(id)_identifierForSection:(unsigned)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)_styleForItem:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(HUInstructionsItem *)instructionsItem;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
@end
