/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>

@protocol UITableViewDelegate;
@class NSObject, UITableView, AAFamilyMember, AAUIProfilePictureStore, NSString;

@interface AAUIFamilyMemberDetailsPageSurrogate : NSObject <UITableViewDelegate> {

	NSObject*<UITableViewDelegate> _remoteTableViewController;
	UITableView* _remoteTableView;
	AAFamilyMember* _familyMember;
	AAUIProfilePictureStore* _pictureStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPage:(id)arg1 forPerson:(id)arg2 account:(id)arg3 store:(id)arg4 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

