/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class CHManager, AXCloudKitHelper, NSManagedObjectContext;

@interface TTYDatabaseHelper : NSObject {

	sqlite3Ref _database;
	CHManager* _callHistoryManager;
	AXCloudKitHelper* _cloudKitHelper;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(id)sharedHelper;
-(id)init;
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)ttyDirectoryPath;
-(id)ttyDatabaseFilePath;
-(void)storesWillChange:(id)arg1 ;
-(void)contentDidUpdate:(id)arg1 ;
-(void)callHistoryDBDidChange:(id)arg1 ;
-(char)deleteConversationsWithCallUIDs:(id)arg1 ;
-(char)saveIfPossible;
-(char)contactPathWasUsedForTTY:(id)arg1 ;
-(char)contactIDIsTTYContact:(id)arg1 ;
-(id)conversationForCallUID:(id)arg1 ;
-(char)saveConversation:(id)arg1 ;
-(char)deleteConversationWithCallUID:(id)arg1 ;
-(char)contactIsTTYContact:(id)arg1 ;
-(void)setupDatabase;
@end
