/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MSPHistoryDependent.h>

@class MSPHistoryContainer, RAPStorage, NSString;

@interface MSPHistoryRAPStorage : NSObject <MSPHistoryDependent> {

	RAPStorage* _underlyingStorage;
	MSPHistoryContainer* _historyContainer;

}

@property (nonatomic,readonly) RAPStorage * underlyingStorage;                           //@synthesize underlyingStorage=_underlyingStorage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) MSPHistoryContainer * historyContainer;              //@synthesize historyContainer=_historyContainer - In the implementation block
+(Class)recordingClass;
-(id)initWithStorageDirectoryURL:(id)arg1 ;
-(void)saveHistoryEntry:(id)arg1 origin:(int)arg2 searchTicket:(id)arg3 ;
-(MSPHistoryContainer *)historyContainer;
-(void)loadAllRecordingsWithConcurrentBlock:(/*^block*/id)arg1 ;
-(void)editRecordingForHistoryEntryWithStorageIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)saveRecording:(id)arg1 forHistoryEntryWithStorageIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)garbageCollectRAPStorageIfNeeded;
-(RAPStorage *)underlyingStorage;
-(id)init;
-(void)historyContainerPerformMaintenanceForValidIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHistoryContainer:(MSPHistoryContainer *)arg1 ;
@end
