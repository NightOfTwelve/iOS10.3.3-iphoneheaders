/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableSet, NSArray, UIImage, NSDate, BBSectionInfo, NSSet;

@interface SBBulletinListSection : NSObject {

	NSString* _sectionID;
	int _sectionType;
	id _widget;
	NSMutableArray* _bulletins;
	NSMutableSet* _bulletinIDs;
	NSArray* _sortDescriptors;
	NSString* _displayName;
	UIImage* _iconImage;
	char _showsInLockScreen;
	char _showsMessagePreview;
	unsigned _messageNumberOfLines;
	char _displaysCriticalBulletins;
	NSDate* _lastSortDate;
	NSMutableSet* _subsections;
	UIImage* _largeIconImage;
	BBSectionInfo* _sectionInfo;

}

@property (nonatomic,retain) BBSectionInfo * sectionInfo;                 //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,copy) NSString * sectionID;                          //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) NSArray * bulletins;                       //@synthesize bulletins=_bulletins - In the implementation block
@property (nonatomic,retain) id widget;                                   //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                   //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                         //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * largeIconImage;                    //@synthesize largeIconImage=_largeIconImage - In the implementation block
@property (assign,nonatomic) char showsInLockScreen;                      //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) char showsMessagePreview;                    //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
@property (assign,nonatomic) unsigned messageNumberOfLines;               //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (nonatomic,__weak,readonly) NSSet * subsectionIDs; 
-(char)isWidgetSection;
-(char)isBulletinSection;
-(void)_updateWithSectionInfo:(id)arg1 ;
-(void)setShowsInLockScreen:(char)arg1 forSubsectionID:(id)arg2 ;
-(void)setShowsMessagePreview:(char)arg1 forSubsectionID:(id)arg2 ;
-(id)lastSortDate;
-(unsigned)_indexForNewBulletin:(id)arg1 ;
-(id)_sortDateForBulletin:(id)arg1 ;
-(unsigned)indexOfBulletinID:(id)arg1 ;
-(void)setLargeIconImage:(UIImage *)arg1 ;
-(id)bulletinAtIndex:(unsigned)arg1 ;
-(id)bulletinWithBulletinID:(id)arg1 ;
-(id)_subsectionWithIDCreatingIfNecessary:(id)arg1 ;
-(char)hasClearableBulletins;
-(void)updateWithSectionInfo:(id)arg1 ;
-(int)compareSection:(id)arg1 forOrder:(int)arg2 ;
-(unsigned)replaceBulletin:(id)arg1 withBulletin:(id)arg2 ;
-(char)hasBulletinWithID:(id)arg1 ;
-(UIImage *)largeIconImage;
-(char)showsBulletinIDInLockScreen:(id)arg1 ;
-(char)showsBulletinsInSubsectionIDInLockScreen:(id)arg1 ;
-(char)showsMessagePreviewForBulletinID:(id)arg1 ;
-(char)showsMessagePreviewForBulletinsInSubsectionID:(id)arg1 ;
-(id)description;
-(int)compare:(id)arg1 ;
-(NSString *)sectionID;
-(UIImage *)iconImage;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BBSectionInfo *)sectionInfo;
-(void)setShowsInLockScreen:(char)arg1 ;
-(void)setShowsMessagePreview:(char)arg1 ;
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(unsigned)bulletinCount;
-(id)initWithSectionInfo:(id)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(char)showsMessagePreview;
-(void)setMessageNumberOfLines:(unsigned)arg1 ;
-(NSArray *)bulletins;
-(unsigned)removeBulletin:(id)arg1 ;
-(unsigned)addBulletin:(id)arg1 ;
-(unsigned)messageNumberOfLines;
-(char)showsInLockScreen;
-(NSSet *)subsectionIDs;
-(char)displaysCriticalBulletins;
-(unsigned)_removeBulletin:(id)arg1 ;
-(id)widget;
-(void)setWidget:(id)arg1 ;
@end

