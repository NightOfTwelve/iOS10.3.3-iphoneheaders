/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HMHome, HFStaticItemProvider;

@interface HOUserAccessItemManager : HFItemManager {

	HFStaticItem* _localAccessItem;
	HFStaticItem* _allowRemoteAccessItem;
	HFStaticItem* _allowRemoteAccessFooterItem;
	HFStaticItem* _allowEditingItem;
	HFStaticItem* _allowEditingFooterItem;
	HFStaticItem* _pendingAccessoriesItem;
	HFStaticItem* _removePersonItem;
	HFStaticItem* _cancelInvitationItem;
	HFStaticItem* _inviteAgainItem;
	HMHome* _sourceHome;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HMHome * sourceHome;                                     //@synthesize sourceHome=_sourceHome - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;               //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItem * localAccessItem;                          //@synthesize localAccessItem=_localAccessItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowRemoteAccessItem;                    //@synthesize allowRemoteAccessItem=_allowRemoteAccessItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowRemoteAccessFooterItem;              //@synthesize allowRemoteAccessFooterItem=_allowRemoteAccessFooterItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowEditingItem;                         //@synthesize allowEditingItem=_allowEditingItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * allowEditingFooterItem;                   //@synthesize allowEditingFooterItem=_allowEditingFooterItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * pendingAccessoriesItem;                   //@synthesize pendingAccessoriesItem=_pendingAccessoriesItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * removePersonItem;                         //@synthesize removePersonItem=_removePersonItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * cancelInvitationItem;                     //@synthesize cancelInvitationItem=_cancelInvitationItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * inviteAgainItem;                          //@synthesize inviteAgainItem=_inviteAgainItem - In the implementation block
-(id)_currentSectionIdentifiers;
-(void)setSourceHome:(HMHome *)arg1 ;
-(char)_hasResidentDevice;
-(HMHome *)sourceHome;
-(void)setLocalAccessItem:(HFStaticItem *)arg1 ;
-(void)setAllowRemoteAccessItem:(HFStaticItem *)arg1 ;
-(char)_isRemoteAccessAllowed;
-(id)_user;
-(void)setAllowRemoteAccessFooterItem:(HFStaticItem *)arg1 ;
-(void)setAllowEditingItem:(HFStaticItem *)arg1 ;
-(void)setAllowEditingFooterItem:(HFStaticItem *)arg1 ;
-(void)setPendingAccessoriesItem:(HFStaticItem *)arg1 ;
-(void)setRemovePersonItem:(HFStaticItem *)arg1 ;
-(void)setCancelInvitationItem:(HFStaticItem *)arg1 ;
-(void)setInviteAgainItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)localAccessItem;
-(HFStaticItem *)allowRemoteAccessItem;
-(HFStaticItem *)allowRemoteAccessFooterItem;
-(HFStaticItem *)allowEditingItem;
-(HFStaticItem *)allowEditingFooterItem;
-(HFStaticItem *)pendingAccessoriesItem;
-(HFStaticItem *)removePersonItem;
-(HFStaticItem *)cancelInvitationItem;
-(HFStaticItem *)inviteAgainItem;
-(id)_outgoingInvitation;
-(char)_hasPendingAccessories;
-(char)_includeInviteAgainItem;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 home:(id)arg3 ;
-(id)reuseIdentifierForFooterViewInSection:(unsigned)arg1 ;
-(unsigned)_numberOfSections;
-(id)_identifierForSection:(unsigned)arg1 ;
-(char)_isEditingAllowed;
-(id)_homeFuture;
-(id)_footerTitleForSectionWithIdentifier:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(id)_itemForSorting;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
@end

