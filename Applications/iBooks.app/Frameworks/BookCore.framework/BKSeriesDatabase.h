/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/IMCoreDataSource.h>
#import <BookCore/IMCoreDataSource.h>

@class NSString;

@interface BKSeriesDatabase : IMCoreDataSource <IMCoreDataSource>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managedObjectModelName;
+(id)persistentStoreNameSeed;
+(id)persistentStoreVersion;
+(id)persistentStoreURL;
-(id)init;
-(id)newManagedObjectContext;
@end
