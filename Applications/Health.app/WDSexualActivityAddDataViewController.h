/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDAddDataViewController.h>
#import <Health/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, NSString;

@interface WDSexualActivityAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _dateEntryItem;
	WDAddDataManualEntryItem* _protectionUsedEntryItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)manualEntryItemsForSection:(int)arg1 ;
-(id)generateHKObjects;
-(id)initWithDataUnit:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(int)numberOfSections;
@end

